#include <iostream>
using namespace std;
int main(){
	int n;
	unsigned long long int fact=1;
	cout << "Enter number =";
//	cin >> n;
		do{
//			cout << "Enter number =";
			cin >> n;
			cout << "Factorial of a negative number does not exist" << endl;
		} while (n<0);
			for (int i=1;i<=n;i++){
				fact *=i;
			}
			cout << "Factorial is=" << fact << endl;
		
		return 0;
}
