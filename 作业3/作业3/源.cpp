//实现客户机(Client)类。定义字符型静态数据成员name，保存其服务器名称；
//整型静态数据成员num，记录已定义的客户机数量；定义静态函数changeName()改变服务器名称。
//完成程序，使得提供的测试程序可以运行并得到要求的结果
//主main()如下：‪‬‪‬‪‬‪‬‪‬‮‬‭‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‪‬‭‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‪‬‮‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬

/*在这里完成类代码*/

//在这里给出函数被调用进行测试的例子。例如：
//int main() {
//    Client::show();
//    Client c1;
//    Client::show();
//    Client::changeName('B');
//    Client::show();
//    return 0;
//}
#include<iostream>
#include<string>
using namespace std;
class Client {
public: 
	Client() {
		++num;
	}
	static string name;
	static int num;
	static void  changeName(string a) {
		name = a;
	}
	static void show() {
		cout << "server name:" << name << endl;
		cout << "num of clients:" << num << endl;
	}
};
string Client::name = "A";
int Client::num = 0;
int main() {
	Client::show();
	Client c1;
	Client::show();
	Client::changeName("B");
	Client::show();
	return 0;
}

