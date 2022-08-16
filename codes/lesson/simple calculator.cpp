// a simple calculator for the operations addition, subtraction, multiplication and division
#include <iostream>
using namespace std;
int main(){
    int a, b;
    char opp;
    cout << "Enter your 1st number: ";
    cin >> a;

    cout << "Enter your operation: ";
    cin >> opp;

    cout << "Enter your 2nd number: ";
    cin >> b;

    int results;
    if (opp == '+'){
        results = a + b;
    }
    else if (opp == '-'){
        results = a - b;
    }
    else if (opp == '*'){
        results = a * b;
    }
    else if (opp == '/'){
        results = a / b;
    }
    else{
        cout << "Invalid operation";
    }

cout << results;

}