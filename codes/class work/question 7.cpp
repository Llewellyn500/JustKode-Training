// Question 7
// Assume that there is a function MID with the syntax, MID(s1,m,n) where s1 a string, and m and n are integers. Given that MID(s1,m,n) is to return n middle characters of s1 starting from the character at position m, write a c++ solution that accepts as input a string of characters and output the number of times a particular character appears in the input. 

#include <iostream>
using namespace std;
int main (){
    int lengthOfString, times = 0;
    string theString;
    char theChar;
    cout << "You want to find the number of times a character occurs in a string" << endl;
    cout << "Input the character" << endl;
    cin >> theChar;
    cout << "Input the length of the string" << endl;
    cin >> lengthOfString;
    cout << "Input the string" << endl;
    cin >> theString;
    for (int i = 1; i <= lengthOfString; i++){
        if (theString[i] == theChar){
            times++;
        }
    }
    cout << theChar << " occurs in " << theString << " " << times << " times" << endl;
    return 0;
}