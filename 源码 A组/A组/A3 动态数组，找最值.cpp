#include<iostream>
using namespace std;

int main()
{
	int m,*p,min,max;
	cout << "����������Ԫ�صĸ�����";
	cin >> m;
	p = new int[m];
	cout << "��������������Ԫ�أ�" << endl;
	for (int i = 0; i < m; i++)
		cin >> p[i];
	min = max = p[0];
	for (int i = 0; i < m; i++)
	{
		if (p[i] > max)	max = p[i];
		if (p[i] < min) min = p[i];
	}
	delete[]p;
	p = NULL;
	cout << "�����Ϊ��" << max << endl;
	cout << "��С��Ϊ��" << min << endl;

}