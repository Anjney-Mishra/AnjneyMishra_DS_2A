#include<iostream>
using namespace std;
int main()
{
    int a[10] = {1,2,3,4,5,6,7};
    int n=7;
    int pos;
    cin>>pos;                   //pos 4

    for(int i=pos; i<n; i++)
    {
        a[i] = a[i+1];          //a[4]<-a[5], a[5]<-a[6], ......
                                // here a[4] get overwrite by a[5]
    }
    n=n-1;                          //since one element gone we need to decrease the size of array

    

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
   return 0;
}