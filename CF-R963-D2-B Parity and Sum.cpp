#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int odd = 0;
    int even = 0;
    int maxValue = 0;
    int maxEven = 0;

    for (int &num : a)
    {
        if (num % 2 == 0)
        {
            even++;
            maxEven = max(maxEven, num);
        }
        else
        {
            odd++;
            maxValue = max(num, maxValue);
        }
    }
    if (even == n || even == 0)
    {
        cout << "0" << endl;
        return;
    }

    sort(a.begin(), a.end());
    int ans = 0;
    for (int &num : a)
    {
        if (num % 2 == 0)
        {
            if (maxValue > num)
            {
                ans++;
                maxValue = max(maxValue, num + maxValue);
            }
            else
            {
                maxValue = num + maxEven;
                ans += 2;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
