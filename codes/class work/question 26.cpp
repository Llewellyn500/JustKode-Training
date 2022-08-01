// Question 26
// A prime number is any positive integer that is divisible by itself and the number 1. Write down a computer solution that can display as output all prime numbers less than or equal to 1000. 
#include <iostream>
using namespace std;
int main(){
    for (int i = 2; i <= 1000; i++)
    {
        bool is_prime = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            cout << i << endl;
        }
    }
    return 0;
}