#include <stdio.h>
void main()
{
    printf("Anjney Mishra\n");
    int m, n;
    printf("Enter size of matrix A (mxn):\n");
    scanf("%d%d", &m, &n);
    int p, q;
    printf("Enter size of matrix B (pxq):\n");
    scanf("%d%d", &p, &q);

    if (n != p)
        printf("Multiplication Not Possible");
    else
    {
        int a[m][n];
        printf("Enter size of Elements of A:\n");
        int i, j, k;
        for (i = 1; i <= m; i++)
        {
            for (j = 1; j <= n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int b[p][q];
        printf("Enter size of Elements of B:\n");
        for (i = 1; i <= p; i++)
        {
            for (j = 1; j <= q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("PRODUCT\n");
        int c[m][q];
        for (i = 1; i <= m; i++)
        {
            for (j = 1; j <= q; j++)
            {
                c[i][j] = 0;
                for (k = 1; k <= p; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
}