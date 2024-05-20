#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;

        stack<string> f, b;
        string cur = "http://www.lightoj.com/";

        string x;

        while (cin >> x)
        {
            //b.push("http://www.lightoj.com/");

            if (x == "BACK")
            {
                if(b.empty()) cout<<"Ignored"<<endl;
                else 
                {
                    f.push(cur);
                    cur = b.top();
                    b.pop();
                    
                    cout<<cur<<endl;
                }
            }
            else if (x == "FORWARD")
            {
                if(f.empty()) cout<<"Ignored"<<endl;
                else 
                {
                    b.push(cur); 
                    cur = f.top();
                    f.pop();
                   
                    cout<<cur<<endl;
                }
            }
            else if (x == "VISIT")
            {
                string y; cin>>y;
                b.push(cur);
                cur = y;
                while (!f.empty())
                {
                    f.pop();
                }
                cout<<cur<<endl;

            }
            else if (x == "QUIT") break;
        }
    }
}