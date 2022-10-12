#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    cout<<"Enter 3x3 Matrix:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    int det;
    det = a[0][0] * ( (a[1][1] * a[2][2]) - (a[2][1] * a[1][2]) )- a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2])) + a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1])) ;
    cout<<"Determinant:"<<det;






   return 0;
}