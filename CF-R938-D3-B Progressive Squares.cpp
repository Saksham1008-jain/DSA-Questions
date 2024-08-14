#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
	int n,c,d; cin >>n>>c>>d;
	vector <ll> b;
	for (int i=0; i<n*n; i++){
		int a; cin >>a;
		b.push_back(a);
	}
	sort(b.begin(), b.end());
	
	vector <ll> x;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			x.push_back(b[0]+c*i+d*j);
		}
	}
	sort(x.begin(), x.end());
	if (x==b) cout<<"YES\n";
	else cout<<"NO\n";
}
int main() {
    int t; cin >> t;
    while (t--){
    	solve ();
	}
    return 0;
}
