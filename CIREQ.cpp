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
        int arr[n];
        multiset <int> set1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            set1.insert(arr[i]);
        }
        int ptr=1,res=1;
        while(set1.size()>0)
        {
           auto i=set1.lower_bound(ptr); 
        
        if(i!=set1.end())
        {
            set1.erase(i);
            ptr++;
            
        }
        else
        {
            ptr=1;
            res++;
        }
        
        }
        cout<<res<<"\n";
        t--;
    }
}

//Siddhesh Kotkar