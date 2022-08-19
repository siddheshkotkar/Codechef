#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        vector<int> v1;
        string s;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v1.push_back(x);
        }
        cin>>s;
        int i=0;
        while(i<s.length())
        {
            if(s[i]=='1')
            {
                v1.erase(v1.begin()+i);
                s.erase(i,1);
                i=0;
            }
            else
            {
                i++;
            }
            
        }
        sort(v1.begin(),v1.end());
        cout<<v1[0]<<"\n";
    }
}