#include<iostream>
#include<string>
using namespace std;
class Circle {
private:
	double ox;
	double oy;
	double r;
    double pi;
public:
	Circle(double x = 0, double y = 0, double z = 0) :ox(x), oy(y), r(z), pi(3.1415926) {

	}
	
	/*void set(double n,double m,double l) {
		ox = n;
		oy = m; 
		r = l;
	}*/
	void show() {
		cout << "(" << ox << "," << oy << "," << r << ")";
	}
	double area() {
		return pi * r * r;
	}
	double perimeter() {
		return 2 * pi * r;
	}
};
int main() {
	Circle a;
	double x, y, r;
	cin >> x >> y >> r;
	Circle b(x, y, r);
	a.show();
	cout << endl;
	cout << a.perimeter() << endl;
	cout << a.area() << endl;
	b.show();
	cout << endl;
	cout << b.perimeter() << endl;
	cout << b.area() << endl;
	return 0;
}