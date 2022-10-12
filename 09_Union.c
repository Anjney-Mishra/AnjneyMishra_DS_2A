#include<stdio.h>
void main()
{   
    int x,y,k,i,j;
    printf("Enter the no of elements in A:\n");
    scanf("%d",&x);
    printf("Enter the no of elements in B:\n");
    scanf("%d",&y);
    int a[x],b[y],c[x+y];
    printf("Enter the elements of A:\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of B:\n");
    for(i=0;i<y;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<x;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<y;i++)
    {
         k = 0;
        for(j=0;j<x;j++)
        {
            if(a[j]==b[i])
            {
            k++;
            }
         }
             if(k==0)
            {
               c[x]=b[i];
               x++;
            }
    }
    printf("Union:\n");
    for(i=0;i<x;i++)
    {
        printf("%d ",c[i]);
    }}
