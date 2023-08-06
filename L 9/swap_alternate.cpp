#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int a[N];

void swap_alternate(int a[], int n)
{
    int start = 0;

    while (start < n-1)
    {
        swap (a[start] , a[start+1]);
        start+=2;
    } 
}

int main()
{
    int arr[100000];
    int n;

    cout <<"Enter how many elements have to insert into array: "<< endl;
    cin >> n;

    cout <<"Enter elements in array: "<<endl;
    for( int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    swap_alternate(arr,n);
    
    cout<<"Array alternate swap: "<<endl;
    for( int i=0; i<n; i++)
    {
        cout << arr[i] <<" ";
    }
    
    return 0;
}