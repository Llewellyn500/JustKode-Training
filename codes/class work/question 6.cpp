// Question 6
// Write down a computer solution that can be used to count the number of times a particular digit appears in an (integer) input. 
// Hint you may assume that there is an operator % that returns the remainder when one integer is divided by another and has the syntax a %b where a and b are integer constants.
#include <iostream>
using namespace std;
int main (){
    int n, i, digit, count = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the digit: ";
    cin >> digit;
    for (i = 0; i < n; i++){
        if (i % 10 == digit){
            count++;
        }
    }
    cout << "The number of times " << digit << " appears in " << n << " is " << count << endl;
    return 0;
}