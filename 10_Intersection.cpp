#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter Size Of Array A:\n";
    cin>>m;
    cout<<"Enter Elements Of Array A:\n";
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int n;
    cout<<"Enter Size Of Array B:\n";
    cin>>n;
    int b[n];
    cout<<"Enter Elements Of Array B:\n";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    cout<<"Intersection Of A and B:\n";
    int k=0;
    int c[k];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[j]==a[i])
            {
                c[k]=b[j];
                k++;
            }
        }
    }

    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
   return 0;
}