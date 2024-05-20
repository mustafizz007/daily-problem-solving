#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        
        //int x = a;

        cout  << left << nouppercase << showbase << hex << (long long ) a << endl;

        int width = 15;
        cout << right << fixed << setw(width) << showpos << setprecision(2) << setfill('_') << b << endl;

       

        cout<< scientific << uppercase << noshowpos << setprecision(9) <<  c << endl;

        


    }
}