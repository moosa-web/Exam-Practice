/* #include <iostream>

using namespace std;

bool isOdd(int n) {
	return n % 2 == 1;
}

int main() {

	cout << "Input number of terms: ";
	int n = 0;
	cin >> n;

	int sum = 0;

	cout << "The odd numbers are: ";

	for (int a = 1; a <= n; ++a) {
		if (isOdd(a)) {
			cout << a << " ";
			sum += a;
		}
	}

	cout << "\nThe Sum of odd Natural Numbers upto " << n << " terms: " << sum << endl;

	cin.get();
	return 0;

} */

/*
	Write a C++ program that displays the sum of n odd natural numbers.
Sample Output:
Input number of terms: 5
The odd numbers are: 1 3 5 7 9
The Sum of odd Natural Numbers upto 5 terms: 25

*/