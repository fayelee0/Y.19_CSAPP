#define N 16

typedef int fix_matrix[N][N];

/* Compute i, k of fixed matrix product */
int fix_prod_ele(fix_matrix A, fix_matrix B, long i, long k)
{
        int result = 0;
        for (int j = 0; j < N; j++) {
                result += A[i][j] * B[j][k];
        }
        return result;
}

/*
 * .fix_prod_ele:
 *     movl   $0, %r8d                     ; j = 0
 *     movl   $0, %eax                     ; result = 0
 * .L2:
 *     cmpl   $15, %r8d                    ; j cmp 15
 *     jg     .L4                          ; if j > 15 return
 *     movq   %rdx, %r10                   ; i
 *     salq   $6, %r10                     ; i * 64
 *     addq   %rdi, %r10                   ; X_A + 64 * i
 *     movslq %r8d, %r11                   ; j
 *     movq   %r11, %r9                    ; j
 *     salq   $6, %r9                      ; j * 64
 *     addq   %rsi, %r9                    ; X_B + 64 * j
 *     movl   (%r9, %rcx, 4), %r9d         ; t = B[j][k]
 *     imull  (%r10, %r11, 4), %r9d        ; t = A[i][j] * B[j][k]
 *     addl   %r9d, %eax                   ; result += t
 *     addl   $1, %r8d                     ; j++
 *     jmp   .L2
 * .L4:
 *     ret
 *
 */
