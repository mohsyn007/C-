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
    int ans=2;
    int previous_differnce=ar[1]-ar[0];
    int j=2;
    int curr=2;
    while(j<n)
    {
        if(previous_differnce==ar[j]-ar[j-1])
        {
        curr ++;}
        else
        {
        previous_differnce=ar[j]-ar[j-1];
        curr =2;

        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
}