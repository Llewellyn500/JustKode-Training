// Question 8
// Write a computer solution that accepts as input an integer value and then output the sum of the digits in the number as well as the number of digits it has with appropriate captions.
#include <iostream>
using namespace std;
int main (){
    int n, i, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = 0; i < n; i++){
        sum = sum + n % 10;
        n = n / 10;
    }
    cout << "The sum of the digits in " << n << " is " << sum << endl;
    cout << "The number of digits in " << n << " is " << i << endl;
    return 0;
}