#include <stdio.h>
void main()
{
    int A[100], i, n, x;
    printf("Enter no of elements in array:\n");
    scanf("%d", &n);
    printf("Enter elements of array in sorted order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("Enter element which will be inserted:\n");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (A[i] >= x)
        {
            int t;
            t = A[i];
            A[i] = x;
            x = t;
        }
    }
    A[n] = x;
    printf("Result:\n");
    for (i = 0; i <= n; i++)
        printf("%d ", A[i]);
}
