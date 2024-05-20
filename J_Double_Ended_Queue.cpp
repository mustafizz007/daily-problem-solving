#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, m;
        cin>>n>>m;
        cout <<"Case "<<i<<":"<<endl;
        deque <int> dd;

        while (m--)
        {
            string a;
            cin >> a;
            if (a == "pushLeft")
            {
                int x;
                cin >> x;
               
                if (n > 0) 
                {
                    n--;
                    dd.push_front(x);
                    cout << "Pushed in left: " << x << endl;
                }
                else
                {
                    cout<<"The queue is full"<<endl;
                }
          

            }
            else if (a == "pushRight")
            {
                int x;
                cin >> x;

                if (n > 0) 
                {
                    n--;
                    dd.push_back(x);
                    cout << "Pushed in right: " << x << endl;
                }
                else 
                {
                    cout<<"The queue is full"<<endl;
                }
            }
            else if (a == "popLeft")
            {
                if (dd.empty())
                {
                    cout << "The queue is empty" << endl;
                }
                else      
                {
                    n++;
                    cout<<"Popped from left: "<<dd.front()<<endl;
                    dd.pop_front();
                    
                }
            }
            else if (a == "popRight")
            {
                
                if (dd.empty())
                {
                    cout << "The queue is empty" << endl;

                }
                else      
                {
                    n++;
                    cout<<"Popped from right: "<<dd.back()<<endl;
                    dd.pop_back();
                    
                }
            }
            else 
            {
                cout<<"The queue is empty"<<endl;
            }
        }
    }
}