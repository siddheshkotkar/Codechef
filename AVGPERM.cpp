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
            // cout<<n<<" ";
            vector <int> v1;
            for(int i=1;i<=n;i++)
            {
                v1.push_back(i);
            }
            cout<<v1[v1.size()-1]<<" ";
            v1.pop_back();
            long long temp=v1[v1.size()-1];
            v1.pop_back();
            cout<<v1[v1.size()-1]<<" ";
            v1.pop_back();
            v1.push_back(temp);
            for(int i=0;i<v1.size();i++)
            {
                cout<<v1[i]<<" ";
            }
            cout<<"\n";
        }
    }