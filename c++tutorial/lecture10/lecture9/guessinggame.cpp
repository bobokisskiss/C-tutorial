#include <iostream>

using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout<<"Host:";
    cin>>hostUserNum;
    cout <<"Guest:";
    cin>>guestUserNum;
    if(hostUserNum==guestUserNum) 
    cout<<"correct";
    else
    cout<<"wrong";
        return 0;
    }