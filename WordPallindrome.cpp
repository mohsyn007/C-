#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ar[n + 1];
    cin >> ar;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != ar[n - 1 - i])
        {
            check = false;
            break;
        }
    }
    if (check == true)
    {
        cout << "Word is Palindrome";
    }
    else
    {

        cout << "Word is not Palindrome";
    }
}