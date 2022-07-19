#include <iostream>
using namespace std;
int main(){
    //array size of 5
    int ages[5];
//10 15 20 25 30
    //taking input for each slot in the array
    for(int i = 0; i < 5; i++){
        cout << "Enter Age " << i + 1 << ": ";
        cin >> ages[i];
    }
    
    cout << "These are the ages of the 5 people: " << endl;

    //print out 4th number of the array 
    cout << "4th Number: " << ages[3] << endl;

}