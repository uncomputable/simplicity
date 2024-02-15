#include "jets.h"
#include "wrappers.h"

COREWRAP_(verify)
COREWRAP_(low_1)
COREWRAP_(low_8)
COREWRAP_(low_16)
COREWRAP_(low_32)
COREWRAP_(low_64)
COREWRAP_(high_1)
COREWRAP_(high_8)
COREWRAP_(high_16)
COREWRAP_(high_32)
COREWRAP_(high_64)
COREWRAP_(complement_1)
COREWRAP_(complement_8)
COREWRAP_(complement_16)
COREWRAP_(complement_32)
COREWRAP_(complement_64)
COREWRAP_(and_1)
COREWRAP_(and_8)
COREWRAP_(and_16)
COREWRAP_(and_32)
COREWRAP_(and_64)
COREWRAP_(or_1)
COREWRAP_(or_8)
COREWRAP_(or_16)
COREWRAP_(or_32)
COREWRAP_(or_64)
COREWRAP_(xor_1)
COREWRAP_(xor_8)
COREWRAP_(xor_16)
COREWRAP_(xor_32)
COREWRAP_(xor_64)
COREWRAP_(maj_1)
COREWRAP_(maj_8)
COREWRAP_(maj_16)
COREWRAP_(maj_32)
COREWRAP_(maj_64)
COREWRAP_(xor_xor_1)
COREWRAP_(xor_xor_8)
COREWRAP_(xor_xor_16)
COREWRAP_(xor_xor_32)
COREWRAP_(xor_xor_64)
COREWRAP_(ch_1)
COREWRAP_(ch_8)
COREWRAP_(ch_16)
COREWRAP_(ch_32)
COREWRAP_(ch_64)
COREWRAP_(some_1)
COREWRAP_(some_8)
COREWRAP_(some_16)
COREWRAP_(some_32)
COREWRAP_(some_64)
COREWRAP_(all_8)
COREWRAP_(all_16)
COREWRAP_(all_32)
COREWRAP_(all_64)
COREWRAP_(eq_1)
COREWRAP_(eq_8)
COREWRAP_(eq_16)
COREWRAP_(eq_32)
COREWRAP_(eq_64)
COREWRAP_(eq_256)
COREWRAP_(full_left_shift_8_1)
COREWRAP_(full_left_shift_8_2)
COREWRAP_(full_left_shift_8_4)
COREWRAP_(full_left_shift_16_1)
COREWRAP_(full_left_shift_16_2)
COREWRAP_(full_left_shift_16_4)
COREWRAP_(full_left_shift_16_8)
COREWRAP_(full_left_shift_32_1)
COREWRAP_(full_left_shift_32_2)
COREWRAP_(full_left_shift_32_4)
COREWRAP_(full_left_shift_32_8)
COREWRAP_(full_left_shift_32_16)
COREWRAP_(full_left_shift_64_1)
COREWRAP_(full_left_shift_64_2)
COREWRAP_(full_left_shift_64_4)
COREWRAP_(full_left_shift_64_8)
COREWRAP_(full_left_shift_64_16)
COREWRAP_(full_left_shift_64_32)
COREWRAP_(full_right_shift_8_1)
COREWRAP_(full_right_shift_8_2)
COREWRAP_(full_right_shift_8_4)
COREWRAP_(full_right_shift_16_1)
COREWRAP_(full_right_shift_16_2)
COREWRAP_(full_right_shift_16_4)
COREWRAP_(full_right_shift_16_8)
COREWRAP_(full_right_shift_32_1)
COREWRAP_(full_right_shift_32_2)
COREWRAP_(full_right_shift_32_4)
COREWRAP_(full_right_shift_32_8)
COREWRAP_(full_right_shift_32_16)
COREWRAP_(full_right_shift_64_1)
COREWRAP_(full_right_shift_64_2)
COREWRAP_(full_right_shift_64_4)
COREWRAP_(full_right_shift_64_8)
COREWRAP_(full_right_shift_64_16)
COREWRAP_(full_right_shift_64_32)
COREWRAP_(leftmost_8_1)
COREWRAP_(leftmost_8_2)
COREWRAP_(leftmost_8_4)
COREWRAP_(leftmost_16_1)
COREWRAP_(leftmost_16_2)
COREWRAP_(leftmost_16_4)
COREWRAP_(leftmost_16_8)
COREWRAP_(leftmost_32_1)
COREWRAP_(leftmost_32_2)
COREWRAP_(leftmost_32_4)
COREWRAP_(leftmost_32_8)
COREWRAP_(leftmost_32_16)
COREWRAP_(leftmost_64_1)
COREWRAP_(leftmost_64_2)
COREWRAP_(leftmost_64_4)
COREWRAP_(leftmost_64_8)
COREWRAP_(leftmost_64_16)
COREWRAP_(leftmost_64_32)
COREWRAP_(rightmost_8_1)
COREWRAP_(rightmost_8_2)
COREWRAP_(rightmost_8_4)
COREWRAP_(rightmost_16_1)
COREWRAP_(rightmost_16_2)
COREWRAP_(rightmost_16_4)
COREWRAP_(rightmost_16_8)
COREWRAP_(rightmost_32_1)
COREWRAP_(rightmost_32_2)
COREWRAP_(rightmost_32_4)
COREWRAP_(rightmost_32_8)
COREWRAP_(rightmost_32_16)
COREWRAP_(rightmost_64_1)
COREWRAP_(rightmost_64_2)
COREWRAP_(rightmost_64_4)
COREWRAP_(rightmost_64_8)
COREWRAP_(rightmost_64_16)
COREWRAP_(rightmost_64_32)
COREWRAP_(left_pad_low_1_8)
COREWRAP_(left_pad_low_1_16)
COREWRAP_(left_pad_low_8_16)
COREWRAP_(left_pad_low_1_32)
COREWRAP_(left_pad_low_8_32)
COREWRAP_(left_pad_low_16_32)
COREWRAP_(left_pad_low_1_64)
COREWRAP_(left_pad_low_8_64)
COREWRAP_(left_pad_low_16_64)
COREWRAP_(left_pad_low_32_64)
COREWRAP_(left_pad_high_1_8)
COREWRAP_(left_pad_high_1_16)
COREWRAP_(left_pad_high_8_16)
COREWRAP_(left_pad_high_1_32)
COREWRAP_(left_pad_high_8_32)
COREWRAP_(left_pad_high_16_32)
COREWRAP_(left_pad_high_1_64)
COREWRAP_(left_pad_high_8_64)
COREWRAP_(left_pad_high_16_64)
COREWRAP_(left_pad_high_32_64)
COREWRAP_(left_extend_1_8)
COREWRAP_(left_extend_1_16)
COREWRAP_(left_extend_8_16)
COREWRAP_(left_extend_1_32)
COREWRAP_(left_extend_8_32)
COREWRAP_(left_extend_16_32)
COREWRAP_(left_extend_1_64)
COREWRAP_(left_extend_8_64)
COREWRAP_(left_extend_16_64)
COREWRAP_(left_extend_32_64)
COREWRAP_(right_pad_low_1_8)
COREWRAP_(right_pad_low_1_16)
COREWRAP_(right_pad_low_8_16)
COREWRAP_(right_pad_low_1_32)
COREWRAP_(right_pad_low_8_32)
COREWRAP_(right_pad_low_16_32)
COREWRAP_(right_pad_low_1_64)
COREWRAP_(right_pad_low_8_64)
COREWRAP_(right_pad_low_16_64)
COREWRAP_(right_pad_low_32_64)
COREWRAP_(right_pad_high_1_8)
COREWRAP_(right_pad_high_1_16)
COREWRAP_(right_pad_high_8_16)
COREWRAP_(right_pad_high_1_32)
COREWRAP_(right_pad_high_8_32)
COREWRAP_(right_pad_high_16_32)
COREWRAP_(right_pad_high_1_64)
COREWRAP_(right_pad_high_8_64)
COREWRAP_(right_pad_high_16_64)
COREWRAP_(right_pad_high_32_64)
COREWRAP_(right_extend_8_16)
COREWRAP_(right_extend_8_32)
COREWRAP_(right_extend_16_32)
COREWRAP_(right_extend_8_64)
COREWRAP_(right_extend_16_64)
COREWRAP_(right_extend_32_64)
COREWRAP_(left_shift_with_8)
COREWRAP_(left_shift_with_16)
COREWRAP_(left_shift_with_32)
COREWRAP_(left_shift_with_64)
COREWRAP_(left_shift_8)
COREWRAP_(left_shift_16)
COREWRAP_(left_shift_32)
COREWRAP_(left_shift_64)
COREWRAP_(right_shift_with_8)
COREWRAP_(right_shift_with_16)
COREWRAP_(right_shift_with_32)
COREWRAP_(right_shift_with_64)
COREWRAP_(right_shift_8)
COREWRAP_(right_shift_16)
COREWRAP_(right_shift_32)
COREWRAP_(right_shift_64)
COREWRAP_(left_rotate_8)
COREWRAP_(left_rotate_16)
COREWRAP_(left_rotate_32)
COREWRAP_(left_rotate_64)
COREWRAP_(right_rotate_8)
COREWRAP_(right_rotate_16)
COREWRAP_(right_rotate_32)
COREWRAP_(right_rotate_64)

