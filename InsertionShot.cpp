#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];//input array size
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];//read the array
    }
    for(int i=1; i<n; i++)//loop start with 1 index
    {
        int temp= arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
