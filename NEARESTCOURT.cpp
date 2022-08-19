#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        float ans;
        ans = abs(x-y);
        ans = ans/2;
        cout<<ceil(ans)<<"\n";
    }
}