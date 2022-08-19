#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        long long n,m;
        cin>>n>>m;
        int a,b;
        int max=-1;
        int s = n;
        for(int i=0;i<=m%n;i++)
        {
            if(abs(s-(m-(m%s)))>max)
            {
                a=s;
                b=m-(m%s);
                max=abs(a-b);
            }
            s += 1;
            
        }
        cout<<a<<" "<<b<<"\n";

       
        
        t--;
    }
    
}

//Siddhesh Kotkar