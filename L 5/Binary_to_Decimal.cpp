#include<iostream>
#include<math.h>
using namespace std;
const int N=1e7+10;
int a[N];
int binary_to_integer(int num)
{
    int rem,res=0,i=0;
    while(num)
    {
        rem=num%10;
        if(rem&1==1)
            res+=pow(2,i);
        i++;
        num/=10;
    }
    return res;
}
int main()
{
    int num;
    cout<<"Enter any binary number:"<<endl;
    cin>>num;
    cout<<binary_to_integer(num);
    return 0;
}
