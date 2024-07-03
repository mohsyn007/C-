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