// Question 5
// Devise a computer solution that reads in a positive integer n and then prints the sum of the first n even integers and the sum of the first n odd numbers.
#include <iostream>
using namespace std;
int main (){
    int n, i, sum_even = 0, sum_odd = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = 0; i < n; i++){
        if (i % 2 == 0){
            sum_even = sum_even + i;
        }
        else{
            sum_odd = sum_odd + i;
        }
    }
    cout << "The sum of the first " << n << " even integers is " << sum_even << endl;
    cout << "The sum of the first " << n << " odd numbers is " << sum_odd << endl;
    return 0;
}