int findPivot(vector<int>arr,int n)
{
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid = start+(end-start)/2;
    }
    return start-1;
}

int bin_srch(vector<int>arr,int pivot_element,int n,int k)
{
    // int ans = -1;
    if(arr[0]<=k<=arr[pivot_element])
    {
        int start = 0;
        int end = pivot_element;
        int mid = start+(end-start)/2;
        while(start<=end)
        {
            cout<<arr[mid]<<" ";
            if(arr[mid] == k)
            {
                return mid;
            }
            else if(arr[mid] > k)
                end = mid-1;
            else    
                start = mid+1;
            mid = start+(end-start)/2;
        }
        return -1;
    }
    else
    {
        int start = pivot_element+1;
        int end = n-1;
        int mid = start+(end-start)/2;
        while(start<=end)
        {
            if(arr[mid] == k)
                return mid;
            else if(arr[mid] > k)
                end = mid-1;
            else    
                start = mid+1;
            mid = start+(end-start)/2;
        }
        return -1;
    }
}

int search(vector<int>& arr, int n, int k)
{
    int pivot_element=findPivot(arr,n);
    // cout<<pivot_element<<" ";
    int binary_srch=bin_srch(arr,pivot_element,n,k);
    return binary_srch;
}

