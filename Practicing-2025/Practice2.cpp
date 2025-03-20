//#include<iostream>
//
//using namespace std;
//
//static int gcd(int a, int b)
//{
//	if (b == 0)
//		return a;
//	return gcd(b, a % b);
//}
//
//class Fraction
//{
//private:
//	int num, den;
//public:
//	Fraction() : num(0), den(1) {}
//	Fraction(int a, int b) : num(a), den(b) {}
//	int getNum()
//	{
//		return den;
//	}
//	void setNum(int a)
//	{
//		num = a;
//	}
//	void setDen(int b)
//	{
//		if (b == 0)
//			cout << "Denominator can not equal to 0";
//		else
//			den = b;
//	}
//	Fraction operator-()
//	{
//		return Fraction(-num, den);
//	}
//	Fraction operator+(const Fraction& f)
//	{
//		Fraction r;
//		r.num = this->num * f.den - this->den * f.num;
//		r.den = this->den * f.den;
//		return r;
//	}
//	Fraction operator-(const Fraction& f)
//	{
//		Fraction r;
//		r.num = this->num * f.den - this->den * f.num;
//		r.den = this->den * f.den;
//		return r;
//	}
//	Fraction operator*(const Fraction& f)
//	{
//		Fraction r;
//		r.num = this->num * f.den - this->den * f.num;
//		r.den = this->den * f.den;
//		return r;
//	}
//	Fraction operator/(const Fraction& f)
//	{
//		Fraction r;
//		r.num = this->num * f.den - this->den * f.num;
//		r.den = this->den * f.den;
//		return r;
//	}
//	bool operator<(const Fraction& d)
//	{
//		return (double)this->num / this->den < (double)d.num / d.den;
//	}
//	bool operator<=(const Fraction& d)
//	{
//		return (double)this->num / this->den <= (double)d.num / d.den;
//	}
//	bool operator>(const Fraction& d)
//	{
//		return (double)this->num / this->den > (double)d.num / d.den;
//	}
//	bool operator>=(const Fraction& d)
//	{
//		return (double)this->num / this->den >= (double)d.num / d.den;
//	}
//	bool operator==(const Fraction& d)
//	{
//		return (double)this->num / this->den == (double)d.num / d.den;
//	}
//	bool operator!=(const Fraction& d)
//	{
//		return (double)this->num / this->den != (double)d.num / d.den;
//	}
//	static friend istream& operator>>(istream& input, Fraction& D)
//	{
//		input >> D.num >> D.den;
//		return input;
//	}
//	static friend ostream& operator<<(ostream& output, const Fraction& D)
//	{
//		if (D.den == 1)output << D.num;
//		else output << D.num << "/" << D.den;
//		return output;
//	}
//	Fraction operator++()
//	{
//		return Fraction(this->num + this->den, this->den);
//	}
//	Fraction operator--()
//	{
//		return Fraction(this->num - this->den, this->den);
//	}
//	Fraction operator++(int)
//	{
//		Fraction t(num, den);
//		this->num = this->num + this->den;
//		return t;
//	}
//	void operator=(const Fraction& D)
//	{
//		num = D.num;
//		den = D.den;
//	}
//	void simplify()
//	{
//		int d = gcd(num, den);
//		num /= d;
//		den /= d;
//	}
//};
//
//int main()
//{
//	Fraction f1(1, 2), f2(3, 4), f3;
//
//	cout << "F1 = " << f1 << endl;
//	cout << "F2 = " << f2 << endl;
//
//	if (f1 > f2) cout << "F1 is greater than F2";
//	else cout << "F2 is greater than F1";
//	cout << endl;
//
//
//	f3 = f1 + f2;
//	cout << "F3 = " << f3 << endl;
//	f3.simplify();
//	cout << "Simplified F3 = " << f3 << endl;
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
//	cout << "F4 = " << f4 << endl;
//
//	return 0;
//
//}