COREWRAP_(one_8)
COREWRAP_(one_16)
COREWRAP_(one_32)
COREWRAP_(one_64)
COREWRAP_(add_8)
COREWRAP_(add_16)
COREWRAP_(add_32)
COREWRAP_(add_64)
COREWRAP_(full_add_8)
COREWRAP_(full_add_16)
COREWRAP_(full_add_32)
COREWRAP_(full_add_64)
COREWRAP_(full_increment_8)
COREWRAP_(full_increment_16)
COREWRAP_(full_increment_32)
COREWRAP_(full_increment_64)
COREWRAP_(increment_8)
COREWRAP_(increment_16)
COREWRAP_(increment_32)
COREWRAP_(increment_64)
COREWRAP_(subtract_8)
COREWRAP_(subtract_16)
COREWRAP_(subtract_32)
COREWRAP_(subtract_64)
COREWRAP_(full_decrement_8)
COREWRAP_(full_decrement_16)
COREWRAP_(full_decrement_32)
COREWRAP_(full_decrement_64)
COREWRAP_(decrement_8)
COREWRAP_(decrement_16)
COREWRAP_(decrement_32)
COREWRAP_(decrement_64)
COREWRAP_(negate_8)
COREWRAP_(negate_16)
COREWRAP_(negate_32)
COREWRAP_(negate_64)
COREWRAP_(full_subtract_8)
COREWRAP_(full_subtract_16)
COREWRAP_(full_subtract_32)
COREWRAP_(full_subtract_64)
COREWRAP_(multiply_8)
COREWRAP_(multiply_16)
COREWRAP_(multiply_32)
COREWRAP_(multiply_64)
COREWRAP_(full_multiply_8)
COREWRAP_(full_multiply_16)
COREWRAP_(full_multiply_32)
COREWRAP_(full_multiply_64)
COREWRAP_(is_zero_8)
COREWRAP_(is_zero_16)
COREWRAP_(is_zero_32)
COREWRAP_(is_zero_64)
COREWRAP_(is_one_8)
COREWRAP_(is_one_16)
COREWRAP_(is_one_32)
COREWRAP_(is_one_64)
COREWRAP_(le_8)
COREWRAP_(le_16)
COREWRAP_(le_32)
COREWRAP_(le_64)
COREWRAP_(lt_8)
COREWRAP_(lt_16)
COREWRAP_(lt_32)
COREWRAP_(lt_64)
COREWRAP_(min_8)
COREWRAP_(min_16)
COREWRAP_(min_32)
COREWRAP_(min_64)
COREWRAP_(max_8)
COREWRAP_(max_16)
COREWRAP_(max_32)
COREWRAP_(max_64)
COREWRAP_(median_8)
COREWRAP_(median_16)
COREWRAP_(median_32)
COREWRAP_(median_64)
COREWRAP_(div_mod_8)
COREWRAP_(div_mod_16)
COREWRAP_(div_mod_32)
COREWRAP_(div_mod_64)
COREWRAP_(divide_8)
COREWRAP_(divide_16)
COREWRAP_(divide_32)
COREWRAP_(divide_64)
COREWRAP_(modulo_8)
COREWRAP_(modulo_16)
COREWRAP_(modulo_32)
COREWRAP_(modulo_64)
COREWRAP_(divides_8)
COREWRAP_(divides_16)
COREWRAP_(divides_32)
COREWRAP_(divides_64)

