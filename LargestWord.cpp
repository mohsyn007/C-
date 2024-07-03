#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Largest word in a sentense
    int n;
    cin >> n;
    cin.ignore();
    char ar[n + 1];
    cin.getline(ar, n);
    cin.ignore();
    int i = 0;
    int CurrLen = 0;
    int MaxLen = 0;
    int st=0,maxst=0;
    while (true)
    {
        if (ar[i] == ' ' || ar[i] == '\0')
        {
            if (CurrLen > MaxLen)
            {
                MaxLen = CurrLen;
                maxst=st;
            }
            CurrLen = 0;
            st=i+1;
        }
        else
            CurrLen++;
        if (ar[i] == '\0')
            break;
        i++;
    }
    cout << MaxLen << endl;
    for(int i=0; i<MaxLen;i++)
    cout<<ar[i+maxst];
}