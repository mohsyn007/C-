#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
   
    while(x--)
    {
         int a,b,c;
    cin>>a>>b>>c;
        if(a==b)
        {
            cout<<c<<endl;
        }
        else if(a==c)
        {
            cout<<b<<endl;
        }
        else 
        cout<<a<<endl;
    }
}