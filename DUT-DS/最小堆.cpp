//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////最小堆就是每个结点都比自己的左右子小并且为完全二叉树
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
//		currentSize = 0;//堆中结点个数
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
//	//往父节点一直比，如果比父节点小，就往上走
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
//	//对一个完全二叉树数组进行变最小堆的操作
//	//
//	void init()
//	{
//		//10个结点
//		//从最后结点的父亲开始直到根结点
//		//去往下看有没有比它小的
//
//		//此时currentSize是10然后我现在从(10-1)/2=4下标开始
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
//			//1.如果父节点比两个子都小,这就是正常的
//			if ((heap[i] < heap[lchild]) && (heap[i] < heap[rchild]))
//			{
//				return;
//			}
//			//2.如果父节点比左子大，比右子小
//			//   3
//			//  1 4
//			else if ((heap[i] > heap[lchild]) && (heap[i] < heap[rchild]))
//			{
//				Swap(i, lchild);
//				i = lchild;
//			}
//			//3.如果父节点比左子小，比右子大
//			else if ((heap[i] < heap[lchild]) && (heap[i] > heap[rchild]))
//			{
//				Swap(i, rchild);
//				i = rchild;
//			}
//			//4.父节点比2个儿子都大,小的要在上面，所以选两个儿子中更小的放上面
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
//			cout << "堆内已无元素" << endl;
//			return false;
//		}
//		else {
//			Swap(0, currentSize-1);//交换堆根和最后的结点
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
//	cout << "删除堆顶后:" << endl;
//	s->deleteheaptop();
//	s->print();
//}