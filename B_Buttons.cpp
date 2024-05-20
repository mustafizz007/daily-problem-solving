#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n; cin>>n;
    int cnt = 0;
    int i = 0;
    while (n > 0)
    {
        cnt += n + (n - 1) * i;
        n--;
        i++;
    }
    cout<<cnt<<endl;
   
}

int main ()
{
    solve();
}