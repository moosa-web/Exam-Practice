#include <iostream>

using namespace std;

int main() {

	string str = "Diploma in Computer Engineering";
	string str1 = "Computer";
	string str2 = "Information Technology";

	size_t pos = str.find(str1);

	cout << pos << endl;

	str.replace(pos, str1.length(), str2);

	cout << str << endl;

	cin.get();
	return 0;

}