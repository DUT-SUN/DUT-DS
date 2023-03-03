//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class MyStack {
//private:
//	char* st;
//	int MaxSize;
//	int top;
//public:
//	MyStack(int n = 10) {
//		st = new char[n];
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
//	bool Push(char elem);
//	bool Pop(char& elem);
//	bool Top(char& elem);
//	bool IsEmpty();
//	bool IsFull();
//};
//bool MyStack::IsEmpty() {
//	if (MyStack::top == -1) {
//		cout << "栈为空" << endl;
//		return true;
//	}
//	else {
//		cout << "栈不为空" << endl;
//		return false;
//	}
//}
//bool MyStack::IsFull()
//{
//	if (top == MaxSize - 1) {
//		cout << "栈满了" << endl;
//		return true;
//	}
//	else {
//		cout << "栈没满" << endl;
//		return false;
//	}
//}
//bool MyStack::Push(char elem) {
//	if (IsFull()) {
//		return false;
//	}
//	else {
//		st[++top] = elem;
//		cout << "栈顶推入" << elem << endl;
//		return true;
//	}
//}
//bool  MyStack::Pop(char& elem) {
//	if (IsEmpty()) {
//		return false;
//	}
//	else {
//		elem = st[top--];
//		cout << "栈顶弹出" << elem << endl ;
//		return true;
//	}
//}
//
//bool  MyStack::Top(char& elem) {
//	if (IsEmpty()) {
//		return false;
//	}
//	else {
//		elem = st[top];
//		return true;
//	}
//}
//int main() {
//	MyStack stack(5);
//	stack.IsEmpty();
//	stack.Push('a');
//	stack.Push('b');
//	stack.Push('b');
//	stack.Push('d');
//	stack.Push('e');
//	stack.IsFull();
//	char x;
//	stack.Top(x);
//	cout << "x确认赋值为" << x<< endl;
//	stack.Pop(x);
//	stack.IsFull();
//}