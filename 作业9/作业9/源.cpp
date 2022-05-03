//定义屏幕矩形类RECT，边和坐标轴平行，两个对角顶点坐标是其数据成员，
//int类型，私有；成员函数有：默认构造设置所有数据成员值为0、四参数构造函数设置两个顶点坐标、拷贝构造函数
//、set()设置两个顶点坐标、area()计算面积、perimeter()计算周长、
//showinfo()显示两个顶点信息、show()显示由“* ”组成的矩形（宽是矩形的宽度，高是矩形的高度）、
//析构函数。成员函数均为公有，析构函数中显示两个顶点信息和字符串“deconstruct”。
//编写主函数，使用RECT类定义一个矩形类对象a（默认构造），
//输入并设置矩形的两个顶点，显示矩形的静态成员信息，计算并显示矩形的周长和面积，显示由“* ”组成的矩形；
//由刚输入的顶点向右平移2单位构造对象b，再由对象b构造对象c，显示矩形c的静态成员信息，计算并显示矩形c的周长和面积，
//显示由“* ”组成的矩形c。主函数如下：
//
//int main() {
//	RECT a;
//	double x1, x2, y1, y2;
//	cin >> x1 >> y1 >> x2 >> y2;
//	a.set(x1, y1, x2, y2);
//	a.showinfo();
//	cout << endl;
//	cout << a.perimeter() << endl;
//	cout << a.area() << endl;
//	a.show();
//	RECT b(x1 + 2, y1, x2 + 2, y2);
//	RECT c(b);//拷贝构造函数
//	c.showinfo();
//	cout << endl;
//	cout << c.perimeter() << endl;
//	cout << c.area() << endl;
//	c.show();
//	return 0;
//}、
#include <iostream>
using namespace std;
inline int abs(int x) {
	return x > 0 ? x : -x;
}
class RECT
{
private:
	int x1, x2, y1, y2, t1, t2;
public:
	RECT() :x1(0), x2(0), y1(0), y2(0)
	{
		t1 = abs(y2 - y1);
		t2 = abs(x2 - x1);
	}
	RECT(int tx1, int ty1, int tx2, int ty2) :x1(tx1), y1(ty1), x2(tx2), y2(ty2)
	{
		t1 = abs(y2 - y1);
		t2 = abs(x2 - x1);
	}
	RECT(RECT& r) { //拷贝构造函数
		x1 = r.x1;
		x2 = r.x2;
		y1 = r.y1;
		y2 = r.y2;
		t1 = abs(y2 - y1);
		t2 = abs(x2 - x1);
	}
	void showinfo() {
		cout << '(' << x1 << ',' << y1 << ',' << x2 << ',' << y2 << ')';
	}
	void set(int x1, int y1, int x2, int y2) {
		this->x1 = x1;
		this->x2 = x2;
		this->y1 = y1;
		this->y2 = y2;
		t1 = abs(y2 - y1);
		t2 = abs(x2 - x1);
	}
	int perimeter() {
		return 2 * (t1 + t2);
	}
	int area() {
		return t1 * t2;
	}
	void show();
	~RECT() {
		cout << '(' << x1 << ',' << y1 << ',' << x2 << ',' << y2 << ')' << "deconstruct" << endl;
	}
};
void RECT::show() {
	//t1=abs(y2-y1);
	//t2=abs(x2-x1);
	for (int i = 0;i < t1;i++)
	{
		for (int j = 0;j < t2;j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}

int main()
{
	RECT a;
	double x1, y1, x2, y2;
	{
		cin >> x1 >> y1 >> x2 >> y2;
		a.set(x1, y1, x2, y2);
		a.showinfo();cout << endl;
		cout << a.perimeter() << endl;
		cout << a.area() << endl;
		a.show();
	}
	RECT b(x1 + 2, y1, x2 + 2, y2);
	RECT c(b);
	c.showinfo();cout << endl;
	cout << c.perimeter() << endl;
	cout << c.area() << endl;
	c.show();

	return 0;
}