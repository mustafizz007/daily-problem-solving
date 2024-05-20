#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll find_sum_of_divisiors_to_n(int n)
{
    ll sum =0;
    for (ll i=1; i<=n; i++)
    {
        sum += i * (n/i);
        /*for (ll j = 1; j<= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                if (i == i/j)
                {
                    sum += i;
                }
                else
                {
                    sum += (i + i/j);
                
                }
            }
        }*/
    }
    return sum;
}
int main()
{
    ll n;
    cin>>n;
    cout<<find_sum_of_divisiors_to_n(n);
}