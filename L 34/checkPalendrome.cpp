#include<iostream>
using namespace std;

bool isPalendrome(string str,int s,int e)
{

    if(s > e)
        return true;
    
    if(str[s] != str[e])
        return false;
    else    
        isPalendrome(str, s+1, e-1);
    
    return true;
}

int main()
{

    string str = "naman";

    if(isPalendrome(str, 0, str.size()-1))
        cout <<"Palendrome string";
    else    
        cout <<"Not Palendrome string";

    return 0;

}