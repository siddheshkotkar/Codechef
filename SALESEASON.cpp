#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        if(x<=100)
        {
            cout<<x<<"\n";
        }
        else if(x>100 && x<=1000)
        {
            cout<<(x-25)<<"\n";
        }
        else if(x>1000 && x<=5000)
        {
            cout<<(x-100)<<"\n";
        }
        else if(x>5000)
        {
            cout<<(x-500)<<"\n";
        }
    }
}