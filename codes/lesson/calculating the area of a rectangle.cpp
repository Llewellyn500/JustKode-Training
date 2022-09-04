// a c++ code that will read the two sides of a rectangle and calculate the area
#include <iostream>
using namespace std;
int main()
{
    int length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    int area = length * width;
    cout << "The area is " << area << " square units." << endl;
    return 0;
}