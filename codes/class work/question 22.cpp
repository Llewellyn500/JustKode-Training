// Question 22
// Write a computer solution to generate the Fibonacci series given the first two terms. For example, if the first two terms of a series are 0 and 1, the next (3rd) term is obtained by adding the two preceding terms (1st and 2nd), etc. Thus the third term of the series will be 1 and the fourth will be 2, etc. Generally, the Fibonacci series is defined as follows:
// 		  Fi = Fi-1 + Fi-2 for i=3, 4, …., n
#include <iostream>
using namespace std;
int main(){
    int firstTerm, SecondTerm, nextTerm, numOfTerms;

    cout << "Enter the first term: ";
    cin >> firstTerm;
    cout << "Enter the second term: ";
    cin >> SecondTerm;
    cout << "Enter the number of terms: ";
    cin >> numOfTerms;

    nextTerm = firstTerm + SecondTerm;
    cout << firstTerm << " " << SecondTerm << " " << nextTerm << " ";

    for(int i=3; i<=numOfTerms; i++){
        firstTerm = SecondTerm;
        SecondTerm = nextTerm;
        nextTerm = firstTerm + SecondTerm;
        cout << nextTerm << " ";
    }
    return 0;
}