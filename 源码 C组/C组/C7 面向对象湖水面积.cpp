#include<iostream>
#include <time.h>  
#include<iomanip>
using namespace std;
class Lake 
{
private:
	int length, width, ** lake;//���ȡ���ȡ�����ָ�����ں�ˮ��������ɺͷ���
	double	size = 0, depth = 0, per; //�����������ȡ���λ���
public:
	Lake();//���캯�������ú�ˮ��������
	void show();//�����������Ȳ���ʽ����ӡ
};

Lake::Lake()
{
	srand((unsigned)time(NULL));//�������������
	int i, j;//ѭ������
	cout << "�������ˮ���ȣ�";
	cin >> length;
	cout << "�������ˮ��ȣ�";
	cin >> width;
	cout << "�����뵥λ�����";
	cin >> per;

	lake = new int* [length];//���ɶ�ָ̬������
	for (i = 0; i <length; i++)	lake[i] = new int[width];//��ָ���������ɶ�̬��ά����

	for (i = 0; i < length; i++)
		for (j = 0; j < width; j++)
			lake[i][j] = 0;//ˮ����ȫ������

	for (int i = 1; i < length - 1; i++)
		for (int j = 1; j < width - 1; j++)
			lake[i][j] = (rand() % 9);//����ˮ����ܳ���0

	for (int i = 1; i < length - 1; i++)
		for (int j = 1; j < width - 1; j++)
			if (lake[i][j] == 0 && lake[i - 1][j] != 0 && lake[i + 1][j] != 0 && lake[i][j - 1] != 0 && lake[i][j + 1] != 0)
				lake[i][j] = (rand() % 9) + 1;//�����м�ͻأ�س���һ�����Ϊ0�ķ�������

}
void Lake::show()
{
	int sum = 0;//sumΪ������
	cout << "��ˮ��Ⱦ���Ϊ��" << endl;
	for (int i = 0; i < length; i++)//��ʽ�����
	{
		for (int j = 0; j < width; j++)
		{
			if (lake[i][j] == 0)
				cout << "��";//��ӡ����
			else
			{
				cout << setw(2) << lake[i][j];//�����������ų�������½�ز���				
				sum += 1;//�ۼ�ˮ�淽����
				depth += lake[i][j];
			}
		}
		cout << endl;
	}
	size = sum * per;	//��ˮ���漶���ڷ��������Ե�λ���
	depth /= sum;	//ƽ����ȵ�������Ȱ���������ƽ��
	cout << "�����Ϊ��" << size << "ƽ����" << endl;
	cout << "ƽ��ˮ�" << depth << "��" << endl;
}

int main()
{
	Lake lake1;
	lake1.show();
}

