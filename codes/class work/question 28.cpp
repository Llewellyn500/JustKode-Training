// Question 28
// Write a computer solution that can be used to convert a number in a given base to base 10. The input to your program should be the number to convert and the base of the number.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,counter=0,sum=0,base,remainder;
    cout<< "Enter the number to convert: ";
    cin>>num;
    cout<< "Enter the base of the number: ";
    cin>>base;
    while(num>0){
        remainder=num%10;
        sum=sum+remainder*pow(base,counter);
        num=num/10;
        counter++;
    }
    cout<<sum;
    return 0;
}