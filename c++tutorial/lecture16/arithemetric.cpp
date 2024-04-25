#include <iostream>

using namespace std;

int main()
{
    int grade, sum = 0;

    for (int i = 0; i < 3; i++){

        cout<<"Enter grade: "<<i+1<<": ";
        cin>>grade;
        sum += grade;
    }
    cout<<"Sum="<<sum<<endl;
    cout<<"Avg grade="<<(float)sum/3.0<<endl;
    

}