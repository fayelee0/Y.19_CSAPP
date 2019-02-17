/**
 * Practice 09
 *
 * | R | G | B | Color   | ~   | Color   |
 * |---------------------|-----|---------|
 * | 0 | 0 | 0 | Black   | 111 | White   |
 * | 0 | 0 | 1 | Blue    | 110 | Yellow  |
 * | 0 | 1 | 0 | Green   | 101 | Megenta |
 * | 0 | 1 | 1 | Cyan    | 100 | Red     |
 * | 1 | 0 | 0 | Red     | 011 | Cyan    |
 * | 1 | 0 | 1 | Megenta | 010 | Green   |
 * | 1 | 1 | 0 | Yellow  | 001 | Blue    |
 * | 1 | 1 | 1 | White   | 000 | Black   |
 *
 * Blue   | Green   = 001 | 010 = 011 = Cyan
 * Yellow & Cyan    = 110 & 011 = 010 = Green
 * Red    ^ Magenta = 100 ^ 101 = 001 = Blue
 *
 */
