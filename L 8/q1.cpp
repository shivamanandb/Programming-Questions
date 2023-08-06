// Total amount = 1330 rs. How many 100 Rs., 50 Rs., 20 Rs., 10 Rs., 1 Rs., note. We can have ?

#include<iostream>
using namespace std;

int main()
{

    long long amount;
    cout <<"Enter amount:"<<endl;
    cin >> amount;

    long long rs100 = amount/100;

    amount = amount - rs100*100;

    long long rs50 = amount/50;

    amount = amount - rs50*50;

    long long rs20 = amount/20;

    amount = amount - rs20*20;

    long long rs10 = amount/10;

    amount = amount - rs10*10;

    long long rs1 = amount;

    cout<<"Number of 100 Rs. Note Required="<<rs100<<endl;
    cout<<"Number of 50 Rs. Note Required="<<rs50<<endl;
    cout<<"Number of 20 Rs. Note Required="<<rs20<<endl;
    cout<<"Number of 10 Rs. Note Required="<<rs10<<endl;
    cout<<"Number of 1 Rs. Note Required="<<rs1<<endl;
}