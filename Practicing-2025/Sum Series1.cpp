/* #include <iostream>

using namespace std;

int main() {

	cout << "Enter the value of the nth term: ";
	int n = 0;
	cin >> n;

	int sum = 0, totalSum = 0;

	for (int a = 1; a <= n; ++a) {
		sum += a;
		cout << "1";
		for (int b = 2; b <= a; ++b) {
			cout << "+" << b;
		}
		cout << "=" << sum << endl;
		totalSum += sum;
	}

	cout << "\nSum of the above series | " << totalSum << endl;

	cin.get();
	return 0;

} */

/*
	Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
	Sample Output:
	Input the value for nth term: 5
	1 = 1
	1+2 = 3
	1+2+3 = 6
	1+2+3+4 = 10
	1+2+3+4+5 = 15
	The sum of the above series is: 35 
*/