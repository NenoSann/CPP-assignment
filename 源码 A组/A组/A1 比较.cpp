#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int k,n,sum,mul;
	for (n = k = 10; n < 100; n++,k++)
	{
		mul = (n/10) * (n % 10); //����ȡʮλ������ȡ��λ
		sum = (n/10) + (n % 10); 
		if (mul > sum)
			cout << setw(3) << n;
		if (k % 5 == 0)
			cout << setw(3) << " " << endl;//������ĵط�ռλ������Ч��
	}
}
