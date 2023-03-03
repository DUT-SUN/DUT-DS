#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#define SElemType int//SElemType���Ϳɸ���ʵ����������趨

//*******************************˳��ջ�Ĵ洢�ṹ*******************************
#define Maxsize 100
typedef struct
{
	SElemType* base;//ջ��ָ��
	SElemType* top;//ջ��ָ��
	int stacksize;//ջ���õ��������
}SqStack;

//*****************************˳���Ļ�����������*****************************

//˳��ջ�ĳ�ʼ��
int InitStack(SqStack& S)
{
	//����һ����ջ
	S.base = new SElemType[Maxsize];//Ϊ˳��ջ��̬����һ���������ΪMaxsize������ռ�
	if (!S.base)
		exit(OVERFLOW);//�洢����ʧ��
	S.top = S.base;//ջ��ָ�����ջ��ָ��
	S.stacksize = Maxsize;
	return 0;
}

//˳��ջ����ջ
bool Push(SqStack& S, SElemType e)
{
	if (S.top - S.base == Maxsize)
		return false;//ջ��
	*S.top++ = e;//�൱�� S.top=e; top++;
	return true;
}

//˳��ջ�ĳ�ջ
bool Pop(SqStack& S, SElemType& e)
{
	if (S.top == S.base)
		return false;//ջ��
	e = *--S.top;//�൱�� --S.top; e=*S.top;
	return true;
}

//˳��ջ��ȡֵ
bool GetTop(SqStack S, SElemType& e)
{
	if (S.top == S.base)
		return false;
	e = *(S.top - 1);
	return true;
}

//*********************************˳���Ļ������ܺ���******************************

//1����ջ
void PushSqStack(SqStack& S)
{
	SElemType e;
	bool flag;
	cout << "��������ջԪ�أ�" << endl;
	cin >> e;
	flag = Push(S, e);
	if (flag)
		cout << "��ջ�ɹ�!" << endl;
	else
		cout << "ջ������ջʧ�ܣ�" << endl;
}

//2����ջ
void PopSqStack(SqStack& S)
{
	SElemType e;
	bool flag;
	flag = Pop(S, e);
	if (flag)
		cout << "��ջԪ��Ϊ��" << e << endl;
	else
		cout << "ջ�գ���ջʧ�ܣ�" << endl;
}

//3��ȡֵ
void GetTopSqStack(SqStack S)
{
	SElemType e;
	bool flag;
	flag = GetTop(S, e);
	if (flag)
		cout << "ȡ�õ�ջ��Ԫ��Ϊ��" << e << endl;
	else
		cout << "ջ�գ�ȡջ��Ԫ��ʧ�ܣ�" << endl;
}

//4���п�
void StackEmpty(SqStack S)
{
	if (S.top == S.base)
		cout << "ջ�գ�" << endl;
	else
		cout << "ջδ�գ�" << endl;
}

//5����
void StackLength(SqStack S)
{
	cout << "˳��ջ�ĳ���Ϊ��" << S.top - S.base << endl;
}

//6�����
void ClearStack(SqStack& S)
{
	if (S.base)
		S.top = S.base;
}

//7������
void DestoryStack(SqStack& S)
{
	if (S.base)
	{
		delete[]S.base;
		S.stacksize = 0;
		S.top = S.base = NULL;
	}
}

//8����ӡ
void PrintStack(SqStack S)
{
	SElemType* p = S.base;
	for (int i = 1; i <= S.top - S.base; i++)
		cout << "��" << i << "��Ԫ��Ϊ��" << *p++ << endl;
}

//�˵�
void menu()
{
	cout << "***************************************************************************" << endl;
	cout << "***********************************1����ջ*********************************" << endl;
	cout << "***********************************2����ջ*********************************" << endl;
	cout << "***********************************3��ȡֵ*********************************" << endl;
	cout << "***********************************4���п�*********************************" << endl;
	cout << "***********************************5����*********************************" << endl;
	cout << "***********************************6�����*********************************" << endl;
	cout << "***********************************7������*********************************" << endl;
	cout << "***********************************8����ӡ*********************************" << endl;
	cout << "***********************************0���˳�*********************************" << endl;
	cout << "***************************************************************************" << endl;
}

int main()
{
	SqStack S;
	int select;
	InitStack(S);
	while (1)
	{
		system("CLS");//��������
		menu();
		cout << "������˵���ţ�" << endl;
		cin >> select;
		switch (select)
		{
		case 1://��ջ
			PushSqStack(S);
			system("pause");//�����������
			break;
		case 2://��ջ
			PopSqStack(S);
			system("pause");
			break;
		case 3://ȡջ��Ԫ��
			GetTopSqStack(S);
			system("pause");
			break;
		case 4://�ж�ջ�Ƿ�Ϊ��
			StackEmpty(S);
			system("pause");
			break;
		case 5://����ջ�ĳ���
			StackLength(S);
			system("pause");
			break;
		case 6://���ջ
			ClearStack(S);
			system("pause");
			break;
		case 7://����ջ�����ٺ���Զ��˳�
			DestoryStack(S);
			system("pause");
			return 0;
			break;
		case 8://��ջ�׵�ջ������ջ����ӡ
			PrintStack(S);
			system("pause");
			break;
		case 0:
			cout << "��ӭ�´�ʹ��!" << endl;//�˳�
			system("pause");
			return 0;
			break;
		default:
			cout << "�˵������������" << endl;
			system("pause");
			break;
		}
	}
	system("pause");
	return 0;
}