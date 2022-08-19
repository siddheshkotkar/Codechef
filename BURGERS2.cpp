#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int x,y,n,r;
        cin>>x>>y>>n>>r;
        if(r/y>=n)
        {
            cout<<"0 "<<n<<"\n";
        }
        else if(r/x<n)
        {
            cout<<"-1\n";
        }
        else
        {
            int k=(r-(y*n))/(x-y);
            if((r-(y*n))%(x-y)!=0)
            {
                k=k+1;
            }
            cout<<k<<" "<<n-k<<"\n";
        }
        
        t--;
    }
}

//Siddhesh Kotkar