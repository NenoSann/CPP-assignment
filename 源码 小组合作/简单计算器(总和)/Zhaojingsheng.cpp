#include"Zhaojingsheng.h"
#include"Songchujia.h"

void menu()//��ӡ�˵�����
{
    system("cls");
    cout << "**********************************" << endl;
    cout << "**********��ӭʹ�ü�����**********" << endl;
    cout << "******                      ******" << endl;
    cout << "******   1   ������������   ******" << endl;
    cout << "******   2   ��λ�������   ******" << endl;
    cout << "******   3   ʮ�����Ƽӷ�   ******" << endl;
    cout << "******   4   �����ӷ�����   ******" << endl;
    cout << "******   5   ���ڼ�������   ******" << endl;
    cout << "******   6   ����ӷ�����   ******" << endl;
    cout << "******   7   ���ϼӷ�����   ******" << endl;
    cout << "******   8   ������������   ******" << endl;
    cout << "******   9   ����˷�����   ******" << endl;
    cout << "******   0    �˳�������    ******" << endl;
    cout << "******                      ******" << endl;
    cout << "**********************************" << endl;
    cout << "�������ʾѡ������Ҫ�Ĺ��ܣ�" << endl;
}

//���к���
void running()
{
    int p;
    while (true)//ʹ��ѭ������ڶ���������
    {
        //���ò˵�����
        menu();
        cin >> p;//����ѡ�񿪹�
        switch (p)
        {
        case 1:
            func1();//���û����������㺯��
            break;
        case 2:
            func2();//���ó�����Ӻ���
            break;
        case 3:
            func3();//����ʮ�����Ƽӷ�����
            break;
        case 4:
            func4();//���ø����ӷ����㺯��
            break;
        case 5:
            func5();//�������ڼ������㺯��
            break;
        case 6:
            func6();//���þ���������㺯��
            break;
        case 7:
            func7();//���ü���������㺯��
            break;
        case 8:
            func8();//���þ����������㺯��
            break;
        case 9:
            func9();//���þ���˷����㺯��
            break;
        default:
        {
            system("cls");//����
            cout << "�����˳�����ӭ�´�ʹ�ü�������" << endl;
            system("pause");
            return;//�˳�
        }
        break;
        }
    }
}

void func1()//�����������͵ļӼ��˳�
{
    system("cls");//����
    double a, c;
    char b;
    cout << "������һ�������ı��ʽ�� " << endl;
    cin >> a >> b >> c;
    switch (b)//ͨ���������������ж����� ��switch�������
    {
        case '+':
        {
            cout << a << "+" << c << "=" << a + c<<endl;
            break;
        }
        case '-':
        {
            cout << a << "-" << c << "=" << a - c<<endl;
            break;
        }
        case '*':
        {
            cout << a << "��" << c << "=" << a * c << endl;
            break;
        }
        case '/':
        {
            if (!c)cout << "��������Ϊ0 ��" << endl;
            else cout << a << "��" << c << "=" << a / c << endl;
            break;
        }
    }
    system("pause");
}



void func6()//����������ӣ�����Ĵ�С������ͨ����������
{
    system("cls");//����
    int m, n;
    cout << "��������������������������" << endl;
    cin >> m >> n;
    cout << "��Ե�һ��������и�ֵ��" << endl;
    double** A = generateMatrix(m, n);//���þ���ֵ����
    cout << "��Եڶ���������и�ֵ��" << endl;
    double** B = generateMatrix(m, n);//���þ���ֵ����
    cout << "���ɵľ���AΪ��" << endl;
    showMatrix(A, m, n);
    cout << "���ɵľ���BΪ��" << endl;
    showMatrix(B, m, n);
    cout << "����A�;���B��ӵĽ��Ϊ��" << endl;
    double** C = sumMatrix(A, B, m, n);
    showMatrix(C, m, n);
    delete[] A, B, C;
    system("pause");
}

void func8()//�������棨����Ϊ����
{
    system("cls");//����

    //1������һ��n�׾���
    int  n;
    cout << "���������Ľ�����" << endl;
    cin >> n;
    cout << "��Ծ�����и�ֵ��" << endl;
    double** A = generateMatrix(n,n);//���þ���ֵ����
    cout << "���ɵľ���AΪ��" << endl;
    showMatrix(A, n,n);//��ӡ�����ľ���A

    //2�����������A������ʽ��ֵ|A|����num���,���|A|=0����ʾ�����ľ�����治���ڲ��˳�
    double num =numMatrix(A, n);
    if (!num)
    {
        cout << "������治���ڣ�" << endl;
        system("pause");
        return;
    }
    //3�����������İ������A*������
    double** B= getMatrix(A, n);
    //4�����������������
    double** C= inverseMatrix(num, n, B);
    //5���������������A
    cout << "����A����Ϊ�� " << endl;
    showMatrix(C,n,n);
    //6���ͷ��ڴ�ռ�
    delete[] A,B,C;
    system("pause");
}

