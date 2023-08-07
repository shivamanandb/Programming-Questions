#include<iostream>
using namespace std;

void merge(int arr[], int s,int e)
{

    int mid = s + (e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++)
        first[i] = mainArrayIndex++[arr];

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++)
        second[i] = arr[mainArrayIndex++];

    // merge two arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1<len1 && index2<len2)
    {
        if(first[index1] < second[index2])
            arr[mainArrayIndex++] = first[index1++];
        else
            arr[mainArrayIndex++] = second[index2++];        
    }

    while(index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}


void mergeSort(int arr[], int s, int e)
{
    if(s >= e)
        return;

    int mid = s + (e-s)/2;

    // left part sort krna hai
    mergeSort(arr, 0, mid);

    // Right part sort krna hai
    mergeSort(arr, mid+1, e);

    // merge
    merge(arr, s, e);

}
int main()
{
    int arr[10] = {1,5,2,4,6,9,7,8,1,4};

    mergeSort(arr, 0, 9);

    cout <<"Sorted Array:"<<endl;

    for(int i = 0; i<9; i++)
        cout << arr[i] <<" ";

    return 0;
}