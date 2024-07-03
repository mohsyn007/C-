#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    ar[n]=-1;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    int ans=0; 
    int mx=-1;
    for(int i=0; i<n; i++)
    {
        if(ar[i]>mx && ar[i]>ar[i+1])
        {
            ans++;
        }
        mx=max(mx,ar[i]);

    }
    cout<<ans<<endl;
}