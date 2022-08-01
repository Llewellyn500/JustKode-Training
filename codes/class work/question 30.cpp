// Question 30
// Assume that no programming language has a function for returning the result of one integer raised to the power of another integer. It has become very necessary for you to write a computer solution that can be used to calculate a^b  where a and b are integers. Note that a may also be a real number but b should always be an integer.
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;
    c=a;
    while(b>1){
        c=c*a;
        b--;
    }
    cout<<"The result is: "<<c;
    return 0;
}