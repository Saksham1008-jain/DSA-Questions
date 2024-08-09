#include <bits/stdc++.h>
using namespace std;
const int sz = 2e5 + 5;

char c[4][sz];
bool vis[4][sz];
int tp = 0;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, ans = 0;
        cin >> n;

        for(int i = 1; i <= 2; i++) {
            for(int j = 1; j <= n; j++) {
                cin >> c[i][j];
            }
        }
        for(int i = 1; i <= 2; i++) {
            for(int j = 1; j <= n; j++) {
                if(i == 1 && j > 1 && j < n && c[i][j] == '.') {
                    if(c[2][j-1] == 'x' && c[2][j+1] == 'x') {
                        if(c[i][j-1] == '.' && c[i][j+1] == '.' && c[2][j] == '.') ans++;
                    }
                } else if(i == 2 && j > 1 && j < n && c[i][j] == '.') {
                    if(c[1][j-1] == 'x' && c[1][j+1] == 'x') {
                        if(c[i][j-1] == '.' && c[i][j+1] == '.' && c[1][j] == '.') ans++;
                    }
                }
            }
        }
       cout << ans << endl;
    }
}
