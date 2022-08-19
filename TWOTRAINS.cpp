#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i;
        cin>>n;
        long long a[n-1],b[n-1];
        for(int i=0;i<n-1;i++)
        {
            cin>>a[i];
        }
        long long asum=0,bsum=0,temp=0;
        for(i=0;i<n-1;i++)
        {
            asum=asum+a[i];
            b[i]=asum;
        }
        for(i=0;i<n-1;i++)
        {
            int diff = b[i] - a[i-1];
            if(diff>0)
            {
                a[i] = diff + a[i-1] + a[i];
            }
            else
            {
                a[i] = a[i-1] + a[i];
         
            }
            
        }
        cout<<a[i]<<"\n";
    }
}