#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int ar[],int n,int key)
{
    int s=0;
    int l=n;
    while(s<=l)
    {
        int mid=(s+l)/2;
        if(ar[mid]==key)
        {
        return mid;
        }
        else if(ar[mid]>key)
        {
            l=mid-1;
        }
        else
        {
        s=mid+1;
        }
    }
    return -1;
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
    int key;
    cin>>key;
    cout<<BinarySearch(ar,n,key)<<endl;

}