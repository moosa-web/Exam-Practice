/* #include <iostream>

using namespace std;

static bool isPrime(int n) {
	int ctr = 0;
	for (int c = 1; c <= n; ++c) {
		if (n % c == 0)
			++ctr;
	}
	return ctr == 2;
}

int main() {

	cout << "Input the upperlimit: ";
	int upperLimit = 0;
	cin >> upperLimit;

	for (int c = 2; c <= upperLimit; c++) {
		if (!isPrime(c))
			cout << c << " ";
	} cout << endl;

	cin.get();
	return 0;

} */

/*
Write a C++ program to list non-prime numbers from 1 to an upperbound.
Sample Output:
Input the upperlimit: 25
The non-prime numbers are:
4 6 8 9 10 12 14 15 16 18 20 21 22 24 25
*/