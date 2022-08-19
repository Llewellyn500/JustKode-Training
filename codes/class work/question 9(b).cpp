// Question 9(b)
// Given a positive integer, N, devise a computer solution that can be used to find another integer M whose factorial is N. For example if N is given as 720 then M should be 6.

#include <iostream>

using namespace std;
int fact(int num);
int main()
{
    int n,counter=0;
    cout << "Enter the number to find the factorial of" << endl;
    cin>>n;
    while(true){
       counter++;
       if(n==fact(counter))  {
         {break;}
         //The true makes the loop run nonstop ,but ones it reaches the break the loop is forced to break out of the loop after
         //the condition is met and counts counter.
       }
          }
    cout<<counter;
    return 0;
}

int fact(int num){
    if (num==0 || num==1){
       return 1;
    }
    int product=1;
    for (int i=1;i<=num;i++){
       // product =product*i;
        product*=i;
    }
    return  product;
}