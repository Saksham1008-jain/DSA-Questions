#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m,k;
        
        cin>>n>>m>>k;
        int a[n],b[m];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int j=0;j<m;j++){
            cin>>b[j];
        }
        int ans=0;
        sort(a,a+n);
        sort(b,b+m);
        
        for(auto l:a){
            int r=k-l;
            
            if(r<0){
                break;
            }
            
            for(auto v:b){
                if(v<=r){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}
