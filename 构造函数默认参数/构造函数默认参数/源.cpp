#include<iostream>
#include <string>
using namespace std;
class Car {
public: 
	/*通过初始化表对数据成员进行初始化*/
	Car(string con_carname, int con_seats) :m_strcarname(con_carname), m_nseats(con_seats) {
		cout << "calling car constructor,set carname and seats!" << endl;

	}
	Car(string con_carname="my new car") {/*定义带有默认参数值的构造函数即若将"my new car"删除，（因为一个类内只能存在一个默认构造函数）
		第25行的定义的对象因为无法找到所对应的构造函数，所以出错*/
		cout<<"calling car constructor,set carname and seats!" << endl;
		m_strcarname = con_carname;
		m_nseats = 4;
	}
	void disp_memmsg() {
		cout << "carname:" << m_strcarname << "," << "seats=" << m_nseats << endl;

	}
private:
	string m_strcarname;
	int m_nseats;
};
int mian() {
	Car mycar;    /*定义带有一个默认参数的构造函数创建对象*/
	Car tomcar("toms car"); /*调用带有一个参数的构造函数创建对象，不使用默认值*/
	mycar.disp_memmsg();
	tomcar.disp_memmsg();
	return 0;
	
}