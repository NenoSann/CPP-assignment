#include<iostream>
#include<ctime>
#include<iomanip>
#include<cmath>
using namespace std;

//��������
//1 ���ܺ���ģ��
	//1.0.1 ��ӡ�˵��������Ծ�����
	void menu();
	//1.0.2 ���к��� (�Ծ�����
	void running();
	//1.1 ���ܺ���1�������������͵ļӼ��˳�  ���Ծ�����
	void func1();
	//1.2 ���ܺ���2�����ܳ���������ʾ��Χ�������������  ���γ��Σ�
	void func2();
	//1.3 ���ܺ���3������ʮ�����������  ���γ��Σ�
	void func3();
	//1.4 ���ܺ���4������������� ���γ��Σ�
	void func4();
	//1.5 ���ܺ���5����������������� ���γ��Σ�
	void func5();
	//1.6 ���ܺ���6�������������  ���Ծ�����
	void func6();
	//1.7 ���ܺ���7������������ӣ�����û���ظ����ݣ� ���γ��Σ�
	void func7();
	//1.8 ���ܺ���8���������� ���Ծ�����
	void func8();
	//1.9 ���ܺ���9������˷� ���Ծ�����
	void func9();

//2 �Ӻ���ģ��
	//2.1 ���ɾ���ĺ��� ���Ծ�����
	double** generateMatrix(int row, int col);
	//2.2 �����������ĺ��� ���Ծ�����
	double** sumMatrix(double** A, double** B, int row, int col);
	//2.3 ��ӡ����ĺ��� ���Ծ�����
	void showMatrix(double** A, int row, int col);
	//2.4 ��������� ���Ծ�����
	double** inverseMatrix(double num, int n,double** B);
	//2.5 ����������ʽ��ֵ�ĺ��� ���Ծ�����
	double numMatrix(double** A, int n);
	//2.6 �����ÿһ��ÿһ�е�ÿ��Ԫ������Ӧ������ʽ����ɰ������A*  ���Ծ�����
	double**  getMatrix(double** A, int n);
	//2.7 ����������ĳ˻����� ���Ծ�����
	double** multiplicationMatrix(double** A, double** B, int row, int col, int k);