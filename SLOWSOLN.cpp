#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int maxT,maxN,sumN;
        cin>>maxT>>maxN>>sumN;
        int T=0;
        T=sumN/maxN;
        int Trem=0,finalAns=0;
        Trem=sumN%maxN;
        if(sumN>(maxN*maxT))
        {
            
           
            while(maxT)
            {
                finalAns=finalAns+(maxN*maxN);
                maxT--;
            }
        }
        
        else
        {
            while(T)
            {
                finalAns=finalAns+(maxN*maxN);
                T--;
            }
            finalAns=finalAns+(Trem*Trem);
        }
        
        cout<<finalAns<<"\n";
        t--;
    }
}

//Siddhesh Kotkar