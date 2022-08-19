#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        long long a,b,n,x;
        cin>>a>>b>>n;
        if(a%b==0)
        {
            cout<<"-1\n";
            t--;
            continue;
        }
        x=n;
        if(x%a!=0)
        {
            x=n+a-(x%a);
        }
        while(!(x%a==0 && x%b!=0))
        {
            x=x+a;
        }
        cout<<x<<"\n";
        t--;
    }
    
}

//Siddhesh Kotkar