#include<iostream>
#include <string>
using namespace std;
class Car {
public: 
	/*ͨ����ʼ��������ݳ�Ա���г�ʼ��*/
	Car(string con_carname, int con_seats) :m_strcarname(con_carname), m_nseats(con_seats) {
		cout << "calling car constructor,set carname and seats!" << endl;

	}
	Car(string con_carname="my new car") {/*�������Ĭ�ϲ���ֵ�Ĺ��캯��������"my new car"ɾ��������Ϊһ������ֻ�ܴ���һ��Ĭ�Ϲ��캯����
		��25�еĶ���Ķ�����Ϊ�޷��ҵ�����Ӧ�Ĺ��캯�������Գ���*/
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
	Car mycar;    /*�������һ��Ĭ�ϲ����Ĺ��캯����������*/
	Car tomcar("toms car"); /*���ô���һ�������Ĺ��캯���������󣬲�ʹ��Ĭ��ֵ*/
	mycar.disp_memmsg();
	tomcar.disp_memmsg();
	return 0;
	
}