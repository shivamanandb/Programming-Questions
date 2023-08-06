#include<iostream>
using namespace std;

int fabonnacci(int n)
{

    if(n == 0)
        return 0;
    
    if(n == 1)
        return 1;
    
    return fabonnacci(n-1) + fabonnacci(n-2);

}


int main()
{
    int n;
    
    cout <<"Enter the position:";
    cin >> n;

    cout <<"Answer is:"<<fabonnacci(n);

    return 0;

}