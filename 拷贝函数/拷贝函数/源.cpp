#define _crt_secure_no_warings
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class Car {
public:
	Car(string con_carname, int con_seats); /*�������Ĺ��캯��*/
	Car(Car & refcar);                       /*�������캯��*/
	~Car();
private:
	string m_strcarname;
	int m_nseats;
};
Car::Car(string con_carname, int con_seats) {  /*����������Ĺ��캯��*/
	cout << "car constructor with params��" << endl;
	m_strcarname = con_carname;
	m_nseats = con_seats;
}
Car::Car(Car  &con_refcar) {   /*���忽�����캯��*/
	cout << "car cp constructor!" << endl;
	m_strcarname = con_refcar.m_strcarname;
	m_nseats = con_refcar.m_nseats;

}
Car::~Car() {  /*������������*/
	cout << "destructor is called!" << endl;

}
int mian(){
	Car mynewcar("my first car", 4);  /*���������*/
	Car myseccar(mynewcar);           /*���ÿ������캯�����������*/
	return 0;
}