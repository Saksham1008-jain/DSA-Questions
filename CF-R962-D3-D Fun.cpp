#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,x;
        cin>>n>>x;
        
        long long ans=0;
        
         for (int a = 1; a <= min(n, x); a++){
            for (int b = 1; a * b <= n and a + b <= x; b++){
                int highestC = min((n - a * b) / (a + b), x - (a + b));
                ans += highestC;
            }
        }
        cout << ans << "\n";
    }
}