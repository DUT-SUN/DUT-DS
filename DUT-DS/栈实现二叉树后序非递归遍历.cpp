//#define _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//template<class T>
//class MyStack {
//private:
//	int maxsize;
//	int top;
//	T* st;
//
//public:
//	MyStack(int size)
//	{
//		maxsize = size;
//		top = -1;
//		st = new T[maxsize];
//	}
//
//	void push(T ax)
//	{
//		++top;
//		st[top] = ax;
//
//	}
//
//
//	T top1()
//	{
//		return st[top];
//	}
//
//	void pop()
//	{
//		top--;
//	}
//
//	bool empty()
//	{
//		return top == -1;
//	}
//};
//
//class Node {
//public:
//	int data;
//	Node* lNode;
//	Node* rNode;
//	Node(int dt = 0, Node* lch = 0, Node* rch = 0) {
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
//	}
//	void PostOrderMorecur() {
//		Node* p = root;
//		MyStack<Node*>stack(7);
//		Node* q = new Node();
//		while (p || !stack.empty())
//		{
//			// ��ջ��Ϊ0��ʱ��
//			if (p) {
//				stack.push(p);
//				p = p->lNode;
//			}
//			else {
//				//      1
//				//  2       3
//				//4   5   6   7
//				//���ҽ��Ϊ�յ�ʱ�����ջ�����ڵ�Ԫ�ص����ӽ���ǵ�ǰ���(˵���������Ѿ���������
//				//��ô�Ϳ��Դ�ӡջ�����Ԫ����
//				p = stack.top1();//4
//				stack.pop();
//				while (1) {
//					if (p->rNode != NULL && p->rNode != q)
//					{
//						stack.push(p);
//						p = p->rNode;
//						break;
//					}
//					else 
//					{
//						cout << p->data << endl;
//						q = p;//4
//						if (stack.empty())
//						{
//							return;
//						}
//						p = stack.top1();//p���ڵ�����ջ��Ԫ�� 2
//						stack.pop();
//					}
//				}
//				
//				//�����������ľ���p->rNode!=NULL&& ջ��������������û����
//				
//			}
//		}
//	}
//};
//
//int main() {
//	binarytree* a = new binarytree();
//	a->createtree();
//	a->PostOrderMorecur();
//}