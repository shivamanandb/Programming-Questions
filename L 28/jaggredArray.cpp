#include<iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int *m = new int[n];
    int** arr = new int*[n];

    for(int i=0; i<n; i++)
    {
        
        cout <<"Enter size:";
        cin >> m[i];

        arr[i] = new int[m[i]];
    }

    // Creating array
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m[i];j++)
        {
            cin >> arr[i][j];
        }
    }

    //Printing array
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m[i];j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }

    // Releasing memory
    for(int i=0; i<n; i++)
    {
        delete []arr[i];
    }

    delete []arr;
    delete []m;
}