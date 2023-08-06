#include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for(int i=1; i<=n ;i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}
int nCr(int n, int r)
{
    int numerator , denominator;

    numerator = fact(n);
    denominator = fact(r) * fact(n-r);

    return numerator / denominator;
}
int main()
{
    int n,r;
    cin >> n >> r;
    cout<<"nCr="<<nCr(n,r);
}