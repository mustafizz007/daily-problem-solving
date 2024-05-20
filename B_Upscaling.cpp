#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
   int n; cin>>n;
int cnt = 2;
bool ok1 = true;
bool ok2 = false;
   for (int i =1; i<= 2 *n; i++)
   {
    //for (int j=1; j<= n; j++)
    //{
        while (cnt-- && ok1)
        {
            for (int j =1; j<=n; j++)
            {
            if (j % 2 == 0) cout<<"##";
            else cout<<"..";
            if (cnt == 0)
            {
                ok1 = false;
                ok2 = true;
            }
            }
        }
        while (cnt++ && ok2)
        {
            for (int j =1; j<=n; j++)
            {
           
            if (j % 2 !=0)
            {
                cout<<"..";
            }
            else cout<<"##";

            if (cnt == 2)
            {
                ok1 = true;
                ok2 = false;
            }
            }
        }
        cnt = 2;
    //}
    cout<<endl;
   }
}

int main ()
{
    opt();
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}