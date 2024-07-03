#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    int x;
    cin>>x;
    bool flag= false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if (ar[i][j]==x)
           {
            cout<<i<<" "<<j<<endl;
            flag=true;
           }
        }
    }
    if(flag)
    {
        cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Element is not found"<<endl;
    }
}