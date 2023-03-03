//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//template<typename T>
//class Queue {
//private:
//	T* st;
//	int maxsize;
//	int front;
//	int real;
//public:
//	Queue(int x) {
//		maxsize = x;
//		st = new T[maxsize];
//		front = 0;
//		real = 0;
//	}
//	void Clear() {
//		front = real;
//	}
//	bool IsEmpty() {
//		if (front == real) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	bool IsFull() {
//		if ((real + 1) % maxsize == front) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	bool EnQueue(T item) {
//		if (IsFull()) {
//			cout << "满了" << endl;
//			return false;
//		}
//		else {
//			st[real] = item;
//			real = (real + 1) % maxsize;
//			return true;
//		}
//		
//	}
//	bool DeQueue(T& item) {
//		if (IsEmpty()) {
//			cout << "空，不能取数" << endl;
//			return false;
//		}
//		else {
//			item = st[front];
//			front = (front + 1) % maxsize;
//			return true;
//		}
//	}
//	bool GetFront(T&item) {
//		if (IsEmpty()) {
//			cout << "空，不能取数" << endl;
//			return false;
//		}
//		else {
//			item = st[front];
//			return true;
//		}
//	}
//	~Queue() {
//		delete[]st;
//	}
//};
//int main() {
//	Queue<int>a(5);
//	a.EnQueue(3);
//	a.EnQueue(4); 
//	a.EnQueue(5);
//	a.EnQueue(6);
//	a.EnQueue(7);
//	int c;
//	a.GetFront(c);
//	cout << "队列头出的是" << c << endl;
//	a.DeQueue(c);
//	a.GetFront(c);
//	cout << "队列头出的是" << c << endl;
//}