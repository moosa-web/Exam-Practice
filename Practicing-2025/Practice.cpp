//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//static double gcd(double a, double b) {
//	if (b == 0) {
//		return a;
//	}
//	return gcd(b, fmod(a, b));
//}
//
//class Fraction {
//private:
//	double num, den;
//public:
//	Fraction() {
//		num = 0;
//		den = 1;
//	}
//	Fraction(double n, double d) {
//		num = n;
//		den = d;
//	}
//	double getNum() const {
//		return num;
//	}
//	double getDen() const {
//		if (den == 0) {
//			cout << "Denominator cannot be zero" << endl;
//		}
//		return den;
//	}
//	void setNum(double n) {
//		num = n;
//	}
//	void setDen(double d) {
//		den = d;
//	}
//	Fraction operator-() {
//		return Fraction(-num, den);
//	}
//	Fraction operator+(const Fraction& f) {
//		Fraction result;
//		result.num = this->num * f.den + f.num * this->den;
//		result.den = this->den * f.den;
//		return result;
//	}
//	Fraction operator-(const Fraction& f) {
//		Fraction result;
//		result.num = this->num * f.den - f.num * this->den;
//		result.den = this->den * f.den;
//		return result;
//	}
//	Fraction operator/(const Fraction& f) {
//		Fraction result;
//		result.num = this->num * f.num;
//		result.den = this->den * f.den;
//		return result;
//	}
//	Fraction operator*(const Fraction& f) {
//		Fraction result;
//		result.num = this->num * f.num;
//		result.den = this->den * f.den;
//		return result;
//	}
//	bool operator<(const Fraction& f) {
//		return (double)this->num * f.den < (double)f.num * this->den;
//	}
//	bool operator>(const Fraction& f) {
//		return (double)this->num * f.den > (double)f.num * this->den;
//	}
//	bool operator<=(const Fraction& f) {
//		return (double)this->num * f.den <= (double)f.num * this->den;
//	}
//	bool operator>=(const Fraction& f) {
//		return (double)this->num * f.den >= (double)f.num * this->den;
//	}
//	bool operator==(const Fraction& f) {
//		return (double)this->num * f.den == (double)f.num * this->den;
//	}
//	bool operator!=(const Fraction& f) {
//		return (double)this->num * f.den != (double)f.num * this->den;
//	}
//	static friend ostream& operator<<(ostream& out, const Fraction& f) {
//		out << f.num << "/" << f.den;
//		return out;
//	}
//	static friend istream& operator>>(istream& in, Fraction& f) {
//		in >> f.num >> f.den;
//		return in;
//	}
//	Fraction operator++() {
//		return Fraction(this->num + this->den, this->den);
//	}
//	Fraction operator--() {
//		return Fraction(this->num - this->den, this->den);
//	}
//	Fraction operator++(int) {
//		Fraction temp(this->num, this->den);
//		this->num += this->den;
//		return temp;
//	}
//	Fraction operator--(int) {
//		Fraction temp(this->num, this->den);
//		this->num -= this->den;
//		return temp;
//	}
//	Fraction operator=(const Fraction& f) {
//		this->num = f.num;
//		this->den = f.den;
//		return *this;
//	}
//	Fraction simplify() {
//		double divisor = gcd(num, den);
//		this->num /= divisor;
//		this->den /= divisor;
//		return *this;
//	}
//};
//
//int main() {
//	Fraction f1(1, 2), f2(3, 4), f3;
//	cout << "F1 = " << f1 << endl;
//	cout << "F2 = " << f2 << endl;
//
//	if (f1 > f2)
//		cout << "F1 is greater than F2" << endl;
//	else
//		cout << "F2 is greater than F1" << endl;
//
//	f3 = f1 + f2;
//	cout << "F3 = " << f3 << endl;
//	f3.simplify();
//	cout << "Simplified F3 = " << f3 << endl;
//
//	-f1;
//	cout << "-F1 = " << f1 << endl;
//
//	Fraction f4 = f1 / f2;
//	cout << "F4 = F1/F2 = " << f4 << endl;
//
//	++f3;
//	cout << "F3 = " << f3 << endl;
//
//	f4++;
//	cout << "F4 = " << f1 << endl;
//
//	cin.get();
//	return 0;
//}
