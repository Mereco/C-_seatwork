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
	cout << "����ѧ������(�����)��";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "�������" << i +1 << "��ͬѧ��ѧ�ţ��������ɼ�1�ͳɼ�2��";
		studs[i] = Input();
	}
	cout << setw(10) << "ѧ��" << setw(10) << "����" << setw(10) << "�ɼ�1" << setw(10) << "�ɼ�2";
	cout << endl;
	for (int j= 0; j< n; j++)
	{
		Output(studs[j]);
		cout << endl;
	}
	system("pause");
}