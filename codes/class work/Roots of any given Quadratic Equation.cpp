// Write an for finding the roots of any given quadratic equation. A quadratic equation is of the form ax^2+bx+c=0 where a, b and c are coefficients. The roots of an equation mat=y be real or imaginary. If the roots are real then the roots are given by (-b+sqrt(b^2-4ac))/2a and (-b-sqrt(b^2-4ac))/2a. If the roots exist your solution should indicate whether they are equal or not. Message should be displayed if the roots are imaginary.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, disc;
    double root1, root2;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << endl;
    disc = pow(b, 2) - (4 * a * c);
    if (disc < 0)
        cout << "Roots are imaginary";
    else
    {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
        if (root1 == root2)
            cout << "Equal roots";
        else
            cout << "Unequal roots";
    }

    return 0;
}