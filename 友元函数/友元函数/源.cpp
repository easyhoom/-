//#include <iostream>
//using namespace std;
//
//class IntClass                                           //����IntClass��
//{
//public:
//	IntClass(int con_n, int con_m);
//	friend int add(IntClass&);                       //������ͨ����add()Ϊ��Ԫ����
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
//int add(IntClass& refnum)                             //������ͨ����add()
//{
//	//��������IntClass����Ԫ����������ֱ�ӷ���˽�г�Ա��ʵ������˽�����ݳ�Ա�����
//	return refnum.m_nN + refnum.m_nM;
//}
//
//int main()
//{
//	IntClass intnum(5, 7);                             //���������
//	cout << "add(5, 7) = " << add(intnum) << endl;//����add()����
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//class IntAddend;                                         //����IntAddend��������
//class IntAugend                                           //����IntAugend������
//{
//public:
//	IntAugend(int con_m)                               //���幹�캯��
//	{
//		m_nM = con_m;
//	}
//	void add(IntAddend& ref_addend);
//private:
//	int m_nM;
//};
//class IntAddend                                         //����IntAddend��������
//{
//public:
//	IntAddend(int con_n)
//	{
//		m_nN = con_n;
//	}
//	//����IntAugend���е�add()����Ϊ�������Ԫ����������ֱ�ӷ��ʱ���˽�г�Ա
//	friend void IntAugend::add(IntAddend&);
//private:
//	int m_nN;
//};
//void IntAugend::add(IntAddend& ref_addend)        //add()�����Ķ���
//{
//	//ֱ�ӷ���IntAddendd����ref_addend�е�˽�г�Աm_nN
//	cout << "addend: n = " << ref_addend.m_nN << ",m =  " << m_nM << endl;
//	//�Բ�ͬ���������������ݳ�Ա�������
//	cout << m_nM << " + " << ref_addend.m_nN << " = "
//		<< m_nM + ref_addend.m_nN << endl;
//}
//int main()
//{
//	IntAugend intnum1(5);                            //����IntAugend�����intnum1
//	IntAddend intnum2(3);                            //����IntAugend�����intnum1
//	intnum1.add(intnum2);                            //����add()����ʵ���������
//	system("pause");
//	return 0;
//}
#include <iostream>
using namespace std;
class Date;                                              //����Date��
class Time                                               //����Time�࣬����ʱ����
{
public:
	Time(int con_hour, int con_minute, int con_second) //���幹�캯��
	{
		m_nHour = con_hour;
		m_nMinute = con_minute;
		m_nSecond = con_second;

	}
	friend class Date;                                 //����DateΪTime����Ԫ��
private:
	int m_nHour, m_nMinute, m_nSecond;
};
class Date                                               //����Date��
{
public:
	Date(int con_year, int con_month, int con_day)//���幹�캯��
	{
		m_nYear = con_year;
		m_nMonth = con_month;
		m_nDay = con_day;
	}
	void display_date_time(Time& ref_time);        //����display_date_time()����
private:
	int m_nYear, m_nMonth, m_nDay;
};
/*
* ����display_date_time()��������ʾ�����ա�ʱ������Ϣ������DateΪTime�����Ԫ�࣬
* ��Date�еĺ���ΪTime�����Ԫ���������Է���Time���˽�г�Ա��
* ����ֱ�ӷ�����˽�г�Ա��m_nHour��m_nMinute��m_nSecond
*/
void Date::display_date_time(Time& ref_time)
{
	cout << m_nYear << "-" << m_nMonth << "-" << m_nDay << " "
		<< ref_time.m_nHour << ":" << ref_time.m_nMinute
		<< ":" << ref_time.m_nSecond << endl;
}
int main()
{
	Time time(17, 30, 20);                          //����Time����
	Date date(2015, 3, 31);                         //����Date����
	date.display_date_time(time);                  //��ʾ�����ա�ʱ������Ϣ
	system("pause");
	return 0;
}
