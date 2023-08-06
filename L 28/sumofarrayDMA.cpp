#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int sum = 0;

    // variable size array
    int *arr = new int[n];

    // Taking input in array
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    cout<<"Sum of array: "<<sum;

    delete []arr;

    return 0;

}