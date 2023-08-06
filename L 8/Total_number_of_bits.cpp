#include<iostream>
using namespace std;

int set_bits(int n)
{
    int count = 0 ;
    while (n)
    {
        if (n&1) count++;
        n>>=1;
    }
    return count;
}

int total_set_bits (int x , int y)
{
    return set_bits(x) + set_bits(y);
}

int main()
{
    int a,b;
    cout <<"Enter value for a and b:"<<endl;
    cin >> a >> b;

    cout <<"Number of total bits=" << total_set_bits(a,b) << endl;

    return 0;
}
