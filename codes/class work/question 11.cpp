// Question 11:
// Without using the division (/) devise a c++ code that can be used to m goes into n as well as the remainder. The values for m and n will be read as inputs.
#include <iostream>
using namespace std;
int main()
{
    double n, m, remainder, new_n;
    int counter = 0;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    new_n = n;

    while (n - m >= 0)
    {
        n -= m;
        counter++;
    }
    remainder = n;
    cout << endl;
    cout << m << " goes into " << new_n << ", " << counter << " times" << endl;
    cout << "Remainder: " << remainder;
    return 0;
}