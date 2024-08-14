#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6 + 10;
const int mod = 1e9 + 7;

void solve()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n);
	vector<int> b(m);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	map<int, int> c1;
	map<int, int> c2;
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
		c1[a[i]]++;
		c2[b[i]]++;
	}
	int res = 0;
	int cnt = 0;
	for (auto t : c2)
	{
		cnt += min(c1[t.first], t.second);
	}
	if (cnt >= k)
		res++;
	int idx = 0;
	for (int i = m; i < n; i++)
	{
		if (c1[a[idx]] <= c2[a[idx]])
			cnt--;
		c1[a[idx]]--;
		if (c1[a[i]] < c2[a[i]])
			cnt++;
		c1[a[i]]++;
		idx++;
		if (cnt >= k)
			res++;
	}
	cout << res << endl;
}

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();
}
