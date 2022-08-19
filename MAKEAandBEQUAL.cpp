#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,lesser,greater;
        cin>>a>>b;
        bool flag=false;
        if(a<b)
        {
            lesser=a;
            greater=b;
        }
        else if(b<a)
        {
            lesser=b;
            greater=a;
        }
        else
        {
            cout<<"YES\n";
            continue;
        }
        while(lesser<=greater)
        {
            lesser=lesser*2;
            if(lesser==greater)
            {
                flag=true;
            }
        }
        if(flag==true)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
}