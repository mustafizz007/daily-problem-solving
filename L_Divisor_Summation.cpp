#include <bits/stdc++.h>
using namespace std;
int sum_of_divisor(int n)
{

    long long int s = 0;
    if (n == 1) return s;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            if (i == (n / i))
            {
                s += i;
            }
            else
            {
                s += (i + (n / i));
            }
        }
    }
    
    return s+1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sum_of_divisor(n)<<'\n';
    }
}