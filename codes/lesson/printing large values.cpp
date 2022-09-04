// a c++ code that reads two values, determins the largest value and prints the largest value with an identifying message.
#include <iostream>
using namespace std;
int main()
{
    int value1, value2;
    cout << "Enter value 1: ";
    cin >> value1;
    cout << "Enter value 2: ";
    cin >> value2;
    if (value1 > value2)
    {
        cout << "The largest value is " << value1 << "." << endl;
    }
    else
    {
        cout << "The largest value is " << value2 << "." << endl;
    }
    return 0;
}