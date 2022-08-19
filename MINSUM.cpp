#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t; 
    cin >> t; 
    while (t--) 
    {
    int long n;
    cin >> n;
    vector<long> a;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    long  temp = a[0];
    for (int i = 0; i < n; i++) 
    {
        temp = __gcd(temp, a[i]);
    }
    cout << n*temp << endl;
    }
  return 0;
}

//Siddhesh Kotkar