#include<iostream>
using namespace std;
class rectangle
{
private:
	double width;
	double length;
	double size;

public://�������������ⶨ��
	rectangle(double w, double l);
	double show();
	double AddArea(rectangle a);
};

rectangle::rectangle(double w, double l)//���캯��
{
	width = w;
	length = l;
	size = width * length;
}
double rectangle::show() { return size; }//��ȡ���
double rectangle::AddArea(rectangle a) {return (size + a.show());}//����Ӻ�

int main()
{
	double m, n, p, q;
	cout << "���������a�ĳ���" << endl;
	cin >> m >> n;
	cout << "���������b�ĳ���" << endl;
	cin >> p >> q;
	cout << "======================" << endl;
	rectangle a(m,n);
	cout << "����a�����Ϊ��" << a.show() << endl;
	rectangle b(p,q);
	cout << "����b�����Ϊ��" << b.show() << endl;
	cout << "a��b�����Ϊ��" << a.AddArea(b) << endl;
	return 0;
}
