// Bianry Search Using Recursion

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s,int e, int key)
{

    if (s > e)
    {
        return false;
    }
    
    int mid = s+(e-s)/2;

    if(arr[mid] == key)
        return true;


    if(arr[mid] < key)
        return binarySearch(arr, mid+1, e, key);
    
    else
        return binarySearch(arr, s, mid-1, key);   

}

int main()
{

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int key = 10;

    bool ans = binarySearch(arr, 0, 9, key);

    if(ans) 
        cout<<"Found";
    else
        cout<<"Not found";

    return 0;

}