#include"Songchujia.h"
#include"Zhaojingsheng.h"
//======================================================================
//���ܺ�����
//======================================================================
//2.���ܳ���������ʾ��Χ������������ӵĹ��ܺ���
void func2()
{
	system("cls");//����
	int tag = 0;
	const int N = 20;
	char a[N+1] = { 0 }, b[N + 1] = { 0 }, c[N + 2] = { 0 };//Ԥ�����������ͽ�λ
	cout << "a = ";
	cin.sync();
	cin.getline(a,N + 1);
	cin.getline(a, N+1);
	cout << "b = ";
	cin.getline(b, N + 1);
	addStr(a, b, c, N, tag);
	cout << "������Ϊ��" << c << endl;
	system("pause");
}

//3.����ʮ����������ӵĹ��ܺ���
void func3()
{
	system("cls");//����
	int tag = 0;
	const int N = 20;
	char a[N + 1] = { 0 }, b[N + 1] = { 0 }, c[N + 2] = { 0 };//Ԥ�����������ͽ�λ
	cout << "a = ";
	cin.sync();
	cin.getline(a, N + 1);
	cin.getline(a, N + 1);
	HecToDec(a);//ת�����������ƣ�����Ӻ�����
	cout << "b = ";
	cin.getline(b, N + 1);
	HecToDec(b);
	addStr2(a, b, c, N, tag);
	cout << "ʮ������������Ϊ��" << c << endl;
	system("pause");
}

//4.����������ӵĹ��ܺ���
void func4()
{
	system("cls");//����
	complex c1, c2, c3;
	c1.set();
	c2.set();
	c3 = c1 + c2;
	c3.show();
	system("pause");
}

//5.����������������Ĺ��ܺ���
void func5()
{
	system("cls");//����
	cout << "=========================" << endl;
	Date date1, date2;
	date1.set(); date2.set();
	int c = date1 - date2;
	cout << "�����ڼ���" << c << "��" << endl;
	cout << "=========================" << endl;
	system("pause");
}

//7.����������ӣ�����û���ظ����ݣ��Ĺ��ܺ���
void func7()
{
	system("cls");//����
	Set a, b, c;
	a.set();
	cout << "=========================" << endl;
	b.set();
	cout << "=========================" << endl;
	c = a + b;
	c.show();
	cout << endl;
	system("pause");
}





//================================================================
// �Ӻ�����
//================================================================
//2.���������ӷ����Ӻ���
void addStr(char a[], char b[], char c[], const int N, int& tag)
{
	int i, j, k;
	memset(c, ' ', N + 2);
	i = strlen(a) - 1;//strlen() - 1�������һ����λ�������±�
	j = strlen(b) - 1;
	k = N;
	while (i >= 0 && j >= 0)
		c[k--] = addChar(a[i--], b[j--], tag);//�ӵ�λ����λ�������
	while (i >= 0)
		c[k--] = addChar(a[i--], '0', tag);//ASCII�����㣬'0'����
	while (j >= 0)
		c[k--] = addChar(b[j--], '0', tag);
	if (tag == 1)//���λ��������λ
		c[k] = '1';
	c[N + 1] = '\0';
	leftTrim(c);
}

char addChar(char ch1, char ch2, int& tag)
{
	char ch;
	ch = (ch1 - '0' + ch2 - '0') + tag;//��ASCII�ַ�����
	if (ch >= 10)
	{
		tag = 1;
		return (ch - 10 + '0');//returnʱת�ɶ�ӦASCII��
	}
	else
	{
		tag = 0;
		return(ch + '0');
	}
}

void leftTrim(char str[])
{
	int i;
	for (i = 0; str[i] == ' '; i++)
		strcpy(str, str + i);//��������Ϊ��ַ��������
}
//================================================================
//3.ʮ���������ӷ����Ӻ���
void addStr2(char a[], char b[], char c[], const int N, int& tag)
{
	int i, j, k;
	memset(c, ' ', N + 2);
	i = strlen(a) - 1;//strlen() - 1�������һ����λ�������±�
	j = strlen(b) - 1;
	k = N;
	while (i >= 0 && j >= 0)
		c[k--] = addChar2(a[i--], b[j--], tag);//�ӵ�λ����λ�������
	while (i >= 0)
		c[k--] = addChar2(a[i--], 0, tag);//0���룬�����볬�������ǵ��ⲻһ������Ϊ�Ѿ�����������ת����������0������0����
	while (j >= 0)
		c[k--] = addChar2(b[j--], 0, tag);
	if (tag == 1)//���λ��������λ
		c[k] = '1';
	c[N + 1] = '\0';
	leftTrim(c);
}

