//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////����ջ������㷨��һ��ʮ��������ת��Ϊ�����Ž���֮�����������������
//class MyStack {
//private:
//	int* st;
//	int MaxSize;
//	int top;
//public:
//	MyStack(int n = 10) {
//		st = new int[n];
//		MaxSize = n;
//		top = -1;
//	}
//	~MyStack()
//	{
//		delete[]st;
//	}
//	void Clear() {
//		top = -1;
//	}
//	void print();
//	bool Push(int elem);
//	bool Pop();
//	bool Top(int& elem);
//	bool IsEmpty();
//	bool IsFull();
//};
//bool MyStack::IsEmpty() {
//	if (MyStack::top == -1) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//bool MyStack::IsFull()
//{
//	if (top == MaxSize - 1) {
//		cout << "ջ����" << endl;
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//bool MyStack::Push(int elem) {
//	if (IsFull()) {
//		return false;
//	}
//	else {
//		st[++top] = elem;
//		return true;
//	}
//}
//bool  MyStack::Pop() {
//	if (IsEmpty()) {
//		return false;
//	}
//	else {
//	cout<<st[top--]<<' ';
//		return true;
//	}
//}
//
//bool  MyStack::Top(int& elem) {
//	if (IsEmpty()) {
//		return false;
//	}
//	else {
//		elem = st[top];
//		return true;
//	}
//}
//void MyStack::print() {
//	while (!IsEmpty()) {
//		int x;
//		//Pop();
//	}
//}
//int main() {
//	MyStack stack(10);
//	int aa, bb, c;
//	cout << "������һ���Ǹ�������һ����Ҫת���Ľ���" << endl;
//	cin >> aa >> bb;
//	c = aa % bb;
//	stack.Push(c);
//	while (aa / bb) {
//		aa = aa / bb;
//		int d = aa % bb;
//		stack.Push(d);
//	}
//	stack.print();
//}