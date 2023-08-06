#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int a[N];

int unique(int arr[] , int n)
{
    int a[n] = {0};

    for( int i=0 ;)

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

    cout <<"Unique element in array:"<< unique(arr,n);
    
    return 0;
}