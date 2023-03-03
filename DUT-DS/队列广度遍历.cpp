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
//class Node {
//public:
//	int data;
//	Node* lNode;
//	Node* rNode;
//	Node(int dt=0,Node*lch=0,Node*rch=0) {
//		data = dt;
//		lNode = lch;
//		rNode = rch;
//	}
//};
//class binarytree {
//public:
//	Node* root;
//	binarytree() {
//		root = 0;
//	}
//	void createtree() {
//		Node* p1 = new Node(1);
//		Node* p2 = new Node(2);
//		Node* p3 = new Node(3);
//		Node* p4 = new Node(4);
//		Node* p5 = new Node(5);
//		Node* p6 = new Node(6);
//		Node* p7 = new Node(7);
//		root = p1;
//		p1->lNode = p2;        
//		p1->rNode = p3;
//		p2->lNode = p4;
//		p2->rNode = p5;
//		p3->lNode = p6;
//		p3->rNode = p7;
//		}
//	int levelOrder() {
//		Node* p = root;
//		Queue<Node*>s(8);
//		s.EnQueue(p);
//		Node* x = new Node(0, NULL, NULL);
//		s.EnQueue(x);
//		int count = 0;
//		while (p || s.GetFront()->data)//如果队列中只有队列头一个元素是0
//		{
//
//				cout << s.GetFront()->data << endl;
//				//打印出栈顶的元素
//				p = s.GetFront()->lNode;   
//				if (p) {
//					s.EnQueue(p);
//				}
//				p = s.GetFront()->rNode;
//				if (p) {
//					s.EnQueue(p); 
//				}
//
//				s.DeQueue();
//				if (s.GetFront()->data == 0) {
//					s.DeQueue();
//					s.EnQueue(x);
//					count++;
//				}
//		}
//		return count;
//	}
//};
//
//int main() {
//	binarytree* a=new binarytree();
//	a->createtree();
//	cout << "树高"<<a->levelOrder() << "层";
//}