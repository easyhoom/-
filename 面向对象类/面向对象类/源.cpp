#include<iostream>
#include<stdio.h>
using namespace std;
class car {
private:
	string type;
	string color;
	int wheels;
public:
	void setCarInffo(string type, string color, int wheels);
	void display();
};
void car::setCarInffo(string type, string color, int wheels) {
	this->type = type;
	this->color = color;
	this->wheels = wheels;

}
void car::display() {
	cout << "�ͺţ�" << type << endl;
	cout << "��ɫ:" << color << endl;
	cout << "����:" << wheels << endl;
}
int main() {
	string type;
	string color;
	int wheels;
	cin >> type >> color >> wheels;
	car mycar;
	mycar. setCarInffo(type,color,wheels);
	mycar.display();
}