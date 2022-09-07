#include <iostream>
using namespace std;
int main(){
    
    int ages[5];
    for(int i = 0; i < 5; i++){
        cout << "Enter Age " << i + 1 << ": ";
        cin >> ages[i];
    }
    
    for (int i = 0; i < 5; i++){
        cout << "Age " << i + 1 << ": " << ages[i] << endl;
    }

}