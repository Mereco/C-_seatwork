#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
	int num;
	char name[20];
	int score[2];
};
void Input(student &stud)
{
	cin >> stud.num >> stud.name >> stud.score[0] >> stud.score[1];
}
void Output(student &stud)
{
	cout << setw(10) << stud.num << setw(10) << stud.name << setw(10) << stud.score[0] << setw(10) << stud.score[1] << endl;
}
void Student_average(student &stud)
{
	double aver = 0;
	for (int i = 0;i < 2;i++)
	{
		aver += stud.score[i];
	}
	cout << aver / 2 << endl;
}
void Class_average(student stud[], int n)
{
	for (int j = 0;j < 2;j++)
	{
		double aver = 0;
		for (int i = 0;i < n;i++)
		{
			aver += stud[i].score[j];
		}
		cout <<"ȫ���"<<j+1<<"�ſε�ƽ���ɼ�Ϊ��"<< aver / n << endl;
	}
	
}
void main()
{
	student studs[100];
	int n;
	cout << "����ѧ������(�����)��";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "�������" << i + 1 << "��ͬѧ��ѧ�ţ��������ɼ�1�ͳɼ�2��";
		Input(studs[i]);
	}
	cout << setw(10) << "ѧ��" << setw(10) << "����" << setw(10) << "�ɼ�1" << setw(10) << "�ɼ�2";
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		Output(studs[j]);
		cout << endl;
	}
	for (int i = 0;i < n;i++)
	{
		cout << "��" << i + 1 << "λͬѧ��ƽ���ɼ�Ϊ��";
		Student_average(studs[i]);
	}
	cout << endl;
	Class_average(studs, n);
	system("pause");
}