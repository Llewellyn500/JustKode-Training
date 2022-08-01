// Question 14
// A number N may be said to be either a perfect, deficient or abundant number. If the sum of .divisors (excluding the number itself) equals the original number, the number is said to be perfect. If the sum of the divisors is less than the number itself then the number is said to be deficient otherwise the number is said to be abundant. For example, the number 12 has the divisors 1, 2, 3, 4 and 6. The sum of these divisors is 16. Since the sum of the divisors of 6 is greater than 6, we will say 6 is an abundant number. Write down a computer solution that can classify a given number as a perfect, abundant or a deficient number with an appropriate caption.
#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << n << " is a perfect number." << endl;
    }
    else if (sum < n)
    {
        cout << n << " is a deficient number." << endl;
    }
    else
    {
        cout << n << " is an abundant number." << endl;
    }
    return 0;
}