#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        int z=k/2;
        for (int i = 0; i < z; i++)
        {
            cout << x - i-1 << " " << y << endl;
            cout<<x+i+1<<" "<<y<<endl;
        }
        if (k % 2 != 0)
    cout << x << " " << y << endl;

    }
    return 0;
}
