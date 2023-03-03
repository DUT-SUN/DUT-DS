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
//	void DeQueue() {
//		if (IsEmpty()) {
//			cout << "空，不能取数" << endl;
//
//		}
//		else {
//			front = (front + 1) % maxsize;
//		}
//	}
//	T GetFront() {
//		if (IsEmpty()) {
//			cout << "空，不能取数" << endl;
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
//int panduan(int*s,int m) {//m是窗口个数，s是窗口数组
//	int minTime = s[1];
//	int PreQueueWindow = 1;//预测排队窗口，暂定为1
//	for (int i = 2; i < m+1; i++) {
//		if (s[i] < minTime) {
//			minTime = s[i];
//			PreQueueWindow = i;
//		}
//	}
//	return PreQueueWindow;
//}
//void show(int* overView,int count) {
//	cout << "--------------------------" << endl;
//	cout << "生成数据概览:" << endl;
//	for (int i = 0; i < count; i++) {
//		switch (overView[i]) {
//		case 0:
//			cout << "客户" << i + 1 << "办理开户业务" << endl;
//			break;
//		case 1:
//			cout << "客户" << i + 1 << "办理取款业务" << endl;
//			break;
//		case 2:
//			cout << "客户" << i + 1 << "办理存款业务" << endl;
//			break;
//		case 3:
//			cout << "客户" << i + 1 << "办理销户业务" << endl;
//			break;
//		}
//	}
//}
//int main() {
//	int m;//窗口数
//	cout << "输入窗口数:";
//	cin >> m;
//	int* s = new int[m+1];//开辟窗口数组
//	
//	srand((unsigned int)time(NULL));
//	int business[4] = { 25,15,10,25 };
//	int count = rand() % 10 + 1;//生成1到10人
//	Queue<int>a(count+1);//队列
//	int* overView = new int[count];
//	int k = 0;
//	for (int i = 0; i < count; i++) {
//		int bus = rand() % 4;//生成0到3
//		a.EnQueue(business[bus]);//随机办理业务存入队列,此时1号客户就在下标0，以此类推
//	//生成随机后的人选择业务概览
//        overView[i] = bus; k++; 
//		cout << i + 1 << "号客户去" << panduan(s, m) << "窗口" << endl;
//		 
//		s[panduan(s, m)] += a.GetFront();//把业务加到那个窗口数组对应窗口元素中，意为总时间
//		a.DeQueue();//出队
//	}
//	show(overView,count);
//
//}