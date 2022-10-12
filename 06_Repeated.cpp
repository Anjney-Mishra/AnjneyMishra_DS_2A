#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Repeated Elements:\n";
    int i,j,k;
    int count,c;
    for(i=0;i<n;i++)
    {
        c=0;
        for(k=i-1;k>0;k--)
        {
            if(a[k]==a[i])
                c++;
        }
        if(c>0)
            continue;
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>0)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
