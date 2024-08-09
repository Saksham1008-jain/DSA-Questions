#include <bits/stdc++.h>
using namespace std;

#define dbg(...) ;
#define debug(...) ;
#define crndl ;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    auto solve = [&] () -> string {
        int n;
        cin >> n;

        string str;
        cin >> str;

        if (str == "NS" || str == "SN" || str == "EW" || str == "WE") return "NO";

        dbg(n, str);

        string ans(n, '?');
        bool haveGot = false;

        auto f = [&] (char plus, char neg) {
            int total = 0;
            for (int i = 0; i < n; i++) {
                if (str[i] == plus) total++;
                else if (str[i] == neg) total--;
            }
            if (total & 1) return false;
            if (total < 0) {
                total *= -1;
                swap(plus, neg);
            }
            int tar = total / 2;
            for (int i = 0; i < n; i++) {
                if (str[i] != plus && str[i] != neg) continue;
                if (str[i] == plus && tar) {
                    ans[i] = 'R';
                    tar--;
                } else {
                    ans[i] = 'H';
                }
            }
            if (!haveGot && total == 0) {
                int first_x = -1, first_y = -1;
                for (int i = 0; i < n; i++) {
                    if (str[i] == plus && first_x == -1) {
                        first_x = i;
                        ans[i] = 'R';
                    }
                    if (str[i] == neg && first_y == -1) {
                        first_y = i;
                        ans[i] = 'R';
                    }
                }
                if (first_x != -1 && first_y != -1) haveGot = true;
            } else haveGot = true;
            return true;
        };

        if (!f('N', 'S') || !f('E', 'W')) return "NO";
        return ans;
    };
    
    int t = 1;
    cin >> t;
    
    for (int tc = 1; tc <= t; tc++) {
        debug(Testcase, tc);
        cout << solve() << "\n";
        crndl;
    }
    
    return 0;
}