void func9()//����˷�
{
    system("cls");//����
    int m, k, n; 
    cout << "���������� m,k,n ��ֵ" << endl;
    cin >> m >> k >> n; 
    if (m > 0 && k > 0 && n > 0) 
    {
        cout << "���������A" << endl;
        double** A = generateMatrix(m, k); //���ɾ���A
        cout << "���������B" << endl;
        double** B = generateMatrix(k, n); //���ɾ���B
        double** C = multiplicationMatrix(A, B, m, n, k); //����A��B������ɾ���C
        cout << "���� A Ϊ��" << endl;
        showMatrix(A, m, k);//��ӡ����A
        cout << "���� B Ϊ��" << endl; 
        showMatrix(B, k, n);//��ӡ����B
        cout << "���� A �� B ��˵õ��ľ��� C Ϊ��" << endl; 
        showMatrix(C, m, n);//��ӡ����C
        //�ͷ��ڴ�ռ�
        delete[] A,B, C;
    }
    else { cout << "�����������˳���������" << endl; }
    system("pause");
}

// �������ɾ���ĺ����������������������������ؾ��� 
double** generateMatrix(int row, int col)
{
    double** max = new double* [row]();
    for (int i = 0; i < row; i++)
    {
        max[i] = new double[col]();
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)

        {
            cout << "����������е�" << i + 1 << "�е�" << j + 1 << "�е�ֵ��" << endl;
            cin >> max[i][j];
        }
    }
    system("cls");
    return max;
}

//�������ӷ�������������Ӻ�ľ��� 
double** sumMatrix(double** A, double** B, int row, int col)
{
    double** C = new double* [row]();
    for (int i = 0; i < row; i++)
    {
        C[i] = new double[col]();
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}
//�����ӡ����ĺ���
void showMatrix(double** matrix, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            //floor()��Ԫ�ؽ�������ȡ����������жϾ����е�Ԫ���Ƿ�Ϊ���������ھ��ȣ�
            if ((matrix[i][j] - floor(matrix[i][j])) > 0.000001)
            {
                //������������С�������λ
                cout << setw(6) << setiosflags(ios::fixed) << setprecision(2) << matrix[i][j];
            }
            //�������������
            else  cout << setw(6) << setiosflags(ios::fixed) << setprecision(0) << matrix[i][j];
        }
        cout << endl;
    }
}

//���ظ������������ʽ��ֵ
double numMatrix(double** A, int n)
{
    if (n == 1)
        return A[0][0];
    double num = 0;
    //��temp���A����һ��Ԫ��չ����n-1������ʽ
    double** temp = new double* [n]();
    for (int i = 0; i < n; i++)
    {
        temp[i] = new double[n]();
    }
    //����һ��չ��
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            for (k = 0; k < n - 1; k++)
            {
                //ȷ����ȥ��һ�е�k��
                temp[j][k] = A[j + 1][(k >= i) ? k + 1 : k];
            }
        }
        double t = numMatrix(temp, n - 1);
        //�б���б�ĺ�Ϊż��ʱ�������Ϊ����Ϊ����ʱΪ��
        if (i % 2 == 0)
        {
            num += A[0][i] * t;
        }
        else
        {
            num -= A[0][i] * t;
        }
    }
    return num;
}

//����ÿһ��ÿһ�е�ÿ��Ԫ������Ӧ������ʽ�����A*
double** getMatrix(double** A, int n)
{
    //�����������İ������
    double** B = new double* [n]();
    for (int i = 0; i < n; i++)
    {
        B[i] = new double[n]();
    }
    if (n == 1)
    {
        B[0][0] = A[0][0];
        return B;
    }
    int i, j, k, t;
    double** temp = new double* [n]();
    for (int i = 0; i < n; i++)
    {
        temp[i] = new double[n]();
    }
    //ȷ��������i�е�j��Ԫ��
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n - 1; k++)
            {
                for (t = 0; t < n - 1; t++)
                {
                    temp[k][t] = A[k >= i ? k + 1 : k][t >= j ? t + 1 : t];
                }
            }
            //���������껥����ʵ�־����ת��
            B[j][i] = numMatrix(temp, n - 1);

            if ((i + j) % 2 == 1)
            {
                B[j][i] = -B[j][i];
            }
        }
    }
    return B;
}
//�����������ĺ���
double** inverseMatrix(double num, int n, double** B)
{
    double** ans = new double* [n]();
    for (int i = 0; i < n; i++)
    {
        ans[i] = new double[n]();
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = B[i][j] / num;
        }
    }
    return ans;
}

//�������˷�����
double** multiplicationMatrix(double** A, double** B, int row, int col, int k)
{
    double** C =  new double* [row](); 
    for (int i = 0; i < row; i++) 
    { 
        C[i] = new double[col](); 
    }
    for (int i = 0; i < row; i++) 
    { 
        for (int j = 0; j < col; j++)
        { 
            for (int m = 0; m < k; m++) 
            { 
                C[i][j] += A[i][m] * B[m][j]; 
            }
        }
    }
    return C;
}