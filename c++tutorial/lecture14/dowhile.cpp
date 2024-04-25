#include <iostream>

using namespace std;

int main()
{
    int usersPin= 1234, pin, errorCounter =0;

    do {
        cout<<"Pin: ";
        cin>>pin;
        if (pin!= usersPin) {
            errorCounter++;
        
    }
    } while (pin!= usersPin && errorCounter < 3);
    return 0;
}