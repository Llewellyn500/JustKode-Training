// Question 27
// Given that a % b will give the remainder when a is divided by b, write a detailed computer solution that can be used to convert a number in base 10 to a different base. The inputs to your computer solution should be a number in base 10 and a base the number is to be converted to.
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number in base 10: ";
    cin>>a;
    cout<<"Enter the base to convert to: ";
    cin>>b;
    c=a;
    while(c>0){
        c=c/b;
        cout<<c%b;
    }
    return 0;
}