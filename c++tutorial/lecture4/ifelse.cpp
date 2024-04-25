#include <iostream>

using namespace std;

int main()
{
   int number;
   cout << "Enter a number: ";
      cin >> number;
      if(number % 2 == 0)
      {cout<<"You have entered an even number.";}
      else
      {cout<<"You have entered an odd number.";}
    return 0;
}