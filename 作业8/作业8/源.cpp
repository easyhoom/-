//����
//��Ʋ�����һ����ΪTrapezium�������࣬������Ϊ���ε��ĸ���������ꡣ�������ϱߺ��±߾���x��ƽ�С�
//������ķ�װ��Ҫ���������������8��˽�е����ͱ�����ʾ4���������ֵ��
//������Ա����initial(int, int, int, int, int, int, int, int)��ʼ�����ݳ�Ա��
//����GetPosition(int&, int&, int&, int&, int&, int&, int&, int&)��ȡ����ֵ������Area()���������
//
//
//���������£�
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