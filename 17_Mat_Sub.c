#include <stdio.h>
void main()
{
    int m, n, p, q;
    printf("Enter size of Array A:\n");
    scanf("%d%d", &m, &n);
    printf("Enter size of Array B:\n");
    scanf("%d%d", &p, &q);
    if (m != p || n != q)
    {
        printf("Addition Not Possible");
    }
    else
    {
        int a[m][n], b[p][q], c[m][n];
        int i, j;
        printf("Enter elements of Array a:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter elements of Array b:\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("Addition:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
}