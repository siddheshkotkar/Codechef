#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       string s;
       cin>>s;
       string r;
       cin>>r;
       int cnt=0;
       for(int i=0;i<n;i++)
       {
        if(s[i]!=r[i])
        {
            cnt++;
        }
       }
       if(cnt%2==0)
       {
        cout<<"1\n";
       }
       else
       {
        cout<<"0\n";
       }
        
    }
}