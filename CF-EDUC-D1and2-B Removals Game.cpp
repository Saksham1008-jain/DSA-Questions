#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	std::vector<int> c;
	if(a == b){
		cout<<"Bob"<<"\n";
		return ;
	}
	reverse(b.begin(),b.end());
	if(a == b) cout<<"Bob"<<"\n";
	else cout<<"Alice"<<"\n";
	return ;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
		solve();
	return 0;
}
