#include <iostream>

using namespace std;

int main()
{
    cout<<5+2<<endl;
    cout<<5/2<<endl;
    cout<<5%2<<endl;
    cout<<5*2<<endl;
    
    int counter=7;
    counter++;
    cout<<counter<<endl;
    counter--;
    cout<<counter<<endl;
    counter+=2;
    cout<<counter<<endl;

    int a=5,b=8;
    cout<<(a!=b)<<endl;
    cout<<(a==b&&b==5)<<endl;
    cout<<(a==b||b==5)<<endl;

    return 0;
}