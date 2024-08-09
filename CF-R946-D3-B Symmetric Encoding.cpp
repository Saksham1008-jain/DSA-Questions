#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string ch;
    cin>>ch;

    set<char> ch2(ch.begin(), ch.end());

    vector<char> charr(ch2.begin(), ch2.end()); 
    map<char, char> mp;

    for(int i = 0; i < charr.size(); i++){
        mp[charr[i]] = charr[charr.size()-1-i];
    }
    string r="";
    for(int i=0;i<n;i++){
        r+=mp[ch[i]];
    } 
    cout<<r<<endl;
}

int main(){
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        solve();
    }
    
    return 0;
}
