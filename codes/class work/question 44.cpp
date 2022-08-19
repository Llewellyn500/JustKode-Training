// Question 44
// One way of approximating the cube root of x given an initial approximation is to use Newton's Method for computing the cube root,
// BetterApproximation=OldApproximation+1/3(x/OldApproximation^2-OldApproximation)
// A continued BetterApproximation is calculated until the difference between successive BetterApproximations is less than 0.000001. Devise a computer solution for finding the cube root of a number using the above approximation.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x;
    cout << "Enter a number: ";
    cin >> x;
    double oldApproximation = 1;
    double newApproximation = oldApproximation + (x/pow(oldApproximation,2)-oldApproximation)/3;
    while(abs(newApproximation-oldApproximation)>0.000001){
        oldApproximation = newApproximation;
        newApproximation = oldApproximation + (x/pow(oldApproximation,2)-oldApproximation)/3;
    }
    cout << "The cube root of " << x << " is " << newApproximation << endl;
    return 0;
}