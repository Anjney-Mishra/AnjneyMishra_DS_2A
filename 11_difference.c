#include <stdio.h>
void main()
{
    int m, n;
    printf("Enter Size Of Array A and B:\n");
    scanf("%d%d", &m ,&n);
    int a[m], b[n];
    printf("Enter Elemets of Array A:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Elemets of Array B:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    int i, j, k;
    k = 0;
    int c[m];
    for (i = 0; i < m; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if (b[j] == a[i])
            {
                count = 1;
            }
        }
        if (count == 0)
        {
            c[k] = a[i];
            k++;
        }
    }
    printf("Difference of Matrix:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}