// Question 13
// The square root of a number N can be approximated by a repeated calculation using the following formula.
// 		NewGuess = 0.5(LastGuess + N /LastGuess)
// where NewGuess is the next guess and LastGuess the last guess. The calculation of a NewGuess should be terminated when the absolute value of the difference between the NewGuess and the LastGuess is about 0.0000001. Write down a computer solution for the above formula. You may use the function ABS(x) or '|x|'  to obtain the absolute value of x. 
#include <iostream>
using namespace std;
int main(){
    float n, lastGuess, newGuess;
    cout << "Enter a number: ";
    cin >> n;
    lastGuess = 1;
    newGuess = 0.5 * (lastGuess + n / lastGuess);
    while (abs(newGuess - lastGuess) >= 0.0000001)
    {
        lastGuess = newGuess;
        newGuess = 0.5 * (lastGuess + n / lastGuess);
    }
    cout << "The square root of " << n << " is " << newGuess << endl;
    return 0;
}