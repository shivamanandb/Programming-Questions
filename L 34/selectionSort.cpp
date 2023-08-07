#include<iostream>
using namespace std;


void SelectionSort(int arr[], int n)
{

    if(n == 0 || n == 1)
        return;

    for(int i = n-1; i>0; i--)
    {
        if(arr[n-1] < arr[i-1])
            swap(arr[n-1], arr[i-1]);
    }

    SelectionSort(arr, n-1);

}

int main()
{
    int arr[10] = {8,6,4,1,2,5,7,8,6,3};

    SelectionSort(arr, 10);

    cout<<"After sorting:"<< endl;

    for(int i=0; i<10; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}