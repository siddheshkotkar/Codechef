    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            long long n,x;
            cin>>n>>x;
            if(n>x)
            {
                cout<<"-1\n";
                continue;
            }
            else
            {
                vector <int> v1;
                long long temp=abs(n-x);
                long long first=temp+1;
                if(temp==0)
                {
                    for(int i=1;i<=n;i++)
                    {
                        cout<<i<<" ";
                    }
                    continue;
                }
                cout<<first<<" ";
                for(int i=1;i<=n;i++)
                {
                    if(i==first)
                    {
                        continue;
                    }
                    cout<<i<<" ";
                }
                cout<<"\n";
            }
        }
    }