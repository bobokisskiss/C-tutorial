#include <iostream>

using namespace std;

int main()
{
    float weight,height,bmi;
    cout<<"Weight(kg), height(m): ";
    cin>>weight>>height;
    bmi=weight/(height*height);
    if(bmi<18.5)
    cout<<"Underweight";
    else if (bmi>25)
    cout<<"Overweight";
    else
    cout<<"Normal weight";

    cout<<"your BMI is "<<bmi<<endl;


        return 0;


}