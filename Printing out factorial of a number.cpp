#include <iostream>
using namespace std;
int main(){
	int n,fact=1;
	cout << "Enter number =";
	cin >> n;
		if (n<0){
			cout << "Factorial of a negative number does not exist";
		} else {
			for (int i=1;i<=n;i++){
				fact *=i;
			}
			cout << "Factorial is=" << fact << endl;
		}
		return 0;
}
