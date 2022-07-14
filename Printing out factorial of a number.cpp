#include <iostream>
using namespace std;
int main(){
	int n;
	long double fact=1.0;
	cout << "Enter number =";
	cin >> n;
		do{
			cout << "Factorial of a negative number does not exist" << endl;
			cout << "Enter number =";
			cin >> n;
		} while (n<0);
			for (int i=1;i<=n;i++){
				fact *=i;
			}
			cout << "Factorial is=" << fact << endl;
		
		return 0;
}
