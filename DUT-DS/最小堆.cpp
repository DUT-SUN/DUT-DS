//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////��С�Ѿ���ÿ����㶼���Լ���������С����Ϊ��ȫ������
//
////       2
////    7    4
////  10 8  6
//
//class Minheap
//{
//private:
//	int MaxSize;
//	int currentSize;
//	int* heap;
//public:
//	Minheap(int n) {
//		MaxSize = n;
//		currentSize = 0;//���н�����
//		heap = new int[MaxSize];
//	}
//	bool insert(int x) {
//		if (currentSize == MaxSize) {
//			return false;
//		}
//		heap[currentSize] = x;
//		currentSize++;
//		shiftUp(currentSize - 1);
//	}
//	//�����ڵ�һֱ�ȣ�����ȸ��ڵ�С����������
//	void shiftUp(int i) {
//		int parent = (i - 1) / 2;
//		while (i) {
//			if (heap[i] < heap[parent])
//			{
//				Swap(i, parent);
//				i = parent;
//				parent = (i - 1) / 2;
//			}
//			else {
//				break;
//			}
//		}
//	}
//	void Swap(int x, int y) {
//		int temp = heap[x];
//		heap[x] = heap[y];
//		heap[y] = temp;
//	}
//	void print() {
//		for (int i = 0; i < currentSize; i++)
//		{
//			cout << heap[i] << ' ' << endl;
//		}
//	}
//	//��һ����ȫ������������б���С�ѵĲ���
//	//
//	void init()
//	{
//		//10�����
//		//�������ĸ��׿�ʼֱ�������
//		//ȥ���¿���û�б���С��
//
//		//��ʱcurrentSize��10Ȼ�������ڴ�(10-1)/2=4�±꿪ʼ
//
//		for (int i = 4; i >= 0; i--)
//		{
//			shiftDown(i);
//		}
//	}
//	void shiftDown(int i) {
//		while (i <= (currentSize - 1 - 1) / 2)
//		{
//			int lchild = 2 * i + 1;
//			int rchild = 2 * i + 2;
//			if (rchild == currentSize) {
//				if (heap[i] > heap[lchild])
//				{
//					Swap(i, lchild);
//					return;
//				}
//				else {
//					return;
//				}
//			}
//			//1.������ڵ�������Ӷ�С,�����������
//			if ((heap[i] < heap[lchild]) && (heap[i] < heap[rchild]))
//			{
//				return;
//			}
//			//2.������ڵ�����Ӵ󣬱�����С
//			//   3
//			//  1 4
//			else if ((heap[i] > heap[lchild]) && (heap[i] < heap[rchild]))
//			{
//				Swap(i, lchild);
//				i = lchild;
//			}
//			//3.������ڵ������С�������Ӵ�
//			else if ((heap[i] < heap[lchild]) && (heap[i] > heap[rchild]))
//			{
//				Swap(i, rchild);
//				i = rchild;
//			}
//			//4.���ڵ��2�����Ӷ���,С��Ҫ�����棬����ѡ���������и�С�ķ�����
//			else {
//				if (heap[lchild] < heap[rchild])
//				{
//					Swap(i, lchild);
//					i = lchild;
//				}
//				else {
//					Swap(i, rchild);
//					i = rchild;
//				}
//			}
//		}
//	}
//	bool randominsert(int x) {
//		if (currentSize == MaxSize) {
//			return false;
//		}
//		heap[currentSize] = x;
//		currentSize++;
//
//	}
//	bool deleteheaptop()
//	{
//		if (currentSize == 0) {
//			cout << "��������Ԫ��" << endl;
//			return false;
//		}
//		else {
//			Swap(0, currentSize-1);//�����Ѹ������Ľ��
//			
//			shiftDown(0);
//			currentSize--;
//		}
//	}
//};
//int main()
//{
//	Minheap* s = new Minheap(10);
//	//s->insert(2);
//	//s->insert(7);
//	//s->insert(4);
//	//s->insert(10);
//	//s->insert(8);
//	//s->insert(6);
//	//s->print();
//	s->randominsert(12);
//	s->randominsert(23);
//	s->randominsert(71);
//	s->randominsert(24);
//	s->randominsert(35);
//	s->randominsert(66);
//	s->randominsert(44);
//	s->randominsert(22);
//	s->randominsert(14);
//	s->randominsert(36);
//	s->print();
//	cout << "---------------------" << endl;
//	s->init();
//
//	s->print();
//	cout << "ɾ���Ѷ���:" << endl;
//	s->deleteheaptop();
//	s->print();
//}