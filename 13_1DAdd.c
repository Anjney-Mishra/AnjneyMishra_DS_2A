#include<stdio.h>
void main()
{
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int A[n],*org,i,adr;
    printf("Enter index:\n");
    scanf("%d",&i);
    org=&A[i];
    adr=A+i;
    printf("Address of %d index is: %d \n",i,adr);
    if(org==adr)
    printf("Verified");
}
