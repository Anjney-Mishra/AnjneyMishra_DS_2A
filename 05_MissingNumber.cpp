#include<iostream>
using namespace std;
int main()
{
    int n,l,u;
    cin>>n>>l>>u;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum1 = 0;
    for(int i=0; i<n; i++)
    {
        sum1 = sum1 + a[i];
    }
    int sum2=0;
    for(int i=l; i<=u; i++)
    {
        sum2 = sum2 + i;
    }
    cout<<sum2 - sum1;

   return 0;
}