#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
int t;
cin>>t;
while(t--){
    int l,n,steps;steps=0;
    cin>>l>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]==1) steps+=a[i];
        else steps+=2*a[i]-1;
    }
    cout<<steps<<endl;
}
 
 
return 0;
}
