// Question 19
// Write a computer solution for evaluating the value of sin2x according to the formula
// sin2x=x^2-((2^3x^4)/4!)+((2^5x^6)/6!)-((2^7x^8)/8!)+...
// Your computer solution should also return the number of terms needed to evaluate sin2x to 1 in 1,000,000 together with the value of sin2x for a given x with appropriate captions. You must put in a check so that your computer solution accepts x as input if only the absolute value of x is less than pie/2.
#include <iostream>
#include <cmath>
using namespace std;
int factrl(int);
int main()
{
    double pi = 3.14159, sinXsqrd = 0, prevV, x;
    int i = 1;
    cout << " Enter x in radians: ";
    cin >> x;
    while (fabs(x) >= pi / 2)
    {
        cout << " The value of x must be less then " << pi / 2 << endl;
        cin >> x;
    }

    do
    {
        prevV = sinXsqrd;
        sinXsqrd = +pow(-1, i + 1) * pow(2, 2 * i - 1) * pow(x, 2 * i) / factrl(2 * i);
        i++;
    } while (fabs(prevV - sinXsqrd) > pow(10, -6));

    cout << "sin(" << x << ")squared is " << sinXsqrd << endl;
    cout << " Number of terms used: " << i - 1;
    return 0;
}