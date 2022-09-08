// Write an algorithm for finding the factorial of any given positive integer, n. Given a positive integer n, its factorial is calculated as n!=n(n-1)(n-2)(n-3).......4*3*2*1

#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
    cout << "INVALID number";
    else {
        int factorial =1 ;
        for (int i = number; i>=1;i--){
            factorial *=i;
        }
        cout << number << "! = "<< factorial;
    }

    return 0;
}