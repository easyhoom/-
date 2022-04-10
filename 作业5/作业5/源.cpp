//宿舍谁最高？
//描述
//学校选拔篮球队员，每间宿舍最多有 4 个人。现给出宿舍列表，请找出每个宿舍最高的同学。定义一个学生类 Student，有身高 height，体重 weight 等。‪‬‪‬‪‬‪‬‪‬‮‬‭‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‪‬‭‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‪‬‮‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬
//
//主函数main()如下：‪‬‪‬‪‬‪‬‪‬‮‬‭‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‪‬‭‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬‪‬‪‬‪‬‪‬‪‬‮‬‪‬‮‬‪‬‪‬‪‬‪‬‪‬‮‬‫‬‫‬
//
//int main() {
//	int n, room, height, weight;
//	string name;
//	// Input
//	cin >> n;
//	Student students[n];
//	for (int i = 0; i < n; i++) {
//		cin >> room >> name >> height >> weight;
//		students[i].setData(room, name, height, weight);
//	}
//	// Calculate & Output
//	roomSort(students, n);  // 按照学生的宿舍号从小到大排序
//	maxHeight(students, n); // 输出各个宿舍里最高的学生信息
//	return 0;
//}
#include<iostream>
#include<stdio.h>
#include<string>
#include<iomanip>
using namespace std;
class Student
{
public:
    int id;
    string name;
    int h;
    int w;
};
int main()
{
    int n, t = 1, r = 0;
    cin >> n;
    Student* s = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].id >> s[i].name >> s[i].h >> s[i].w;
    }//进行输入
    if (n > 1)
    {
        for (int w = 0; w < n - 1; w++)
        {
            for (int q = 0; q < n - 1
                ; q++)
            {
                Student temp;
                if (s[q].id > s[q + 1].id)
                {
                    temp = s[q];
                    s[q] = s[q + 1];
                    s[q + 1] = temp;
                }
            }
        }//按宿舍号进行由小到大的排序
        for (; r < n - 1; )
        {
            if (s[r].id == s[r + 1].id)
            {
                if (s[r].h > s[r + 1].h)
                {
                    Student temp1;
                    temp1 = s[r];
                    s[r] = s[r + 1];
                    s[r + 1] = temp1;

                }//进行宿舍内按个子高低进行排序
                r = r + 1;
            }
            else
            {
                cout << setw(6) << setfill('0') << s[r].id << " " << s[r].name << " " << s[r].h << " " << s[r].w << endl;
                r = r + 1;

            }
        }

        cout << setw(6) << setfill('0') << s[r].id << " " << s[r].name << " " << s[r].h << " " << s[r].w << endl;

    }
    else
    {
        cout << setw(6) << setfill('0') << s[0].id << " " << s[0].name << " " << s[0].h << " " << s[0].w << endl;
    }
    return 0;
}

		


