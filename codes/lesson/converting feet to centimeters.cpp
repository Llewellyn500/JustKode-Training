// a c++ cope to convert feet to centimeters
#include <iostream>
using namespace std;
int main()
{
    int feet;
    cout << "Enter feet: ";
    cin >> feet;
    int centimeters = feet * 30.48;
    cout << feet << " feet is " << centimeters << " centimeters." << endl;
    return 0;
}