#include<iostream>
using namespace std;
class Oil
{
private:
	double lead;//��Ǧ����
	double price;//����
	double unlead;//��Ǧ����
	double unprice;//����
	double total;

public:
	Oil()	//���캯��
	{
		cout << "������Ǧ���͵ĵ��ۣ�";
		cin >> unprice;
		cout << "������Ǧ���͵ĵ��ۣ�";
		cin >> price;
		cout << "��������Ǧ���͵�������";
		cin >> unlead;
		cout << "��������Ǧ���͵�������";
		cin >> lead;
		total = unlead * unprice + lead * price;
	}
	void show()	{cout << "�ܼ�Ϊ:" << total << "Ԫ" << endl;}
};
int main()
{
	Oil O1;
	O1.show();
	return 0;
}

