#include <stdio.h>
void main()
{
    int m, n, o;
    printf("Enter row, column, page:\n");
    scanf("%d%d%d", &m, &n, &o);
    int A[m][n][o], *org, i, j, k, adr;
    printf("Enter the index i,j,k:\n");
    scanf("%d%d%d", &i, &j, &k);
    org = &A[i][j][k];
    adr = A + i;
    adr = adr + (j * o * sizeof(A[i][j][k]));
    adr = adr + (k * sizeof(A[i][j][k]));
    printf("Address of %d,%d,%d index is: %d\n", i, j, k, adr);
    if (org == adr)
        printf("Verified");
}
