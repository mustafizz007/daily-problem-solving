#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        string a;
        cin>>a;

        int b[5];
        b[0] =1;

        for(int i=0; i<4; i++)
        {
            int d = a[i] - '0'; 
            b[i+1] = d;
        }
        
        for (int i = 0; i < 5; i++)  if (b[i] == 0) b[i] =10;

        int cnt =0;

        for (int i=0; i<4; i++)
        {
            cnt += abs(b[i] - b[i+1]) +1;
        }
        cout<<cnt<<endl;

       
    }
       

     
      
       
}
