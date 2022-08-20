// Largest prime factor
// Problem 3
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <iostream>
using namespace std;
int main(){
    long long int num = 600851475143;
    long long int i = 2;
    while (i * i < num)
    {
        while (num % i == 0)
        {
            num /= i;
        }
        i++;
    }
    cout << num;
    return 0;
}