// A c++ program to find the zero of a function f(x) using the Newton-Raphson method.
// The function f(x) is defined as: f(x) = 2x^5 + 4x - 72.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, y, epsilon, x_old, x_new;
    int i = 0;
    cout << "Enter Initial guess: ";
    cin >> x;
    epsilon = 1e-6;
    x_old = x;
    do
    {
        x_new = x_old - ((2.0 * pow(x_old, 5)) + (4 * x_old) - 72) / (10 * pow(x_old, 4) + 4);
        x_old = x_new;
        i++;
    } while (fabs(x_new - x) < epsilon);

    // for (i = 0; i < 200; i++)
    // {
    //     x_new = x_old - ((2*pow(x_old, 5)) + (4 * x_old) - 72) / (10 * pow(x_old, 4) + 4);
    //     x_old = x_new;
    //     if (fabs(x_new - x) < epsilon)
    //     {
    //         break;
    //     }
    // }

    cout << "The root of the function f(x) is " << x_new << endl;
    cout << "The number of iterations is " << i << endl;
    return 0;
}