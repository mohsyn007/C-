#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        while(n>0)
        {
            int last=n%10;
            sum=sum*10+last;
            n=n/10;

        }
        cout<<sum<<endl;
    }

}