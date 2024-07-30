#include<bits/stdc++.h>
using ll = long long;
using namespace std;

void solveD() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> dp(n + 2, 1e9);
    dp[0] = 0;

    string a; cin >> a;
    a = 'L' + a + 'L';

    for (int i = 1; i < a.size(); i++) {
        if (a[i] == 'C') continue;
        if (a[i-1] == 'W') {
            dp[i] = min(dp[i], dp[i-1] + 1);
        }
        for (int j = 1; j <= m; j++) {
            if (i - j >= 0 && a[i-j] == 'L') {
                dp[i] = min(dp[i], dp[i-j]);
            }
        }
    }
    cout << (dp[n+1] <= k ? "YES\n" : "NO\n");
}

int main(){
    int t; cin >> t;
    while (t --> 0) {
        solveD();
    }
}
