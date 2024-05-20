#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    if (n%2 ==0) 
    {
        //int x = n/2;
        int x = n-8;
        cout<<"8"<<" "<<x;
    }
    else 
    {
        int x = n-9;
        cout<<"9"<<" "<<x;



        //for (i=4; i<n/2; i+=2)
        //{
        //    for (j =4; j<n/2 ; j++)
       ///     {
       //         if (i+j == n) break;
       //     }
      //  }
      //  cout<<i<<" "<<j;
    }
}