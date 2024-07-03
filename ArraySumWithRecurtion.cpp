#include<bits/stdc++.h>
using namespace std;
//Array of sum
int sum(int n,int ar[])
{
    if (n<0)
    return 0;
  return  sum(n-1,ar)+ar[n];
}
int main()
{ 
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    cout<<sum(n-1,ar);

}