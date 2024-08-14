#include<bits/stdc++.h>
using namespace std;
#define int long long

void stardust(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int i = 0, j = n - 1;
    int front = (k + 1) / 2; 
    int back = k / 2;       
    int ans = 0;

    while (i < n && front >= a[i]) {
        front -= a[i];
        i++;
        ans++;
    }
    
    while (j >= 0 && back >= a[j]) {
        back -= a[j];
        j--;
        ans++;
    }
    
    int sm = 0;
    for (i = 0; i < n; i++) {
        sm += a[i];
    }
    
    if (k >= sm) {
        ans = n;
    }

    cout << ans << endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        stardust();
    }
}
