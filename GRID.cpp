#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t; 
    cin >> t; 
    while (t--) 
    {
        long long n,m,x,y;
        cin>>n>>m>>x>>y;
        n+=m-2+x;
        x+=y;
        if(n%2==1 && x%2==0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
  return 0;
}

//Siddhesh Kotkar