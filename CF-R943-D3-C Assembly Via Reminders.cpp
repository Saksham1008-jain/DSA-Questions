#include <iostream>
using namespace std;
#define ll long long



    int main ()
    {
        int t; cin >> t;
        while (t--)
        {
            ll n, num = 501; cin >> n;
            ll arr [n];
            for (int i = 0; i < n-1; ++i)
                cin >> arr[i];
            cout << num << " ";
            for (int i = 0; i < n - 1; ++i)
            {
                num += arr[i];
                cout << num << " ";
            }
            cout << "\n";
        }
    }
