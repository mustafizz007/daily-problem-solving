#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2;
    int x,y,c=0;
    cin>>a1>>a2;
    
    if (a1 <2 && a2<2) cout<<0<<endl;
    else 
    {

        while (a1>0 && a2>0)
        {
            if (a1 <= a2)
            {
                a1 = a1+ 1;
                a2 = a2 - 2;
                c++;
            }
            else 
            {
                a1 = a1 - 2;
                a2 = a2 + 1;
                c++;
            }
        }
        cout<<c<<endl;
    }
    
      /*  int i = 0;
        while (a2 !=0)
        {
            i++;
            a2 -= 2;
            i++;
            a2 += 1;
            //i += 2;
            x = i;
        }

        int j =0;
        while (a1!=0)
        {
            j++;
            a1 += 1;
            j++;
            a1 -= 2;
           // j += 2;
            y = j;
        }
        cout << min(x,y)<<endl;
    }
    else if (a1==a2)
    {
        int i = 1;
        while (a1 !=0)
        {
            i++;
            x = i;
            a1 -= 2;
            
            i++;
            x = i;
            a1 += 1;
            //i += 2;
            //x = i;
        }
        int j = 1;
        while (a2 !=0)
        {
            j++;
            y = j;
            a2 += 1;

            i++;
            y = j;
            a2 -= 2;
            //i += 2;
            //y = i;
        }
        cout<<min(x,y)<<endl;
        //cout<<y<<endl;
    }
    else 
    {
        int i = 0;
        while (a1 !=0)
        {
            i++;
            a1 -= 2;
            i++;
            a1 += 1;
            //i += 2;
            x = i;
        }

        int j =0;
        while (a2!=0)
        {
            j++;
            a2 += 1;
            j++;
            a2 -= 2;
            //j += 2;
            y = j;
        }
        cout <<min(x,y)<<endl;
        //cout << y<<endl;
    }*/
}