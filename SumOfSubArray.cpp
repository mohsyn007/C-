#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    int currentSum=0;
    for(int i=0; i<n; i++)
    {
        currentSum=0;
        for(int j=i; j<n; j++)
        {
            currentSum+=ar[j];
            cout<<currentSum<<endl;
        }
    }
}