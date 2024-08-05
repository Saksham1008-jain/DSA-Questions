#include <bits/stdc++.h>
//#define int long long 
#define fin for(int i = 0; i<n; i++)
#define vi vector<int>

using namespace std;

bool good(vector<int> &a){
	vi gcd;
	for(int i = 0; i<a.size()- 1; i++)
		gcd.push_back( __gcd(a[i], a[i+1]));

	for(int i = 0; i<gcd.size() - 1; i++)
		if(gcd[i] > gcd[i+1])
			return false;

	return true;
}

void solve(){
	int n;
	cin >> n;
	vi a(n); fin cin >> a[i];

	vi gcd(n - 1);

	for(int i = 0; i<n -1; i++){
		gcd[i] = __gcd(a[i], a[i+1]);
	}

	int to_del = -1;
	for(int i = 0; i<n-2; i++){
		if(gcd[i] > gcd[i + 1]){
			to_del = i;
			break;
		}

	}
	
	if(to_del == -1){
		cout << "YES" << endl;
		return;
	}

	vi b1 = a, b2 = a, b3 = a;
	b1.erase(b1.begin() + to_del);
	b2.erase(b2.begin() + to_del + 1);
	b3.erase(b3.begin() + to_del + 2);

	bool possible = good(b1) || good(b2) || good(b3);

	if(possible)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}


int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}
	
	return 0;

}


