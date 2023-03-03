#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#define SElemType int//SElemType类型可根据实际情况自行设定

//*******************************顺序栈的存储结构*******************************
#define Maxsize 100
typedef struct
{
	SElemType* base;//栈底指针
	SElemType* top;//栈顶指针
	int stacksize;//栈可用的最大容量
}SqStack;

//*****************************顺序表的基本操作函数*****************************

//顺序栈的初始化
int InitStack(SqStack& S)
{
	//构造一个空栈
	S.base = new SElemType[Maxsize];//为顺序栈动态分配一个最大容量为Maxsize的数组空间
	if (!S.base)
		exit(OVERFLOW);//存储分配失败
	S.top = S.base;//栈顶指针等于栈底指针
	S.stacksize = Maxsize;
	return 0;
}

//顺序栈的入栈
bool Push(SqStack& S, SElemType e)
{
	if (S.top - S.base == Maxsize)
		return false;//栈满
	*S.top++ = e;//相当于 S.top=e; top++;
	return true;
}

//顺序栈的出栈
bool Pop(SqStack& S, SElemType& e)
{
	if (S.top == S.base)
		return false;//栈空
	e = *--S.top;//相当于 --S.top; e=*S.top;
	return true;
}

//顺序栈的取值
bool GetTop(SqStack S, SElemType& e)
{
	if (S.top == S.base)
		return false;
	e = *(S.top - 1);
	return true;
}

//*********************************顺序表的基本功能函数******************************

//1、入栈
void PushSqStack(SqStack& S)
{
	SElemType e;
	bool flag;
	cout << "请输入入栈元素：" << endl;
	cin >> e;
	flag = Push(S, e);
	if (flag)
		cout << "入栈成功!" << endl;
	else
		cout << "栈满，入栈失败！" << endl;
}

//2、出栈
void PopSqStack(SqStack& S)
{
	SElemType e;
	bool flag;
	flag = Pop(S, e);
	if (flag)
		cout << "出栈元素为：" << e << endl;
	else
		cout << "栈空，出栈失败！" << endl;
}

//3、取值
void GetTopSqStack(SqStack S)
{
	SElemType e;
	bool flag;
	flag = GetTop(S, e);
	if (flag)
		cout << "取得的栈顶元素为：" << e << endl;
	else
		cout << "栈空，取栈顶元素失败！" << endl;
}

//4、判空
void StackEmpty(SqStack S)
{
	if (S.top == S.base)
		cout << "栈空！" << endl;
	else
		cout << "栈未空！" << endl;
}

//5、求长
void StackLength(SqStack S)
{
	cout << "顺序栈的长度为：" << S.top - S.base << endl;
}

//6、清空
void ClearStack(SqStack& S)
{
	if (S.base)
		S.top = S.base;
}

//7、销毁
void DestoryStack(SqStack& S)
{
	if (S.base)
	{
		delete[]S.base;
		S.stacksize = 0;
		S.top = S.base = NULL;
	}
}

//8、打印
void PrintStack(SqStack S)
{
	SElemType* p = S.base;
	for (int i = 1; i <= S.top - S.base; i++)
		cout << "第" << i << "个元素为：" << *p++ << endl;
}

//菜单
void menu()
{
	cout << "***************************************************************************" << endl;
	cout << "***********************************1、入栈*********************************" << endl;
	cout << "***********************************2、出栈*********************************" << endl;
	cout << "***********************************3、取值*********************************" << endl;
	cout << "***********************************4、判空*********************************" << endl;
	cout << "***********************************5、求长*********************************" << endl;
	cout << "***********************************6、清空*********************************" << endl;
	cout << "***********************************7、销毁*********************************" << endl;
	cout << "***********************************8、打印*********************************" << endl;
	cout << "***********************************0、退出*********************************" << endl;
	cout << "***************************************************************************" << endl;
}

int main()
{
	SqStack S;
	int select;
	InitStack(S);
	while (1)
	{
		system("CLS");//清屏操作
		menu();
		cout << "请输入菜单序号：" << endl;
		cin >> select;
		switch (select)
		{
		case 1://入栈
			PushSqStack(S);
			system("pause");//按任意键继续
			break;
		case 2://出栈
			PopSqStack(S);
			system("pause");
			break;
		case 3://取栈顶元素
			GetTopSqStack(S);
			system("pause");
			break;
		case 4://判定栈是否为空
			StackEmpty(S);
			system("pause");
			break;
		case 5://计算栈的长度
			StackLength(S);
			system("pause");
			break;
		case 6://清空栈
			ClearStack(S);
			system("pause");
			break;
		case 7://销毁栈，销毁后会自动退出
			DestoryStack(S);
			system("pause");
			return 0;
			break;
		case 8://从栈底到栈顶遍历栈并打印
			PrintStack(S);
			system("pause");
			break;
		case 0:
			cout << "欢迎下次使用!" << endl;//退出
			system("pause");
			return 0;
			break;
		default:
			cout << "菜单序号输入有误！" << endl;
			system("pause");
			break;
		}
	}
	system("pause");
	return 0;
}