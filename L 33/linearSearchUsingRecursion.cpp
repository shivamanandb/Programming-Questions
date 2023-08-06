// Linear search using Recursion

#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int n, int key)
{

    if(n < 0)
        return false;
    
    if(arr[0] == key)
        return true;

    else
        return linearSearch(arr+1, n-1, key);

}
int main()
{

    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    int key = 10;

    bool ans = linearSearch(arr, 10, key);

    if(ans) cout<< "found";
    else    cout<< "Not found";

    return 0;
}