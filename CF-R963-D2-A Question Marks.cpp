#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        unordered_map<int,int> mp;
        
        int m=s.size();
        for(int i=0;i<m;i++){
            if(s[i]!='?'){
                mp[s[i]]++;
            }
        }
        int ans=0;
        for(auto i:mp){
            if(i.second<=n){
                ans+=i.second;
            }
            else{
                ans+=n;
            }
        }
        cout<<ans<<"\n";
        
    }
        return 0;
}
