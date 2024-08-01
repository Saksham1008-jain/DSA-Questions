#include<bits/stdc++.h>
using namespace std;


set<int>s;
vector<char>v;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        string d,c;
        cin>>n>>m>>d;
        for(int i=0;i<m;i++)
            cin>>x,s.insert(x);
        cin>>c;
       for(auto cc:c)
            v.push_back(cc);
       sort(v.begin(),v.end());
       int i=0;
       for(auto ss:s)
       {
           d[ss-1]=v[i];
           i++;
       }
       cout<<d<<endl;
       v.clear(),s.clear();
    }
}
