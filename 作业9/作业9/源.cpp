//������Ļ������RECT���ߺ�������ƽ�У������ԽǶ��������������ݳ�Ա��
//int���ͣ�˽�У���Ա�����У�Ĭ�Ϲ��������������ݳ�ԱֵΪ0���Ĳ������캯�����������������ꡢ�������캯��
//��set()���������������ꡢarea()���������perimeter()�����ܳ���
//showinfo()��ʾ����������Ϣ��show()��ʾ�ɡ�* ����ɵľ��Σ����Ǿ��εĿ�ȣ����Ǿ��εĸ߶ȣ���
//������������Ա������Ϊ���У�������������ʾ����������Ϣ���ַ�����deconstruct����
//��д��������ʹ��RECT�ඨ��һ�����������a��Ĭ�Ϲ��죩��
//���벢���þ��ε��������㣬��ʾ���εľ�̬��Ա��Ϣ�����㲢��ʾ���ε��ܳ����������ʾ�ɡ�* ����ɵľ��Σ�
//�ɸ�����Ķ�������ƽ��2��λ�������b�����ɶ���b�������c����ʾ����c�ľ�̬��Ա��Ϣ�����㲢��ʾ����c���ܳ��������
//��ʾ�ɡ�* ����ɵľ���c�����������£�
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
//	RECT c(b);//�������캯��
//	c.showinfo();
//	cout << endl;
//	cout << c.perimeter() << endl;
//	cout << c.area() << endl;
//	c.show();
//	return 0;
//}��
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
	RECT(RECT& r) { //�������캯��
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