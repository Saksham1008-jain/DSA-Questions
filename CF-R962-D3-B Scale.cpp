#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    vector<string>v(n);
	    for(ll i=0;i<n;i++)
	    cin>>v[i];
	    for(ll i=0;i<n;i+=k)
	    {
	        for(ll j=0;j<n;j+=k)
	        cout<<v[i][j];
	        cout<<"\n";
	    }
	    
	}
	
}
