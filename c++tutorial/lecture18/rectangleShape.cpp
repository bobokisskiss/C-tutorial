#include <iostream>

using namespace std;

int main()
{
    int height, width;
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter width: ";
        cin >> width;
        char symbol;
        cout << "Enter symbol: ";
        cin >> symbol;

        for (int h=0;h<height;h++) {
            for(int w=0;w<width;w++){
                cout << symbol;
            }
            cout << endl;
        }

}