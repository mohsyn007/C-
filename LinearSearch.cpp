#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int ar[],int n,int key)
{
    for (int i=0; i<n; i++)
    {
        if(ar[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++ )
    {
        cin>>ar[i];
    }
    int key;
    cin>>key;
    cout<<LinearSearch(ar,n,key)<<endl;
}