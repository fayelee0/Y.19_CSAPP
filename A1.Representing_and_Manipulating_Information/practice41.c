/**
 * Practice 41
 *
 * Form A: (x << n) + (x << (n-1)) + ... + (x << m)
 *
 *   shift: n - m + 1
 *   add  : n - m
 *
 * Form B: (x << (n+1)) - (x << m)
 *
 *   shift: 2
 *   add  : 1
 *
 * if n = m; use A
 * if n = m+1; use A or B
 * if n > m+1; use B
 *
 */
