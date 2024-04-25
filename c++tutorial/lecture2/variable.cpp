#include <iostream>

using namespace std;

int main()
{
    float annualSalary;
    cout << "Enter your annual salary: ";
    cin >> annualSalary;
    float monthlySalary=annualSalary/12;
    cout << "Your monthly salary is: " << monthlySalary << endl;
    cout << "In 10 years you will earn " <<annualSalary*10 << " dollars" << endl;
    char character='a';
    int yearOfBirth=1995;
    char gender='M';
    bool isOlderThan18=true;
    float averageGrade=4.5;
    double balance=456748745;
    cout<<"size of int is"<<sizeof(int)<<endl;
    cout<<"int min valure is"<<INT_MIN<<endl;
    cout<<"int max valure is"<<INT_MAX<<endl;
    cout<<"size of float is"<<sizeof(float)<<endl;
    cout<<"float min valure is"<<INT16_MIN<<endl;
    cout<<"float max valure is"<<INT16_MAX<<endl;
    cout<<"size of double is"<<sizeof(double)<<endl;
    return 0;
}