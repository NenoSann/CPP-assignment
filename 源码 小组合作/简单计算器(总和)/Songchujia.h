#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include"Zhaojingsheng.h"
using namespace std;
//================================================
//2.���������ӷ�������
void addStr(char a[], char b[], char c[], const int N, int& tag);//�������ɼӺͺ��������
char addChar(char ch1, char ch2, int& tag);//����ʵ�ּӷ�����
void leftTrim(char str[]);//ȥ���ַ���ǰ��Ŀո�


//================================================
//3.����ʮ����������ӵ�����
using namespace std;
void addStr2(char a[], char b[], char c[], const int N, int& tag);//�������ɼӺͺ��������
char addChar2(char ch1, char ch2, int& tag);//����ʵ�ּӷ�����
void leftTrim(char str[]);//ȥ���ַ���ǰ��Ŀո�
void HecToDec(char a[]);//��ÿһλ����ʮ������ASCIIֵתΪʮ������ֵ������Сд�����֡���������������͵�ʱ��Ͳ���Ҫ������ASCII�Ŀ�Խ��

//================================================
//4.��������ӵ�����
class complex
{
private:
	double real, image;//ʵ�����鲿
public:
	complex(double real = 0.0, double image = 0.0);
	void set();//���û�������ʵ�ֳ�ʼ��
	void show();
	complex operator +(complex c);//�������� operator����� (�β��б�)

};

//================================================
//5.���������������
class Date
{
private:
	int date, year, month, day;
	static int monthDays[12][2];
public:
	void set();
	int operator- (Date c);	//������������������
};

//================================================
//7.��������ӵ�����
class Set
{
private:
	int n;//����Ԫ�ظ���
	string* p = NULL;//�������ϵ�ָ��
public:
	Set() { ; }
	Set(int m);
	void set();		//��set()���������û�������ʵ�ֳ�ʼ��
	void show();
	Set operator +(Set c);	//�ӷ�������
};
