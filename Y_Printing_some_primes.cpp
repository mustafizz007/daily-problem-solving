#include <bits/stdc++.h>
using namespace std;
const int n = 1e8;
bitset<n> p; // false //prime
void seive()
{
    for (int i = 3; i * i <= n; i += 2)
    {
        if (p[i] == false)
        {
            for (int j = i * i; j <= n; j += 2 * i)
                p[j] = true;
        }
    }
}
int main()
{

    seive();
    int cnt = 1;
    cout << 2 << endl;
    for (int i = 3; i <= n; i += 2)
    {
        if (!p[i])
        {
            if (cnt % 100 == 0)
            {
                cout << i << endl;
            }
            cnt++;
        }
    }
}