#include <iostream>

using namespace std;


int main()
{
   int number;
   cout << "Enter a number: ";
   cin >> number;
   if (number==0)
   cout<<"You have entered zero";
   else{
    int counter=0;
    while(number>0){
        number/=10;
        counter++;
    }
    cout<<"The number of digits in the number is "<<counter;
   }

   
    return 0;
}