#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n,m;
        cin>>n>>m;
        if(n%2==0 && m%2==0)
        {
            cout<<"0\n";
        }
        else if(n%2==0 && m%2!=0)
        {
            cout<<n<<"\n";
        }
        else if(n%2!=0 && m%2==0)
        {
            cout<<m<<"\n";
        }
        else if(n%2!=0 && m%2!=0)
        {
            cout<<((n+m)-1)<<"\n";
        }
        t--;
    }
}