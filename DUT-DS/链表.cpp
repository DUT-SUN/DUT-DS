//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//template<class T>
//class ArrayStack:public Stack<T>
//{
//private:
//	int maxSize;
//	int top;
//	T* st;
//public:
//	ArrayStack(int size) {
//		maxSize = size;
//		top = -1;
//		st = new T[maxSize];
//	}
//	ArrayStack() {
//		top = -1;
//	}
//	~ArrayStack(){
//		delete[]st;
//}
//	void clear() {
//		top = -1;
//	}
//	bool Push(const T item) {
//		if (top == maxSize  -1) {
//			cout << "ջ��" << endl;
//			return false;
//		}
//		else {
//			st[++top] = item;
//			return true;
//		}
//	}
//	bool Pop(T& item) {
//		if (top == -1) {
//			cout << "ջΪ��" << endl;
//			return false;
//		}
//	
//
//	else {
//	item = st[top--];
//	return true;
//}
//	}
//	bool Top(T& item) {
//		if (top == -1) {
//			cout << "ջΪ�գ����ܶ�ȡջ��Ԫ��" << endl;
//			return false;
//		}
//		else {
//			item = st[top];
//			return true;
//		}
//	}
//};