#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int cnt =0;
        string a;
        cin>>a;
        stack <char> s;
        for (int i=0; i<a.size(); i++) 
        {
            if  (a[i] == 'A') s.push(a[i]);
            else if (a[i] == 'B' && !s.empty()) s.pop();
            else if (a[i] == 'B' && s.empty())
            {
                cnt++;
            }
        }
        int x = cnt/2;
        cout<<s.size() + (cnt - (x * 2))<<endl;
       
    }
}