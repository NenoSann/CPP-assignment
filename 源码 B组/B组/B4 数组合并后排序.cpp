#include <iostream>
using namespace std;
int main()
{
	int A[] = { 123,88,86,86,33,15,7,0,-1,-3};
	int B[] = { 86,69,51,50,27,19,15,12,5,2};

	int lenA, lenB;//A��B�����鳤��
	int i = 0, j = 0, k = 0;//ѭ����Ҫ�ı���
	int	*C;//������չ��һ�£���̬�������飬AB�����������
	lenA = sizeof(A) / sizeof(A[0]);
	lenB = sizeof(B) / sizeof(B[0]);//�ܳ����Ե�λ���ɵø���
	C = new int[lenA+lenB];

	while (i <= lenA && j <= lenB)//���ѭ����A��B����Ĺ��г��ȣ�����������Խ�������
	{
		if (A[i] >= B[j])//�ȱȽ��ٷ���������
		{
			C[k] = A[i];
			i++;
		}
		else 
		{ 
			C[k] = B[j];
			j++;
		}
		k++;
	}
	while(i <= lenA)//ʣ��û�бȽϵĲ��ֿ���ֱ�ӷ���
	{
		C[k] = A[i];
		i++;
	}
	while (j <= lenB)
	{
		C[k] = B[j];
		j++;
	}
	for (i = 0; i < lenA+lenB; i++)
		cout << C[i] << endl;
	return 0;
}
