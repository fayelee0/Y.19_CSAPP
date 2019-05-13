#define N 16

typedef int fix_martix[N][N];


/* Compute i, k of matrix product */
int fix_prod_ele(fix_martix A, fix_martix B, long i, long k)
{
        int result = 0;
        for (long j = 0; j < N; j++) {
                result += A[i][j] * B[j][k];
        }
        return result;
}

/* Compute i, k of fixed matrix product */
int fix_prod_ele_opt(fix_martix A, fix_martix B, long i, long k)
{
        int* Aptr = &A[i][0];
        int* Bptr = &B[0][k];
        int* Bend = &B[N][k];
        int result = 0;
        do {
                result += *Aptr * *Bptr;
                Aptr++;
                Bptr += N;
        } while (Bptr != Bend);
        return result;
}
