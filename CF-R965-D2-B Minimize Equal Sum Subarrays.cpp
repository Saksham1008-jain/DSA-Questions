#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   for(int i=1;i<n;i++)cout<<v[i]<<" ";
   cout<<v[0];
   cout<<endl;
   
   
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
