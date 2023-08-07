#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n)
{

    if(n == 0 || n == 1)
        return;

    for(int i=0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }

    BubbleSort(arr, n-1);

}


int main()
{
    int arr[10] = {8,6,4,1,2,5,7,8,6,3};

    BubbleSort(arr, 10);

    cout<<"After sorting:"<< endl;

    for(int i=0; i<10; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}