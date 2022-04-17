//描述
//设计一个Dog类，包含name、age、sex和weight等属性以及对这些属性操作的方法。实现并测试这个类。
//根据类的封装性要求，把name、age、sex和weight声明为私有的数据成员，
//编写公有成员函数setdata()对数据进行初始化，
//GetName()、GetAge()、GetSex()和GetWeight()获取相应属性。初始化数据由用户输入。
//主函数如下：
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