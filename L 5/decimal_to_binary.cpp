#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int a[N];
int main()
{
    int num,i=0;
    long result=0;
    cout<<"Enter any decimal number:"<<endl;
    cin>>num;
    while(num)
    {
        result=result+(num&1)*pow(10,i);
        i++;
        num>>=1;
    }
    cout<<"In Binary form:"<<result<<endl;
}