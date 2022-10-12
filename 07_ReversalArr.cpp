#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Reverse:\n";
    for(int i=n-1;i>=0;i--)
    {
        b[k] = a[i];
        k++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
   return 0;
}