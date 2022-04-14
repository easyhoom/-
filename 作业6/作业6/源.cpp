//#include<iostream>方法1
//#include<string>
//using namespace std;
//class student
//{
//    string name;
//    int yu, shu, yin, zong;
//public:
//
//    student()
//    {
//        name = "0";yu = 0;shu = 0;
//        yin = 0;zong = 0;
//    };
//    void set(string name1, int yu1, int shu1, int yin1, int zong1)
//    {
//        name = name1;yu = yu1;shu = shu1;yin = yin1;zong = zong1;
//    }
//    friend student top(const student* p, int count);
//    ~student() {};
//};
//student top(const student* p, int count)
//{
//    int top1 = 0;
//    int add = 0;
//    for (int i = 0;i < count;i++)
//    {
//        add = p[i].yu + p[i].shu + p[i].yin + p[i].zong;
//        if (add > top1)
//        {
//            top1 = add;
//        }
//    }
//    cout << top1;
//    return *p;
//}
//int main()
//{
//    student St[6];
//    string name;
//    int num = 0;
//    int yu, shu, yin, zong;
//    cin >> name;
//    while (name != "0")
//    {
//        cin >> yu >> shu >> yin >> zong;
//        //student stu[num];
//    /*  St[num].name=name;
//        St[num].yu=yu;
//        St[num].shu=shu;
//        St[num].yin=yin;
//        St[num].zong=zong;*/
//        St[num].set(name, yu, shu, yin, zong);
//        num++;
//        cin >> name;
//    }
//    top(St, num);
//    return 0;
//}
//#include<iostream>方法2
//using namespace std;
//class student {
//private:
//    string name;
//    double chinese;
//    double math;
//    double english;
//    double zh;
//public:
//    void getnumber(string s, double a, double b, double c, double d) {
//        name = s;
//        chinese = a;
//        math = b;
//        english = c;
//        zh = d;
//    }
//    int getscore()const {
//        return chinese + math + english + zh;
//    }
//    friend student top(const student* p, int count) {
//        int ans = 0;
//        for (int i = 1;i < count;i++) {
//            if (p[i].getscore() > p[ans].getscore()) {
//                ans = i;
//            }
//        }
//        return p[ans];
//    }
//    friend double countscore(student a) {
//        return a.chinese + a.math + a.english + a.zh;
//    }
//};
//int main() {
//    student s[105];
//    int count = 0;
//    double a, b, c, d;
//    string name;
//    while (1) {
//        cin >> name;
//        if (name == "0") {
//            break;
//        }
//        else {
//            cin >> a >> b >> c >> d;
//            s[count++].getnumber(name, a, b, c, d);
//        }
//    }
//    cout << countscore(top(s, count)) << endl;
//    //system("pause");
//    return 0;
//}
//在公司里面，程序猿经常有一堆todolist要做，而这些todolist是产品经理分配给他们的。但是当程序员遇到不懂技术的产品狗时，就悲剧了。产品经理经常修改他们的todolist，比如：添加，减少他们的todolist。
//请设计一个类CodeMonkey ，表示程序猿，另一个类ProductDog，表示产品经理。
//CodeMonkey类有私有成员 name，todolist。
//构造函数初始化姓名和todolist，公有函数 int sizeof_todolist()， 来自ProductDog类的友元函数 add_todolist(CodeMonkey&, int), reduce_todolist(CodeMonkey&, int);
//ProductDog类有公有函数 add_todolist(CodeMonkey&, int), reduce_todolist(CodeMonkey&, int)
//Input Specification
//每个测试文件包含一组测试用例，对于每个测试用例，第一行输入 n(1 <= n <= 10 ^ 6)表示有n个程序员，接下去n行，每行为: name x 表示名为name的程序员的todolist的长度为x。 接下去一行 m(1 <= m <= 10 ^ 6)，表示产品经理分配任务的次数。 接下去m行，每行为 name opt x ， opt 为 0 表示名为name的程序猿的todolist增加x，opt为 1 表示减少x。 输入数据保证合法性。
//Output Specification
//对于每个程序员，请输出 name x，x表示最终的todolist长度。按输入顺序输出。
//Sample Input :
//3
//Jack 1
//Luck 2
//Tom 3
//4
//Tom 0 100
//Luck 0 50
//Jack 0 25
//Tom 1 50
//Sample Output :
//Jack 26
//Luck 52
//Tom 53
#include<iostream>
using namespace std;
class CodeMonkey;    //先给个类头不然定义add reduce函数会出错
class ProductDog {
public:
    void add_todolist(CodeMonkey&, int);  //Dog可用加减函数
    void reduce_todolist(CodeMonkey&, int);
};
class CodeMonkey {
private:
    string name;
    int todolist;
public:
    CodeMonkey(string s1 = "s", int a = 0) :name(s1), todolist(a) {};  //构造函数
    void set(string s1, int temp);
    int sizeof_todolist();    //返回todolist大小
    friend void ProductDog::add_todolist(CodeMonkey&, int);  //记得不要漏了ProductDog
    friend void ProductDog::reduce_todolist(CodeMonkey&, int);
};
void CodeMonkey::set(string s1, int temp) {
    name = s1;
    todolist = temp;
}

int CodeMonkey::sizeof_todolist() {
    return todolist;
}
void ProductDog::add_todolist(CodeMonkey& S1, int k) {
    S1.todolist += k;
}
void ProductDog::reduce_todolist(CodeMonkey& S1, int k) {
    S1.todolist -= k;
}
int main() {
    int n, m;     
    cin >> n;
    string s;
    string s2[n];  
    int temp;
    CodeMonkey b[n];
    ProductDog Dog;   
    for (int i = 0;i < n;i++) {
        cin >> s;
        s2[i] = s;
        cin >> temp;
        b[i].set(s, temp);
    }
    cin >> m;
    int flag;
    for (int i = 0;i < m;i++) {
        cin >> s >> flag >> temp;
        for (int j = 0;j < n;j++) {
            if (s == s2[j] && flag == 0) {
                Dog.add_todolist(b[j], temp);
            }
            else if (s == s2[j] && flag == 1) {
                Dog.reduce_todolist(b[j], temp);
            }
        }
    }
    for (int i = 0;i < n;i++) {
        cout << s2[i] << " " << b[i].sizeof_todolist() << endl;
    }
    return 0;
}


