//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//    double x, y;
//    cin >> x;
//    if (x < 2)  y = x;
//    if (x>=2 and x < 10)  y = 2 * x + 3;
//    if (x>=10 and x < 36)  y = 3 * x - 8;
//    if (x >= 36)  y = 4 * x - 11;
//    cout << fixed << setprecision(4) << y << endl;
//    return 0;
//}
// 
// 3.
//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//using namespace std;
//int main() {
//	double x;
//	cin >> x;
//	int grade = int(x / 10);
//	switch (grade) {
//	case  10:
//		cout << "A";
//		break;
//	case 9:
//		cout << "A";
//		break;
//	case 8:
//		cout << "B";
//		break;
//	case 7:
//		cout << "C";
//		break;
//	case 6:
//
//		cout << "D";
//
//		break;
//	case 5:
//		cout << "E";
//		break;
//	case 4:
//		cout << "E";
//		break;
//	case 3:
//		cout << "E";
//		break;
//	case 2:
//		cout << "E";
//		break;
//	case 1:
//		cout << "E";
//		break;
//	case 0:
//		cout << "E";
//		break;
//	}
//
//
//
//	}
//
////}


//4.
//#include<iostream>
//
//using namespace std;
//int main() {
//    int x,y;
//    cin >> x;
//    y = x%4;
//    if(y == 0)
//    {
//        cout << "IsLeapYear";
//    }
//    else if(y>0){ 
//        cout << "NotLeapYear"; 
//    }
//        
//    return 0;
//        
//}
// 
// 
// 5.
//#include<iostream>
//using namespace std;
//double y;
//int
//#include<iostream>Ϊʲôvs�������в��У�
//using namespace std;
//inline double Add(double x, double y);
//int main(){
//    double a, b;
//    cin >> a>> b;
//    cout << Add(a, b) << endl;
//}
//inline double Add(double x, double y) {
//    return x + y;
//}
//6.
//#include<iostream>
//using namespace std;
//int main() {
//	double sum=0;
//	int n;
//	cin >> n;
//	while (n > 0) {
//		sum += 1.0 / n;
//		n -= 1;
//
//	}
//
//	cout << sum << endl;
//
//}
//#include<iostream>
//using namespace std;
//int avar;
//int main() {
//	int avar;
//	avar = 25;
//	::avar = 10;
//	cout << "local avar=" << avar << endl;
//	cout << "global avear=" << ::avar << endl;
//	return 0;
//}
//#include<iostream> /*7.ָ��ʵ����������С����ǰ*/
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int* f;
//	f = new int;
//	*f = a;
//	if (a <= b) {
//		*f = b;
//
//		cout << a << " "<< * f << endl;
//	}
//	else if (a >b) {
//		cout << b <<" " <<* f << endl;
//	}
//	delete f;
//	return 0;
//
//}
//
//#include<iostream>
//#include<stdlib.h>
//
//using namespace std;
//void statistics(double a[], int n, double* max, double* min, double* avg, double* stdev);
//int main() {
//	double a,b,c,d,e
//	int n;
//	
//	cin >> n;
//	
//	int* f = new int[n];
//	f[n+1]=-9999
//	f[]
//	
//	return 0;
//}
//#include<iostream>8.ʵ�������Ǻ����Ľ��Ƶ���
//#include<math.h>
//using namespace std;
//inline double f(double y);
//inline double m(double y);
//inline double n(double y);
//int main() {
//	double x;
//	cin >> x;
//	cout << f(x)<<" "<<m(x) <<" " << n(x) << endl;
//	return 0;
//
//}
//inline double f(double y) {
//	return(sin(y + 0.001) - sin(y - 0.001)) / 0.002;
//	 
//}
//inline double m(double y) {
//	return (cos(y + 0.001) - cos(y - 0.001)) / 0.002;
//}
//inline double n(double y) {
//	return ((sin(y + 0.001) + cos(y + 0.001) - sin(y - 0.001) - cos(y - 0.001)) / 0.002);
//}

