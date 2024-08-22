#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;
        
        set<int> pos;
        pos.insert(x);
        
        for (int i = 0; i < m; i++) {
            int dist;
            char direct;
            cin >> dist >> direct;
            
            set<int> new_pos;
            for (int pos : pos) {
                if (direct == '0' || direct == '?') {
                    new_pos.insert((pos + dist - 1) % n + 1);
                }
                if (direct == '1' || direct == '?') {
                    new_pos.insert((pos - dist - 1 + n) % n + 1);
                }
            }
            pos = move(new_pos);
        }
        
        cout << pos.size() << "\n";
        bool first = true;
        for (int pos : pos) {
            if (!first) cout << " ";
            cout << pos;
            first = false;
        }
        cout << "\n";
    }
    
    return 0;
}
