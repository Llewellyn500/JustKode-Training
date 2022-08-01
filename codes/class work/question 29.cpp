// Question 29
// Write a computer solution that can be used to reverse the digits in a given integer and display the new number. Hint, you are NOT to use a write statement within a loop structure.
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number: ";
    cin>>a;
    b=a;
    while(b>0){
        c=c*10+b%10;
        b=b/10;
    }
    cout<<"The reversed number is: "<<c;
    return 0;
}