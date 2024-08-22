#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    int l, r, L, R;
    cin >> l >> r >> L >> R;
    int b = min(r, R) - max(l, L) + 1;
    int ans = b - 1;
    if (b <= 0) {
      ans = 1;
    } else {
      ans += (l != L);
      ans += (r != R);
    }
    cout << ans << '\n';
  }
  return 0;
}
