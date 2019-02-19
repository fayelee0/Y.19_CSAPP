/**
 * Practice 39
 *
 * Form A: (x << n) + (x << (n-1)) + ... + (x << m)
 * Form B: (x << (n+1)) - (x << m)
 *
 * if n is most significant, x << N is 0
 * Form B: -(x << m)
 *
 */
