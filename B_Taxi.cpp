#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++) cin>>a[i];
    map<int,int> m;
    for (int i=0; i<n; i++) m[a[i]]++;

    int cnt;
    cnt =  m[4] + m[3] + ( m[2]  / 2 );


    if (m[2] % 2 ==1)
    {
        cnt += 1;
        m[1] = m[1] - 2;
    }
    
    m[1] = m[1] - m[3]; 

    if (m[1] > 0)
    {
        cnt +=( m[1] + 3) / 4 ;

    }

    cout<<cnt; 

} 