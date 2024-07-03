#include <bits/stdc++.h>
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
    for(int i=0; i<n; i++)

    {
        int minIndex =i;
        for( int j=i+1; j<n; j++)
        {
            if(ar[j]<ar[minIndex])
            {
                minIndex=j;
            }
             
            }
         swap(ar[i],ar[minIndex]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";

    }
}