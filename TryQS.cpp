#include<bits/stdc++.h>
using namespace std;
int partitation(int arr[],int lb,int ub)
{
    int pivot= arr[lb];
    int start=lb;
    int end=ub;
    while (start<end)
    {
        while (arr[start]<=pivot)
        {
            start ++;
        }
        while (arr[end]>pivot)
        {
            
            end--;
        }
        if (start<end)
        {
            swap(arr[start],arr[end]);
        }

    }
    swap (arr[lb],arr[end]);
    return end;
}
    void Quickshot(int arr[],int lb, int ub)
    {
        if(lb<ub)
        {
            int loc = partitation(arr,lb,ub);
            Quickshot(arr,lb,loc-1);
            Quickshot (arr,loc+1,ub);
        }

    }
    int BinarySearch(int arr[],int n, int data)
{
    int lb=0;
    int ub=n-1;
    while(ub>lb)
    {
        int mid=(ub+lb)/2;
        if(arr[mid]==data)
        {
            return mid;
        }
        else if(arr[mid]>data)
        {
            ub=mid-1;
        }
        else
        {
            lb=mid+1;
        }
    } 

    return -1;
}

    

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Quickshot (arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout << arr[i]<< " ";
    }
    int data;
    cin>>data;
    cout<<BinarySearch(arr,n,data);
}