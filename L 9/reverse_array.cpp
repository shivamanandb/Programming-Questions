#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int a[N];

void reverse_array(int a[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap (a[start] , a[end]);
        start++;
        end--;
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

    reverse_array(arr,n);
    
    cout<<"Array after reverse: "<<endl;
    for( int i=0; i<n; i++)
    {
        cout << arr[i] <<" ";
    }
    
    return 0;
}