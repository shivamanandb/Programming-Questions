// Array is sorted or not using recursion

#include<iostream>
using namespace std;

bool check(int arr[],int n)
{

    if(n == 0 || n == 1)
        return true;
    if(arr[0] > arr[1])
        return false;
    return check(arr+1,n-1);

}
int main()
{
    
    int arr[5]={1,2,3,4,5};

    bool ans= check(arr,5);

    if(ans)
        cout<<"True";
    else
        cout<<"False";

    return 0;

}