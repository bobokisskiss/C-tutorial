#include <iostream>

using namespace std;

int main()
{
   int number, reversedNumber = 0;
   cout << "Enter a number: ";
   cin >> number;

   while (number!= 0)
   {
      reversedNumber = reversedNumber * 10;
      reversedNumber = reversedNumber + number % 10;
      number = number / 10;
   }
   cout << "Reversed number: " << reversedNumber << endl;
      system("pause");
    return 0;
}