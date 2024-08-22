#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;cin>>t;
    while(t--)
    {
        int n,cnt=0;string s;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            if((s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p') || (s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e'))
            {
                cnt++;
                i+=2;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

