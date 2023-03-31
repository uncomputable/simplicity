module Simplicity.BitMachine.StaticAnalysis.Cost
  ( Weight, TermWeight(..)
  ) where

import Data.Fixed (Milli)

import Simplicity.Term.Core
import Simplicity.BitMachine.Ty

-- | Simplicity CPU cost is measured in 'Weight' units, the same units as Bitcoin transaction size.
-- Simplicity expressions are weighed to 3 decimal places of accuracy.
type Weight = Milli

-- | The CPU weight of a Simplicity expression.
--
-- Note that serializing an expression could generalize the types of expressions and sub-expressions, lowering the weight.
newtype TermWeight a b = TermWeight { weigh :: Weight }

instance Core TermWeight where
  iden = result
    where
     result = TermWeight $ overhead + milli (bitSizeR (reifyProxy result))
  comp s0@(TermWeight s) (TermWeight t) = TermWeight $ overhead + milli (bitSizeR (reifyProxy s0)) + s + t
  unit = TermWeight overhead
  injl (TermWeight s) = TermWeight $ overhead + s
  injr (TermWeight s) = TermWeight $ overhead + s
  match (TermWeight s) (TermWeight t) = TermWeight $ overhead + max s t
  pair (TermWeight s) (TermWeight t) = TermWeight $ overhead + s + t
  take (TermWeight s) = TermWeight $ overhead + s
  drop (TermWeight s) = TermWeight $ overhead + s

instance Assert TermWeight where
  assertl s _ = match s (TermWeight 0)
  assertr _ t = match (TermWeight 0) t
  fail _ = TermWeight 0

instance Witness TermWeight where
  witness _ = result
   where
    result = TermWeight $ fromInteger (bitSizeR (reifyProxy result))

instance Delegate TermWeight where
  disconnect s0@(TermWeight s) t0@(TermWeight t) = TermWeight $ overhead + milli (2 * bitSizeR (reifyProxy s0) + bitSizeR (reifyProxy t0)) + s + t

-- :TODO: This overhead is just estimated.  It needs to be replaced with a measured value.
overhead :: Weight
overhead = 0.01

milli :: Integer -> Weight
milli n = fromInteger n / 1000
