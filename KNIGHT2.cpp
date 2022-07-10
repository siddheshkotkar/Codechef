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
        int xdiff,ydiff;
        xdiff=abs(x1-x2);
        ydiff=abs(y1-y2);
        if(xdiff%2==0 && ydiff%2==0)
        {
            cout<<"YES\n";
        }
        else if(xdiff%2!=0 && ydiff%2!=0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        t--;
    }
}

//Siddhesh Kotkar