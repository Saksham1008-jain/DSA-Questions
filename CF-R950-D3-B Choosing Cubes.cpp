#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int fav=v[f-1];
        sort(v.rbegin(),v.rend());
        int first,last;
        for(int i=0;i<v.size();i++){
        if(v[i]==fav)
        {
            first=i;
            break;
        }
    }
    for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]==fav)
            {
                last=i;
                break;
            }
        }
        
        int yes=0,no=0;
        if(first<=k-1 && last<=k-1)
    cout<<"YES"<<endl;
    else if(first<=k-1 || last<=k-1)
    cout<<"MAYBE"<<endl;
    else
    cout<<"NO"<<endl;
    
    
    }
    
    return 0;
    }
