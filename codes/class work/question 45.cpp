// Question 45
// Without using any additional variable(s) to X and Y, device an algorithm that can be used to interchange the content of two variables X and Y. Use inital values of X and Y to be 10 and 20 respectively to go through your solution and see if the new values of X and Y are now 20 and 10 respectively.

#include <iostream>
using namespace std;
int main()
{
    double x = 10, y = 20;

    cout << " X = " << x << endl;
    cout << " Y = " << y << endl;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << " SWAP " << endl;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;

    return 0;
}