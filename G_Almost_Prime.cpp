#include<bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    
    vector <int> b;
    bool prime [n+1];
    memset (prime, true, sizeof(prime));

    for (int p =2; p <= sqrt(n); p++)
    {
        if (prime[p])
        {
            for (int i = p*p; i<=n; i+= p)
            {
                prime[i] = false;
            }
        }
    }

    for (int p =2; p<=n; p++)
    {
        if (prime[p])
        {
            b.push_back(p);
        }

    }

    int cnt_main = 0;

    for (int i=6; i<=n; i++)
    {
        int cnt = 0;
        for (int j=0; j< b.size() && b[j] <= i; j++)
        {
            if (i % b[j] ==0)
            {
                cnt++;
                if (cnt > 2)
                {
                    break;
                }
            }
        }
        if (cnt == 2)
        {
            cnt_main++;
        }
    }
    cout<<cnt_main<<endl;
}
int main()
{
    int n,cnt_main;
    cin>>n;
    sieve(n);

}
