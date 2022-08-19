#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b,c;
       cin>>a>>b>>c;
       if(a==b && b==c)
       {
        cout<<"YES\n";
       }
       else if(a==b && c>b || b==c && a>c || a==c && b>a)
       {
        cout<<"YES\n";
       }
       else
       {
        cout<<"NO\n";
       }
       
        
    }
}


//Siddhesh Kotkar,PICT