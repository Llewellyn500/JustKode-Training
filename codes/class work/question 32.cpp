// Question 32
// Newton’s method is one way of finding the location of the zero or the root of a mathematical function, f(x) say. The method works by initially guessing the x location of the zero. The functional value at the current x is computed to get a better estimate of the zero. This process is repeated until the difference between two successive estimates is at most 0.0000001. Each estimate of xnew is computed from xold as follows:
//  x_new=x_old-(f(x_old))/(f^' (x_old))
// Where f’(xold) is the derivative of the function f(xold).  Given that f(x)=5x^2+4x-72  write a computer solution that will accept as input an initial guess value, xold and then find the zero of the above function. Your output should be the root of the function and the number of iteration performed to obtain the root. 

#include <iostream>
using namespace std;
int main()
{
    double xold, xnew, f, fprime;
    cout << "Enter the initial guess value: ";
    cin >> xold;
    f = 5 * xold * xold + 4 * xold - 72;
    fprime = 2 * xold + 4;
    xnew = xold - (f / fprime);
    cout << "The root is: " << xnew << endl;
    cout << "The number of iterations is: " << 1 << endl;
    return 0;
}