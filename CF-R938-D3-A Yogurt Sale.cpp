#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int d, cnt;
        cnt = 0;
        d = min(b*2, c);
        while(a>0){
        if(a >= 2){
            cnt += d;
            a -= 1;
        }else{
            cnt+= b;
            a--;
        }
        }
        cout<<cnt<<endl;
    }
}
