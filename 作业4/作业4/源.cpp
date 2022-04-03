//幼儿园小班的小朋友开始学画画了，小明喜欢在白纸上画点点，请你帮他统计一下点的个数。
//请定义一个Point类，内有数据成员x，y表示点的坐标，还有一个静态数据成员count用于统计点的个数。
//并有若干成员函数，如构造函数、显示点的个数的函数showCount()等等。
//主函数main()如下：‪‬‪‬‪‬‪‬‪‬‮‬‭‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‪‬‭‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‪‬‮‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬
//
//int main() {
//	int x, y;
//	cin >> x >> y;
//	Point::showCount();
//	Point a(x, y);
//	cout << "Point A: " << a.getX() << "," << a.getY() << endl;
//	Point::showCount();
//	Point b(a);
//	cout << "Point B: " << b.getX() << "," << b.getY() << endl;
//	Point::showCount();
//	Point c;
//	cout << "Point C: " << c.getX() << "," << c.getY() << endl;
//	Point::showCount();
//	Point d(x);
//	cout << "Point D: " << d.getX() << "," << d.getY() << endl;
//	Point::showCount();
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
class Point {
public:
	int ox;
	int oy;
	static int count;
	Point(int x2=0, int y2=0):ox(x2),oy(y2){
		++count;
	}
	Point(const Point& p) {
		ox = p.ox;
		oy = p.oy;
		++count;
	}
	
	int getX() {

		return ox;
	}
	int getY() {
		
		return oy;
	}
	static void showCount() {
		cout << count << endl;
	}

};
int Point::count = 0;
int main() {
	int x, y;
	cin >> x >> y;
	Point::showCount();
	Point a(x, y);
	cout << "Point A: " << a.getX() << "," << a.getY() << endl;
	Point::showCount();
	Point b(a);
	cout << "Point B: " << b.getX() << "," << b.getY() << endl;
	Point::showCount();
	Point c;
	cout << "Point C: " << c.getX() << "," << c.getY() << endl;
	Point::showCount();
	Point d(x);
	cout << "Point D: " << d.getX() << "," << d.getY() << endl;
	Point::showCount();
	return 0;
}