
#include<iostream>
#include<cmath>
using namespace std;
class POINT
{
private:
	double zb1, zb2;
public:
	void set(double a, double b)
	{
		zb1 = a;
		zb2 = b;
	}
	double distance(POINT b)
	{
		return sqrt((zb1 - b.zb1) * (zb1 - b.zb1) + (zb2 - b.zb2) * (zb2 - b.zb2));
	}
	void show()
	{
		cout << "已设置点坐标为(" << zb1 << "," << zb2 << " )" << endl;
	}
}a, b;
int main()
{
	double x, y;
	cin >> x >> y;
	a.set(x, y);
	cin >> x >> y;
	b.set(x, y);
	a.show();
	cout << endl;
	b.show();
	cout << endl;
	cout << a.distance(b) << endl;
	return 0;
}





