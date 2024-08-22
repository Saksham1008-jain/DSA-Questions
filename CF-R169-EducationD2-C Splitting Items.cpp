#include <bits/stdc++.h>
using namespace std;

void run() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    int ans = 0;
    sort(a.begin(), a.end());
    reverse(a.begin(),a.end());
    for(int i=0; i<n; i+=2) {
        if (i+1<n) {
            int m = a[i]-a[i+1];
            if (m>k) {
                m-=k;
                k=0;
                ans+=m;
            } else {
                k-=m;
            }
        } else {
            ans += a[i];
        }
    }
    cout<<ans<<endl;
    
    
}

int main() {
    // Write C++ code here
    int t; 
    cin>>t;
    while(t--) {
        run();
    }
    return 0;
}
