#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    int r = 0;
    int c = m - 1;
    bool flag = false;
    while (r < n && c >= 0)
    {
        if (A[r][c] == target)
        {
            flag = true;
        }
        if (A[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (flag)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Not found";
    }
}