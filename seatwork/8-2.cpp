#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
	int num;
	char name[20];
	int score[2];
};
student Input()
{
	student stud;
	cin >> stud.num >> stud.name >> stud.score[0]>>stud.score[1];
	return stud;
}
void Output(student stud)
{
	cout << setw(10) << stud.num << setw(10) << stud.name << setw(10) << stud.score[0] << setw(10) << stud.score[1] << endl;

}
void main()
{
	student studs[100];
	int n;
	cout << "输入学生人数(最多人)：";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "请输入第" << i +1 << "个同学的学号，姓名，成绩1和成绩2：";
		studs[i] = Input();
	}
	cout << setw(10) << "学号" << setw(10) << "姓名" << setw(10) << "成绩1" << setw(10) << "成绩2";
	cout << endl;
	for (int j= 0; j< n; j++)
	{
		Output(studs[j]);
		cout << endl;
	}
	system("pause");
}