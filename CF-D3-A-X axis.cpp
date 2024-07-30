
#include <bits/stdc++.h>
using namespace std;
 
int solve(int x1, int x2, int x3) {
    vector<int> points = {x1, x2, x3};
    sort(points.begin(), points.end());
    
    int median = points[1];
    
    return abs(median - x1) + abs(median - x2) + abs(median - x3);
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        cout << solve(x1, x2, x3) << endl;
    }
    return 0;
}
