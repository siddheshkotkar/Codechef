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
        int arr[n],oddcnt=0,min;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        min=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
            
                // toEnter=1;
                if(arr[i]%2!=0)
                {
                    oddcnt++;
                }
            
            
        }
        if(min==1)
        {
            cout<<"CHEF\n";
            
        }
        else if(oddcnt%2==0)
        {
            cout<<"CHEFINA\n";
        }
        else if(oddcnt%2!=0)
        {
            cout<<"CHEF\n";
        }
        
        t--;
    }
}

//Siddhesh Kotkar