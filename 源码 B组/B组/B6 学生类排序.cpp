	#include<iostream>
using namespace std;
class Student
{
public: int id, english, computer, total;
	  void getscore()
	  {
		  cout << "����ѧ�ţ�"; cin >> id;
		  cout << "����Ӣ��ɼ��� "; cin >> english;
		  cout << "���������ɼ���"; cin >> computer;
		  cout << "=========================================" << endl;
		  total = english + computer;
	  }
	  void show()
	  {
		  cout << "ѧ��" << id << " Ӣ��=" << english << " �����=" << computer << " �ܷ�=" << total << endl << endl;
	  }
};
int main()
{
	int n, i, j;
	Student** p;//����ѧ������������ָ��������Ҫ��̬����
	Student* temp;//Student��Ҫ��̬����
	cout << "��������Ҫ�����ѧ��������";
	cin >> n;
	cout << "=========================================" << endl;
	p = new Student * [n];//��̬����ָ�����飬����Ԫ��Ϊ���ָ��

	for (j = 0; j < n; j++)
	{
		p[j] = new Student;

		cout << "ѧ�� " << j + 1 << endl;
		p[j]->getscore();//��ָ����ó�Ա�������г�ʼ��
	}

	for (j = 0; j < n - 1; j++)//ð������
		for (i = j + 1; i < n; i++)
			if (p[i]->total > p[j]->total)//��ָ��ȡ���ݳ�Ա
			{
				temp = p[j]; p[j] = p[i]; p[i] = temp;//����ָ��ʵ�����򣬺�����Ҫ��ָ��������
			}
	cout << "���������£�" << endl;
	for (i = 0; i < n; i++)
		p[i]->show();
}