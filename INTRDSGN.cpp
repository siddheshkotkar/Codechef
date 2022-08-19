#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int t1,t2;
        t1=x1+y1;
        t2=x2+y2;
        (t1>t2)?cout<<t2:cout<<t1;
        cout<<"\n";
        t--;
    }
}