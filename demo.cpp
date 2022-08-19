#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        float n,k,m;
        cin>>n>>k>>m;
        float prod=k*m;
        int div=ceil(n/prod);
        cout<<div<<"\n";
        t--;
    }
}