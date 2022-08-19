#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long n;
      cin>>n;
      map<int,int> m1;
      int x;
      for(int i=0;i<n;i++)
      {
        cin>>x;
        m1[x]+=1;
      }
      int greatest=m1[0],grtkey=0;
      map<int,int>::iterator it;
      for(it=m1.begin();it!=m1.end();it++)
      {
        if(it->second>greatest)
        {
            greatest=it->second;
            grtkey=it->first;
        }
      }
     m1[grtkey]=greatest-(greatest/2);
     greatest=0;
     for(it=m1.begin();it!=m1.end();it++)
      {
        if(it->second>greatest)
        {
            greatest=it->second;
            // grtkey=it->first;
        }
      }

      cout<<greatest<<"\n";
      
        
    }
}


//Siddhesh Kotkar

//Siddhesh Kotkar,PICT