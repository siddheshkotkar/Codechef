#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        int fixed=x*k;
        int remain=n-k;
        int remain_cost;
        if(x<y)
        {
            remain_cost=x*remain;
        }
        else
        {
            remain_cost=y*remain;
        }
        cout<<(fixed+remain_cost)<<"\n";
        t--;
    }
}