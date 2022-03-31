#define _crt_secure_no_warings
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class Car {
public:
	Car(string con_carname, int con_seats); /*带参数的构造函数*/
	Car(Car & refcar);                       /*拷贝构造函数*/
	~Car();
private:
	string m_strcarname;
	int m_nseats;
};
Car::Car(string con_carname, int con_seats) {  /*定义带参数的构造函数*/
	cout << "car constructor with params！" << endl;
	m_strcarname = con_carname;
	m_nseats = con_seats;
}
Car::Car(Car  &con_refcar) {   /*定义拷贝构造函数*/
	cout << "car cp constructor!" << endl;
	m_strcarname = con_refcar.m_strcarname;
	m_nseats = con_refcar.m_nseats;

}
Car::~Car() {  /*定义析构函数*/
	cout << "destructor is called!" << endl;

}
int mian(){
	Car mynewcar("my first car", 4);  /*定义类对象*/
	Car myseccar(mynewcar);           /*调用拷贝构造函数定义类对象*/
	return 0;
}