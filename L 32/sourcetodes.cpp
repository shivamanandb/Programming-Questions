#include<iostream>
using namespace std;

void reachDist(int source, int dist)
{

    cout<<"Source:"<<source<<" "<<"Destination:"<<dist<<endl;

    // Base Case
    if(source == dist)
    {
        cout <<"Pahuch Gya";
        return;
    }

    reachDist(source+1, dist);
}

int main()
{

    int source = 0, dist = 10;
    reachDist(source, dist);
    
    return 0;
}