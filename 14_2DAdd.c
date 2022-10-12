#include <stdio.h>
void main()
{
    int m, n;
    printf("Enter row and coloumn:\n");
    scanf("%d%d", &m, &n);
    int A[m][n], *org, i, j, adr;
    printf("Enter index i, j:\n");
    scanf("%d%d", &i, &j);
    org = &A[i][j];
    adr = A + i;
    adr = adr + (j * sizeof(A[i][j]));
    printf("adrress of %d,%d index is %d\n", i, j, adr);
    if (org == adr)
        printf("Verified");
}
