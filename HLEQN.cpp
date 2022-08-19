#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        bool flag=false;
        for(int i=1;i<=x/4;i++)
        {
            int a = (x - 2*i)/(2 + i);
            if(a==round(a) && a>0)
            {
                flag=true;
                break;
            }
            if(a>b)
            {
                break;
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