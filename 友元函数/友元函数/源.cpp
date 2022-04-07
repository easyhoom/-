//#include <iostream>
//using namespace std;
//
//class IntClass                                           //定义IntClass类
//{
//public:
//	IntClass(int con_n, int con_m);
//	friend int add(IntClass&);                       //声明普通函数add()为友元函数
//private:
//	int m_nN, m_nM;
//};
//
//IntClass::IntClass(int con_n, int con_m)
//{
//	m_nN = con_n;
//	m_nM = con_m;
//}
//
//int add(IntClass& refnum)                             //定义普通函数add()
//{
//	//本函数是IntClass的友元函数，可以直接访问私有成员，实现两个私有数据成员的相加
//	return refnum.m_nN + refnum.m_nM;
//}
//
//int main()
//{
//	IntClass intnum(5, 7);                             //创建类对象
//	cout << "add(5, 7) = " << add(intnum) << endl;//调用add()函数
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//class IntAddend;                                         //声明IntAddend被加数类
//class IntAugend                                           //定义IntAugend加数类
//{
//public:
//	IntAugend(int con_m)                               //定义构造函数
//	{
//		m_nM = con_m;
//	}
//	void add(IntAddend& ref_addend);
//private:
//	int m_nM;
//};
//class IntAddend                                         //定义IntAddend被加数类
//{
//public:
//	IntAddend(int con_n)
//	{
//		m_nN = con_n;
//	}
//	//声明IntAugend类中的add()函数为本类的友元函数，可以直接访问本类私有成员
//	friend void IntAugend::add(IntAddend&);
//private:
//	int m_nN;
//};
//void IntAugend::add(IntAddend& ref_addend)        //add()函数的定义
//{
//	//直接访问IntAddendd对象ref_addend中的私有成员m_nN
//	cout << "addend: n = " << ref_addend.m_nN << ",m =  " << m_nM << endl;
//	//对不同类中两个整型数据成员进行相加
//	cout << m_nM << " + " << ref_addend.m_nN << " = "
//		<< m_nM + ref_addend.m_nN << endl;
//}
//int main()
//{
//	IntAugend intnum1(5);                            //定义IntAugend类对象intnum1
//	IntAddend intnum2(3);                            //定义IntAugend类对象intnum1
//	intnum1.add(intnum2);                            //调用add()函数实现数据相加
//	system("pause");
//	return 0;
//}
#include <iostream>
using namespace std;
class Date;                                              //声明Date类
class Time                                               //定义Time类，描述时分秒
{
public:
	Time(int con_hour, int con_minute, int con_second) //定义构造函数
	{
		m_nHour = con_hour;
		m_nMinute = con_minute;
		m_nSecond = con_second;

	}
	friend class Date;                                 //声明Date为Time的友元类
private:
	int m_nHour, m_nMinute, m_nSecond;
};
class Date                                               //定义Date类
{
public:
	Date(int con_year, int con_month, int con_day)//定义构造函数
	{
		m_nYear = con_year;
		m_nMonth = con_month;
		m_nDay = con_day;
	}
	void display_date_time(Time& ref_time);        //声明display_date_time()函数
private:
	int m_nYear, m_nMonth, m_nDay;
};
/*
* 定义display_date_time()函数，显示年月日、时分秒信息。由于Date为Time类的友元类，
* 则Date中的函数为Time类的友元函数，可以访问Time类的私有成员，
* 这里直接访问了私有成员：m_nHour、m_nMinute、m_nSecond
*/
void Date::display_date_time(Time& ref_time)
{
	cout << m_nYear << "-" << m_nMonth << "-" << m_nDay << " "
		<< ref_time.m_nHour << ":" << ref_time.m_nMinute
		<< ":" << ref_time.m_nSecond << endl;
}
int main()
{
	Time time(17, 30, 20);                          //定义Time对象
	Date date(2015, 3, 31);                         //定义Date对象
	date.display_date_time(time);                  //显示年月日、时分秒信息
	system("pause");
	return 0;
}
