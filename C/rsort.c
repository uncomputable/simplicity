#include "rsort.h"

#include <string.h>

/* Return the 'i'th char of the object representation of the midstate pointed to by a.
 *
 * In C, values are represented as 'unsigned char [sizeof(v)]' array.  However the exact
 * specification of how this represenation works is implementation defined.
 *
 * For the 'uint32_t' values of 'sha256_midstate', the object representation of these values will differ
 * between big endian and little endian archtectures.
 *
 * Precondition: NULL != a
 *               i < sizeof(a->s);
 */
static unsigned char readIndex(const sha256_midstate* a, size_t i) {
  return ((const unsigned char*)(a->s))[i];
}

/* Given an array of midstate pointers,
 * count the frequencies of the values of the 'j'th character of each midstate's internal representation.
 * Returns 'true' if the 'j'th character of every entry is the same, otherwise returns 'false'.
 *
 * The time complexity of 'freq' is O('len').
 *
 * Precondition: size_t result[CHAR_COUNT];
 *               const sha256_midstate * const a[len];
 *               j < sizeof((*a)->s)
 */
static bool freq(size_t* result, const sha256_midstate * const * a, size_t len, size_t j) {
  memset(result, 0, CHAR_COUNT * sizeof(size_t));

  if (0 == len) return true;

  for (size_t i = 0; i < len - 1; ++i) {
    result[readIndex(a[i],j)]++;
  }

  /* Check the final iteration to see if the frequency is equal to 'len'. */
  return len == ++result[readIndex(a[len-1],j)];
}

/* Given an array of bucket sizes, return an array of their cumulative sizes.
 *
 * Precondition: size_t result[CHAR_COUNT];
 *               const size_t sizes[CHAR_COUNT];
 */
static void cumulative(size_t* restrict result, const size_t* restrict sizes) {
  size_t accumulator = 0;

  for (size_t i = 0; i < CHAR_COUNT; ++i) {
    accumulator += sizes[i];
    result[i] = accumulator;
  }
}

/* Given an array of bucket end indices (i.e. the result of 'cumulative'),
 * Return the starting position of the 'i'th bucket.
 *
 * Precondition: size_t ends[CHAR_COUNT];
 *               i < CHAR_COUNT;
 */
static size_t bucketStart(const size_t* ends, size_t i) {
  return i ? ends[i-1] : 0;
}

/* Exchange two pointers.
 * (a == b is acceptable.)
 *
 * Precondition: NULL != a;
 *               NULL != b;
 */
static void swap(const sha256_midstate** a, const sha256_midstate** b) {
  const sha256_midstate* tmp = *a;
  *a = *b;
  *b = tmp;
}

/* Attempts to (partially) sort an array of pointers to 'sha256_midstate's in place in memcmp order.
 * If duplicate entries are found, the sorting is aborted and one of pointers to a duplicate entry is returned.
 * Otherwise if no duplicate entries are found 'NULL' is returned.
 *
 * The maximum recursion depth is 'sizeof((*a)->s)'.  With some effort 'rsort' could be rewritten to be non-recursive.
 * The time complexity of rsort is O('len').
 *
 * Precondition: size_t scratch[(sizeof((*a)->s) - ix + 1)*CHAR_COUNT];
 *               For all 0 <= i < len, NULL != a[i];
 *               ix <= sizeof((*a)->s);
 */
const sha256_midstate* rsort(size_t* scratch, const sha256_midstate** a, size_t len, size_t ix) {
  /* An array of length 0 or 1 is sorted and without duplicates. */
  if (len < 2) return NULL;

  /* An array of empty strings of length 2 or more has duplicates. */
  if (sizeof((*a)->s) <= ix) return a[0];

  size_t* bucketEnds = scratch;

  {
    size_t* bucketSize = scratch + CHAR_COUNT;

    /* The time complexity of 'freq' is O('len'). */
    while (freq(bucketSize, a, len, ix)) {
      /* If there is only one non-empty bucket, then we can proceed directly to the next index. */
      ix++;
      if (sizeof((*a)->s) <= ix) return a[0];
    };

    cumulative(bucketEnds, bucketSize);
    simplicity_assert(len == bucketEnds[UCHAR_MAX]);

    for (size_t i = 0; i < CHAR_COUNT; ++i) {
      size_t start = bucketStart(bucketEnds, i);
      while (bucketSize[i]) {
        /* Each time through this loop some bucketSize is decremented.
         * Therefore this body is executed 'len' many times per call to rsort.
         */
        size_t bucket = readIndex(a[start], ix);
        simplicity_assert(bucketSize[bucket]);
        bucketSize[bucket]--;
        swap(a + start, a + bucketStart(bucketEnds, bucket) + bucketSize[bucket]);
      }
    }
  }

  for (size_t i = 0; i < CHAR_COUNT; ++i) {
    size_t start = bucketStart(bucketEnds, i);
    /* By induction this rsort call takes O('bucketEnds'['i'] - 'start') time.
     * There is one call per bucket, so the total cost of these recursive calls is O('len').
     */
    const sha256_midstate* rec = rsort(scratch + CHAR_COUNT, a + start, bucketEnds[i] - start, ix + 1);
    if (rec) return rec;
  }

  return NULL;
}
