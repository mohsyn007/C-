#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int maxN=INT_MIN;
    int minN=INT_MAX;
    for(int i=0; i<n; i++)
    {
        maxN=max(maxN,arr[i]);
        minN=min(minN,arr[i]);
    }
    cout<<maxN <<" "<<minN;

}