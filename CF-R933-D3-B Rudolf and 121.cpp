#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t; 
	cin >> t;
	while (t--)
	{

		bool ans = true;
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		for (int i = 1; i < n - 1; i++)
		{
			if (v[i - 1] > 0)
			{
				int temp = v[i - 1];

				v[i] -= 2 * temp;
				v[i + 1] -= temp;
				v[i - 1] = 0;

			}

			
		}
		for (int i = 0; i < n; i++)
			{
			
				if (v[i] != 0)
				{
					ans = false;
					break;

				}
			}
			if (ans)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;

	}
	return 0;
}