COREWRAP_(sha_256_iv)
COREWRAP_(sha_256_block)
COREWRAP_(sha_256_ctx_8_init)
COREWRAP_(sha_256_ctx_8_add_1)
COREWRAP_(sha_256_ctx_8_add_2)
COREWRAP_(sha_256_ctx_8_add_4)
COREWRAP_(sha_256_ctx_8_add_8)
COREWRAP_(sha_256_ctx_8_add_16)
COREWRAP_(sha_256_ctx_8_add_32)
COREWRAP_(sha_256_ctx_8_add_64)
COREWRAP_(sha_256_ctx_8_add_128)
COREWRAP_(sha_256_ctx_8_add_256)
COREWRAP_(sha_256_ctx_8_add_512)
COREWRAP_(sha_256_ctx_8_add_buffer_511)
COREWRAP_(sha_256_ctx_8_finalize)

COREWRAP_(fe_normalize)
COREWRAP_(fe_negate)
COREWRAP_(fe_add)
COREWRAP_(fe_square)
COREWRAP_(fe_multiply)
COREWRAP_(fe_multiply_beta)
COREWRAP_(fe_invert)
COREWRAP_(fe_square_root)
COREWRAP_(fe_is_zero)
COREWRAP_(fe_is_odd)
COREWRAP_(scalar_normalize)
COREWRAP_(scalar_negate)
COREWRAP_(scalar_add)
COREWRAP_(scalar_square)
COREWRAP_(scalar_multiply)
COREWRAP_(scalar_multiply_lambda)
COREWRAP_(scalar_invert)
COREWRAP_(scalar_is_zero)
COREWRAP_(gej_infinity)
COREWRAP_(gej_rescale)
COREWRAP_(gej_normalize)
COREWRAP_(gej_negate)
COREWRAP_(ge_negate)
COREWRAP_(gej_double)
COREWRAP_(gej_add)
COREWRAP_(gej_ge_add_ex)
COREWRAP_(gej_ge_add)
COREWRAP_(gej_is_infinity)
COREWRAP_(gej_equiv)
COREWRAP_(gej_ge_equiv)
COREWRAP_(gej_x_equiv)
COREWRAP_(gej_y_is_odd)
COREWRAP_(gej_is_on_curve)
COREWRAP_(ge_is_on_curve)
COREWRAP_(scale)
COREWRAP_(generate)
COREWRAP_(linear_combination_1)
COREWRAP_(linear_verify_1)
COREWRAP_(decompress)
COREWRAP_(point_verify_1)
COREWRAP_(check_sig_verify)
COREWRAP_(bip_0340_verify)
COREWRAP_(parse_lock)
COREWRAP_(parse_sequence)
