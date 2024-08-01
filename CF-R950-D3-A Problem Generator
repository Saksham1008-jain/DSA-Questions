#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		int ans=INT_MAX;
		for(int i=1;i<n;i++){
			int res=stoi(s.substr(i-1,2));
			for(int j=0;j<n;j++){
				if(j==i-1||j==i)continue;
				int x=s[j]-'0';
				res=min(res*x,res+x);
			}
			ans=min(ans,res);
		}
		cout<<ans<<endl;
	}
}
