#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int A[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<m; j++)
        {
            //swap
            int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;

        }
    }
    //print
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}