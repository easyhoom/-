//����
//���һ��Dog�࣬����name��age��sex��weight�������Լ�����Щ���Բ����ķ�����ʵ�ֲ���������ࡣ
//������ķ�װ��Ҫ�󣬰�name��age��sex��weight����Ϊ˽�е����ݳ�Ա��
//��д���г�Ա����setdata()�����ݽ��г�ʼ����
//GetName()��GetAge()��GetSex()��GetWeight()��ȡ��Ӧ���ԡ���ʼ���������û����롣
//���������£�
//
//int main() {
//	Dog dog;
//	dog.setdata();
//	cout << "It is my dog." << endl;
//	dog.GetName();
//	dog.GetAge();
//	dog.GetSex();
//	dog.GetWeight();
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
class Dog {
private:
	string name;
	int age;
	string sex;
	double weight;
public:
	Dog(string a, int b, string c, double d) {
		name = a;
		age = b;
		weight = d;
		if (c == "m")
			sex = "male";
		else
			sex = "female";
	}
	void GetName() {
		cout << "Its name is " << name << "." << endl;
	}
	void GetAge() {
		cout << "It is " << age << " years old." << endl;
	}
	void GetSex() {
		cout << "It is " << sex << "." << endl;
	}
	void GetWeight() {
		cout << "It is " << weight << " kg.";
	}
};
int main() {
	string q;
	int w;
	string e;
	double r;
	cin >> q >> w >> e >> r;
	Dog dog(q, w, e, r);
	cout << "It is my dog." << endl;
	dog.GetName();
	dog.GetAge();
	dog.GetSex();
	dog.GetWeight();
	return 0;
}