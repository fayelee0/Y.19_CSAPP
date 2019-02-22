/**
 * float-pointing
 *
 * form
 * (-1)^s * M * 2^E
 *
 * common
 * ------
 * 1. k is E bit size
 * 2. bias = 2^(k-1) - 1
 * 3. e is unsigned number having bit representation exp
 *
 * Case 1: Normalized Values
 *
 *   single-precision
 *   ----------------
 *   1. 1bit s, 8bit exp, 23bit frac, total 32bit
 *   2. M = 1 + frac
 *   3. E = e - Bias
 *   4. bias = 2^(8-1) - 1 = 127
 *   5. e in (0,    255) or [1,    254]
 *   6. E in (-127, 128) or [-126, 127]
 *
 *   double-precision
 *   ----------------
 *   1. 1bits s, 11bit exp, 52bit frac, total 64bit
 *   2. M = 1 + frac
 *   3. E = e - Bias
 *   4. bias = 2^(11-1) - 1 = 1023
 *   5. e in (0,     2047) or [1,     2046]
 *   6. E in (-1023, 1024) or [-1022, 1023]
 *
 *
 * Case 2: Denormalized Values
 *
 *   exponent field is all zeros
 *
 *   single-precision
 *   ----------------
 *   1. bias = 2^(8-1) - 1 = 127
 *   2. E = 1 - bias = -126
 *
 *   double-precision
 *   ----------------
 *   1. bias = 2^(11-1) - 1 = 1023
 *   2. E = 1 - bias = -1022
 *
 *
 * Case 3: Special Values
 *
 *   exponent field is all ones
 *
 *   Infinity
 *   --------
 *   1. frac field is all zeros
 *   2. s = 0, value is +Infinity
 *   3. s = 1, value is -Infinity
 *
 *   Not a Number
 *   ------------
 *   1. frac field is not all zeros
 *   2. value is NaN
 *
 *
 * Special Values:
 *
 *   1. +0.0
 *
 *      F: 0x00000000
 *      D: 0x0000000000000000
 *
 *   2. the smallest positive denormalized value
 *
 *      F: 0x00000001
 *      D: 0x0000000000000001
 *
 *      M: = f = 2^(-n)
 *      E: 1 - bias = 1 - 2^(k-1) + 1 = -2^(k-1) + 2
 *      V: = M * 2^E = 2^(-n) * 2^(-2(k-1) + 2) = 2^(-n - 2^(k-1) + 2)
 *
 *   3. the largest positive denormalized value
 *
 *      F: 0x007FFFFF
 *      D: 0x000FFFFFFFFFFFFF
 *
 *      M: = f = 1 - 2^(-n)
 *      E: 1 - bias = 1 - 2^(k-1) + 1 = 2^(k-1) + 2
 *      V: = M * 2^E = [1 - 2^(-n)] * 2^[2^(k-1) + 2]
 *
 *   4. the smallest positive normalized value
 *
 *      F: 0x00800000
 *      D: 0x0010000000000000
 *
 *      M: = 1 + f = 1
 *      e: = 1
 *      E: = e - bias = 1 - [2^(k-1) - 1] = -2^(k-1) + 2
 *      V: = M * 2^E = 2^[-2^(k-1) + 2]
 *
 *   5. +1.0
 *
 *      F: 0x2F800000
 *      D: 0x2FF0000000000000
 *
 *      M: = 1 + f = 1
 *      e: = 2^(k-1) - 1
 *      E: = e - bias = 0
 *      V: = M * 2^E = 1
 *
 *    6. the largest normalized value
 *
 *       F: 0x7F000000
 *       D: 0x7FE0000000000000
 *
 *       f: = 1 - 2^(-n)
 *       M: = 1 + f = 1 + (1 - 2^(-n)) = 2 - 2^(-n)
 *       e: = 2^k - 2
 *       E: = e - bias = 2^k - 2 - (2^(k-1) - 1) = 2^(k-1) - 1
 *       V: = M * 2^E = (2 - 2^(-n)) * 2^(2^(k-1) - 1) = (1 - 2^(-n-1)) * 2^(2^(k-1))
 *
 */
