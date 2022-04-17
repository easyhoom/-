//描述
//设计并测试一个名为Trapezium的梯形类，其属性为梯形的四个顶点的坐标。该梯形上边和下边均和x轴平行。
//根据类的封装性要求，在类的声明中用8个私有的整型变量表示4个点的坐标值，
//声明成员函数initial(int, int, int, int, int, int, int, int)初始化数据成员，
//函数GetPosition(int&, int&, int&, int&, int&, int&, int&, int&)获取坐标值，函数Area()计算面积。
//
//
//主函数如下：
//int main() {
//	int a, b, c, d, e, f, g, h;
//	cin >> a >> b >> c >> d >> e >> f >> g >> h;
//	Trapezium t;
//	t.initial(a, b, c, d, e, f, g, h);
//	cout << t.Area() << endl;
//	return 0;
//}
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Trapezium {
private:
	int x1, x2, x3, x4;
	int y1, y2, y3, y4;
public:
	void initial(int, int, int, int, int, int, int, int);
	double Area();
};
void Trapezium::initial(int a, int b, int c, int d, int e, int f, int g, int h) {
	x1 = a;
	y1 = b;
	x2 = c;
	y2 = d;
	x3 = e;
	y3 = f;
	x4 = g;
	y4 = h;
}
double Trapezium::Area() {
	return abs(((x2 - x1) + (x4 - x3)) * (y4 - y2) / 2);
}
int main() {
	int a, b, c, d, e, f, g, h;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	Trapezium t;
	t.initial(a, b, c, d, e, f, g, h);
	cout << t.Area() << endl;
	return 0;
}