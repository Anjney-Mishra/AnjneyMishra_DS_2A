#include <iostream>
using namespace std;
int main()
{
   int a[10] = {1, 2, 3, 4, 5, 6, 7};
   int n;
   n = 7;
   int pos, key;
   cin >> pos >> key;

   for (int i = n; i >= pos; i--)
   {
      a[i+1]=a[i];                        //a[8]<-a[7], a[7]<-a[6] .......
   }

   a[pos] = key;                          //after above shifting the pos index found empty so we alloted key
   n = n+1;                               // since we added and element so we need to increase the size of arr      
                                          
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }




//USING WHILE LOOP METHOD

      // int i=n;
      // while(i>=pos)
      // {
      //    a[i+1]=a[i];
      //    i--;
      // }
      // a[pos] = key;
      // n = n+1;

      // for(int i=0;i<n;i++)
      // {
      //    cout<<a[i]<<" ";
      // }

      return 0;
}