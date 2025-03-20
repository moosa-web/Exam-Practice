//#include <iostream>
//
//using namespace std;
//
//class Points {
//	double x, y;
//public:
//	Points() = default;
//	Points(double myX, double myY) :x(myX), y(myY) {}
//	void setX(double myX) {
//		this->x = myX;
//	}
//	void setY(double myY) {
//		this->y = myY;
//	}
//	double getX(double)const {
//		return x;
//	}
//	double getY(double) const {
//		return y;
//	}
//	void show(void) const {
//		cout << "x = " << x << ", y = " << y << endl;
//	}
//
//	Points operator+(Points p) {
//		Points newP{};
//		newP.x = this->x + p.x;
//		newP.y = this->y + p.y;
//		return newP;
//	}
//	Points operator-(Points p){
//		Points newP{};
//		newP.x = this->x - p.x;
//		newP.y = this->y - p.y;
//		return newP;
//	}
//	Points operator*(Points p) {
//		Points newP{};
//		newP.x = this->x * p.x;
//		newP.y = this->y * p.y;
//		return newP;
//	}
//	Points operator/(Points p) {
//		Points newP{};
//		newP.x = this->x / p.x;
//		newP.y = this->y / p.y;
//		return newP;
//	}
//	bool operator==(Points p) {
//		if (this->x == p.x && this->y == p.y)
//			return true;
//		return false;
//	}
//
//};
//
//int main() {
//
//	Points* p1 = new Points;
//	Points* p2 = new Points;
//	p1->setX(5);
//	p1->setY(11);
//	cout << "P1: ";
//	p1->show();
//	p2->setX(5);
//	p2->setY(11);
//	cout << "P2: ";
//	p2->show();
//
//	Points* p3 = new Points;
//	*p3 = *p1 + *p2;
//
//	cout << "P3 = P1 + P2: ";
//	p3->show();
//
//	*p3 = *p1 - *p2;
//	cout << "P3 = P1 - P2: ";
//	p3->show();
//
//	*p3 = *p1 * *p2;
//	cout << "P3 = P1 * P2: ";
//	p3->show();
//
//	*p3 = *p1 / *p2;
//	cout << "P3 = P1 / P2: ";
//	p3->show();
//
//	if (*p1 == *p2)
//		cout << "P1 is equal to P2\n";
//	else
//		cout << "P1 is not equal to P2\n";
//
//	cin.get();
//	return 0;
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////#include <iostream>
////
////using namespace std;
////
////class Base {
////	int x, y;
////public:
////	Base(int x = 0, int y = 0) :x(x), y(y) { }
////	int volume() const {
////		return x * y;
////	}
////	Base operator+(Base b) {
////		Base newB;
////		newB.x = this->x + b.x;
////		newB.y = this->y + b.y;
////		return newB;
////	}
////	Base operator-() {
////		this->x = -x;
////		this->y = -y;
////		return Base(x, y);
////	}
////	bool operator<(Base b) {
////		if (this->x < b.x)
////			return true;
////		if (this->x == b.x && this->y < b.y)
////			return true;
////		return false;
////	}
////	bool operator==(Base b) {
////		if (this->x == b.x && this->y == b.y)
////			return true;
////		return false;
////	}
////	Base operator++( int ) {
////		Base newB;
////		newB.x = this->x++;
////		newB.y = this->y++;
////		return newB;
////	}
////	Base operator--(int) {
////		Base newB;
////		newB.x = this->x--;
////		newB.y = this->y--;
////		return newB;
////	}
////	void operator=(Base b) {
////		this->x = b.x;
////		this->y = b.y;
////	}
////	void show(void)const {
////		cout << "X: " << x << " Y:" << y << endl;
////	}
////};
////
////int main() {
////
////	Base b1(2, 2), b2(2, 2);
////	Base b3;
////
////	cout << "B1 Before: ";
////	b1.show();
////
////	if (b1 == b2)
////		cout << "B1 is equal to B2\n";
////	else
////		cout << "B1 is not equal to B2\n";
////
////	b1++;
////	b1.show();
////
////	cout << "B1 After: ";
////	b1.show();
////
////	if (b1 == b2)
////		cout << "B1 is equal to B2\n";
////	else
////		cout << "B1 is not equal to B2\n";
////
////	cout << "B1 Before: ";
////	b2.show();
////
////	b2--;
////	cout << "B2 After: ";
////	b2.show();
////
////	b3 = b1;
////
////	cout << "B3 = B1: ";
////	b3.show();
////
////	cin.get();
////	return 0;
////
////}