#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int n; cin>>n;
    int a[n];

    for (int i = 0; i<n; i++) cin>>a[i];

    int cnt =1; 
    int mx =1;

    for (int i = 1; i <n; i++)
    {
        if (a[i] >= a[i-1])
        {
            cnt++;
        }
        else cnt = 1;
        
        if (cnt > mx)
        {
            mx  = cnt;
        }
    }
    cout<<mx;
}