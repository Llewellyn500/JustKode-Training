// Question 45
// Without using any additional variable(s) to X and Y, device an algorithm that can be used to interchange the content of two variables X and Y. Use inital values of X and Y to be 10 and 20 respectively to go through your solution and see if the new values of X and Y are now 20 and 10 respectively.

#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int y = 20;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}