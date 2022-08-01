// Question 10
// If p and q are both primes and q=p+2, then the pair p,q are called twin primes. For example, 5,7 are twin primes. Devise a computer solution to list all twin primes that are less than a positive integer n.
#include <iostream>
using namespace std;
int main (){
    int n, i, j, count = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = 2; i < n; i++){
        for (j = i + 2; j < n; j++){
            if (i % 2 == 0 && j % 2 == 0){
                if (i + j == n){
                    count++;
                    cout << i << " " << j << endl;
                }
            }
        }
    }
    cout << "The number of twin primes less than " << n << " is " << count << endl;
    return 0;
}