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
//			cout << "����" << endl;
//			return false;
//		}
//		else {
//			st[real] = item;
//			real = (real + 1) % maxsize;
//			return true;
//		}
//		
//	}
//	void DeQueue() {
//		if (IsEmpty()) {
//			cout << "�գ�����ȡ��" << endl;
//			
//		}
//		else {
//			front = (front + 1) % maxsize;
//		}
//	}
//	T GetFront( ){
//		if (IsEmpty()) {
//			cout << "�գ�����ȡ��" << endl;
//			return false;
//		}
//		else {
//			return st[front];
//			
//		}
//	}
//	~Queue() {
//		delete[]st;
//	}
//};
//int main() {
//	int count = 0;
//	int k = 0;
//	int r;
//	C
//	cout << "������(a+b)^i��i�Ĵ���" << endl;
//	cin >> r;
//	count =r- 2;
//	a.EnQueue(1);
//	a.EnQueue(2);
//	a.EnQueue(1);
//	a.EnQueue(0);
//	while (count != 0) {
//		int x = a.GetFront();
//		if (x!=0) {
//			a.EnQueue( k + x);
//			//��������룬����ֵ��k��������ͷ
//			
//		}
//		else {
//			count--;
//			a.EnQueue(k + x);
//			a.EnQueue(0);
//		}
//		k = x;
//	    a.DeQueue();
//	}
//	cout <<r << "�εĶ�����ϵ��Ϊ:";
//	while (a.GetFront() != 0) {
//		cout << a.GetFront()<<' ';
//		a.DeQueue();
//	
//	}
//}