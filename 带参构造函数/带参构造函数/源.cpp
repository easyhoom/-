#include<iostream>
#include<string>
using namespace std;
class Car {
public:
	Car(string con_carname, int con_seats) {
		cout << "callin car constructor,set cameame,seats!" << endl;
		m_strcarname = con_carname;
		m_nseats = con_seats;

	}
	Car(string con_carname) {
		cout << "calling car constructor,set carname!" << endl;
		m_strcarname = con_carname;
	}
	void disp_memmsg(){
		cout << "carname;" << m_strcarname << "," << "seats=" << m_nseats << endl;
		}
private:
	string m_strcarname;
	int m_nseats;
};
int main() {
	Car mycar("my new car", 4);/*�����˺���������*/
	Car tomcar("tom car");/*��Ϊû�����ָ���ֵ��������ʾ��ֵΪ�����*/
	mycar.disp_memmsg();
	tomcar.disp_memmsg();
	return 0;

}