#include <iostream>
using namespace std;

int main() 
{
	int t; cin>>t;
	while (t--)
	{
	    int n,m,q,f=1,cnt =0;
	    cin>>n>>m>>q;
	    while (q--)
	    {
	        char x;
	        int y;
	        cin>>x;
	        cin>>y;
	        if (x=='+') 
	        {
	            cnt++;
                cout<<cnt<<endl;
	            if (cnt > m  && cnt < 0) 
	            {
	                f = 0; 
	                break;
	            }
	        }
	        if (x == '-') 
            //else
	        {
	            cnt--;
                cout<<cnt<<endl;
	            if (cnt > m && cnt < 0) 
	            {
	                f =0; 
	                break;
	                
	            }
	        }
	      
	    }
	    if (f==1) cout<<"Consistent"<<endl;
	    else cout<<"Inconsistent"<<endl;
	        
	}
	return 0;
}
