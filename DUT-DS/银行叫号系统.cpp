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
//	T GetFront() {
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
//int panduan(int*s,int m) {//m�Ǵ��ڸ�����s�Ǵ�������
//	int minTime = s[1];
//	int PreQueueWindow = 1;//Ԥ���ŶӴ��ڣ��ݶ�Ϊ1
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
//	cout << "�������ݸ���:" << endl;
//	for (int i = 0; i < count; i++) {
//		switch (overView[i]) {
//		case 0:
//			cout << "�ͻ�" << i + 1 << "������ҵ��" << endl;
//			break;
//		case 1:
//			cout << "�ͻ�" << i + 1 << "����ȡ��ҵ��" << endl;
//			break;
//		case 2:
//			cout << "�ͻ�" << i + 1 << "������ҵ��" << endl;
//			break;
//		case 3:
//			cout << "�ͻ�" << i + 1 << "��������ҵ��" << endl;
//			break;
//		}
//	}
//}
//int main() {
//	int m;//������
//	cout << "���봰����:";
//	cin >> m;
//	int* s = new int[m+1];//���ٴ�������
//	
//	srand((unsigned int)time(NULL));
//	int business[4] = { 25,15,10,25 };
//	int count = rand() % 10 + 1;//����1��10��
//	Queue<int>a(count+1);//����
//	int* overView = new int[count];
//	int k = 0;
//	for (int i = 0; i < count; i++) {
//		int bus = rand() % 4;//����0��3
//		a.EnQueue(business[bus]);//�������ҵ��������,��ʱ1�ſͻ������±�0���Դ�����
//	//������������ѡ��ҵ�����
//        overView[i] = bus; k++; 
//		cout << i + 1 << "�ſͻ�ȥ" << panduan(s, m) << "����" << endl;
//		 
//		s[panduan(s, m)] += a.GetFront();//��ҵ��ӵ��Ǹ����������Ӧ����Ԫ���У���Ϊ��ʱ��
//		a.DeQueue();//����
//	}
//	show(overView,count);
//
//}