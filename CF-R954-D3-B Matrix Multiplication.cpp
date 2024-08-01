#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, m, n;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cin >> m >> n;
        long long ar[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ar[i][j];
            }
        }
       
        for (int i = 0; i < m; i++)
        {
             
            for (int j = 0; j < n; j++)
            {
                int right = 0, left = 0, top = 0, bottom = 0;
                if (i - 1 >= 0)
                    left = ar[i - 1][j];
                if (i + 1 < m)
                    right = ar[i + 1][j];
                if (j - 1 >= 0)
                    top = ar[i][j - 1];
                if (j + 1<n)
                bottom=ar[i][j+1];
                if(ar[i][j]>right&&ar[i][j]>left&&ar[i][j]>top&&ar[i][j]>bottom)
                ar[i][j]=max(max(right,left),max(top,bottom));
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ar[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
