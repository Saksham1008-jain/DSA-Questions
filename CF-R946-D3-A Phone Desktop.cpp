#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,res=0,ans=0;
        cin>>a>>b;
        if(b%2==0)
        {
        res=b/2;
        ans=7*res;
        }
        else
        {
        res=b/2+1;
        ans=(res-1)*7 + 11;
        }
        if(a>ans)
        {
        a=a-ans;
        while(a>0)
        {
            a=a-15;
            res++;
        }
        }
        cout<<res<<endl;
    }
    
    return 0;
}
