// Question 19
// Write a computer solution for evaluating the value of sin2x according to the formula
// Your computer solution should also return the number of terms needed to evaluate sin2x to 1 in 1,000,000 together with the value of sin2x for a given x with appropriate captions. You must put in a check so that your computer solution accepts x as input if only the absolute value of x is less than.
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double x, sin2x, term, sum = 0;
    int i = 0;
    cout << "Enter x: ";
    cin >> x;
    while (abs(x) < 1e6)
    {
        term = pow(x, 2) / (2 * i + 1);
        sum += term;
        i++;
    }
    sin2x = sum;
    cout << "sin2x = " << sin2x << endl;
    cout << "Number of terms needed to evaluate sin2x to 1 in 1,000,000: " << i << endl;
    return 0;
}