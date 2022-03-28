#include<iostream>
#include<cmath>
#define ¦° 3.1415926
using namespace std;
class CIRCLE {
private: double a1;
	   double a2;
	   double z;
public: void set(double a, double b, double c) {
	a1 = a;
	a2 = b;
	z = c;
}
	  double area() {
		  return ¦° * z * z;
	  }
	  double perimeter() {
		  return ¦° * 2 * z;
	  }
	  void show() {
		  cout << "(" << a1 << "," << a2 << "," << z << ")" << endl;

	  }
};
int main() {
	CIRCLE a;
	double x, y, r;
	cin >> x >> y >> r;
	a.set(x, y, r);
	a.show();
	cout << a.perimeter() << endl;
	cout << a.area() << endl;
	return 0;
}