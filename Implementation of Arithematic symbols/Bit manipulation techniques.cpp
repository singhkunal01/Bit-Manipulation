/* This will contains the code of Bit manipulation techniques */
#include <bits/stdc++.h>
using namespace std;


//Addition without using + Operator
class Execution {
private:
public:
	int additionUsingBit(int a, int b) {
		int carry;
		while (true) {
			carry = a & b;
			a ^= b;
			b = carry << 1;
			//if carry becomes zero then break
			if (!carry) break;
		}
		return a;//final answer is in the carry variable
	}



};


//main function to use them
int main() {
	int t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int num1, num2;
		// cin >> num1 >> num2;
		cin >> num1;
		Execution obj;
		// cout << obj.printBinary(num1) << "\n";
		cout << obj.printBinary(num1) << newl ;
	}
}