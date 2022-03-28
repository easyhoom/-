#include<iostream>
#include<math.h>
using namespace std;
struct Complex {
	double real;
	double imag;
	void init(double r, double i){
		real = r;
		imag = i;
	}
	double abscomplex() {
		double t;
		t = real * real + imag * imag;
		return sqrt(t);

	}
};
int mian() {
	Complex A;
	A.init(1.1, 2.2);
	cout << "复数的绝对值是：" << A.abscomplex() << endl;
	return 0;
}