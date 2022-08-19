#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int zcnt=0,ocnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zcnt++;
            }
            else if(s[i]=='1')
            {
                ocnt++;
            }
        }
        if(zcnt<ocnt)
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    cout<<s[i];
                }   
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    cout<<s[i];
                }   
            }
        }
        cout<<"\n";
        t--;
    }
}