char addChar2(char ch1, char ch2, int& tag)
{
	char ch, temp;
	ch = (ch1 + ch2) + tag;
	temp = ch % 16;
	if (ch >= 16)
	{
		tag = 1;
		if (temp > 9)
			temp += ('A' - 10);
		else temp += '0';
	}
	else
	{
		tag = 0;
		if (temp > 9)
			temp += ('A' - 10);
		else temp += '0';
	}
	return temp;
}

void HecToDec(char a[])//��ÿһλ����ʮ������ASCIIֵתΪʮ����<��ֵ>������Сд�����֡�����������
{
	for (int i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] >= 'A') && (a[i] <= 'F'))
		{
			a[i] = a[i] - 'A' + 10;
		}
		else if ((a[i] >= 'a') && (a[i] <= 'f'))
		{
			a[i] = a[i] - 'a' + 10;//��͵�ʱ��Ͳ���Ҫ���Ǵ�СдASCII�Ŀ�Խ���⣬ȫ��������ֵ
		}
		else if ((a[i] >= '0') && (a[i] <= '9'))
		{
			a[i] = a[i] - '0';
		}
	}
}

//================================================================
//4.��������ӵ��Ӻ���
complex::complex(double i, double j)
{
	real = i;
	image = j;
}

void complex::set()
{
	cout << "������ʵ����" << endl;
	cin >> real;
	cout << "�������鲿��" << endl;
	cin >> image;
	cout << "���븴����" << real << 'i' << " + " << image << 'j' << " �ɹ���" << endl;
}

void complex::show()
{
	cout << "�ø���Ϊ��" << real << 'i' << " + " << image << 'j' << endl;
}

complex complex::operator + (complex c)
{
	complex temp;
	temp.real = real + c.real;
	temp.image = image + c.image;
	cout << "�������Ӻͳɹ���" << endl;
	return temp;
}

//====================================================================
//5.������������Ӻ���
bool isLeap(int year)
{
	return (year % 4 == 0) || (year % 100 == 0 && year % 400 == 0);
}
int Date::monthDays[12][2] =
{ {31,31},{28,29},{31,31},{30,30},{31,31},
{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},
{31,31} };
void Date::set()
{
	cout << "��������ݣ�" << endl;
	cin >> year;
	cout << "�������·ݣ�" << endl;
	cin >> month;
	cout << "�������պţ�" << endl;
	cin >> day;
	cout << "=========================" << endl;

}
int Date::operator-(Date c)
{
	int number = 0;
	if (year > c.year || month > c.month || day > c.day) //ȷ����������Ϊ�������
	{
		swap(year, c.year);
		swap(month, c.month);
		swap(day, c.day);
	}
	while (year < c.year || month < c.month || day < c.day) {
		day++;
		//��һ�����Ӧ���£�����ܻᷢ���仯
		if (day == monthDays[month - 1][isLeap(year)] + 1) {
			month++;//��ǰ�ų�����ǰ������������·ݼ�1���ű�����µ�1��
			day = 1;
		}
		if (month == 13) {
			year++;//����һ������һ�� ����ݼ�1,�·ݱ�������1��
			month = 1;
		}
		number++;
	}
	return number;
}

//======================================================================
//7.��������ӵ��Ӻ���
bool compare(string a[], int n, string x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x) return 0;
	return 1;
}
void Set::set()
{
	cout << "�����뼯�ϵ�Ԫ�ظ�����";
	cin >> n;
	cout << "�����뼯��Ԫ�أ�" << endl;
	p = new string[n];//
	for (int i = 0; i < n; i++)//
	{
		cin >> p[i];
	}
	cout << "���ϴ����ɹ���" << endl;
}

Set::Set(int m)
{
	n = m;
	p = new string[m];
}

void Set::show()
{
	cout << "�ü���Ϊ��" << endl;
	for (int i = 0; i < n; i++)
		cout << p[i] << '\t';
}

Set Set::operator + (Set c)
{
	int m = n + c.n;
	int same = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < c.n; j++)
		{
			if (c.p[j] == p[i])
				same++;//�ظ�Ԫ�ظ���
		}

	}
	Set temp(m - same);
	int i = 0;
	int j = 0;
	for (; i < (m - same); i++, j++)
	{
		if (i < n)
		{
			temp.p[i] = p[i];
		}
		else
		{
			if (compare(p, n, c.p[j - n]))//�ظ�Ԫ�ز������¼���
				temp.p[i] = c.p[j - n];
			else i--;
		}
	}
	cout << "�����ϼӺͳɹ���" << endl;
	return temp;
}
