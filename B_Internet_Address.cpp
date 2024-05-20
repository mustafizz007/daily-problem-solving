#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
    string a;
    cin>>a;

int stop,start;

    if (a[0] == 'h')
    {
        cout<<"http://";

        for (int i = a.size(); i >= 0; i--)
        {
            if (a[i] == 'u' && a[i-1] == 'r')
            {
                stop = i-1;
                start = i;
                break;
            }
        }

        for (int i = 4; i < stop; i++)
        {
            cout<<a[i];
        }
        cout<<".ru";

        if (start+1 != a.size())
        {
            cout<<"/";

            for (int i = start+1; i < a.size(); i++) cout<<a[i];
        } 
    }

    else {
        
        cout<<"ftp://";

        for (int i = a.size(); i >= 0; i--)
        {
            if (a[i] == 'u' && a[i-1] == 'r')
            {
                stop = i-1;
                start = i;
                break;
            }
        }

        for (int i = 3; i < stop; i++)
        {
            cout<<a[i];
        }
        cout<<".ru";

        if (start+1 != a.size())
        {
            cout<<"/";

            for (int i = start+1; i < a.size(); i++) cout<<a[i];
        } 



        
    }

   
}

int main ()
{
    opt();
   
        solve();
   
}