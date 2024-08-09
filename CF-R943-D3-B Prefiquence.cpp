#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
   string a,b;
   cin>>a>>b;

   int first=0, sec=0,k=0;
   while(first<n && sec<m){
   	if(a[first]==b[sec]){
   		k++,first++,sec++;
   	}
   	else{
   		sec++;
   	}
   }
   cout<<k<<endl;
	
	}
	return 0;


}
