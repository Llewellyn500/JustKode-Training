//Question 2
// A c++ solution that interchanges the values of two variables, X and Y. The original values of X and Y will be entered via the keyboard. Test your solution with initial values of X and Y being 10 and 20 respectively. At the end of the test, do you have X and Y to be 20 and 10 respectively? If yes then your computer solution may be correct.
#include <iostream>
using namespace std;
int main (){
    int x, y;
    cout << "Enter the value of X: ";
    cin >> x;
    cout << "Enter the value of Y: ";
    cin >> y;
    cout << "Before swapping, X = " << x << " and Y = " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "After swapping, X = " << x << " and Y = " << y << endl;
    return 0;
}