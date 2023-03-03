//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//template<class T>
//class MyStack {
//private:
//	int maxsize;
//	int top;
//	T * st;
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
//	T& top1()
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
//	void preOrderMorecur(){
//		Node* p = root;
//		MyStack<Node*>stack(7);
//		while (p || !stack.empty())
//		{
//			// 当栈顶为0的时候
//			if (p) {
//				
//					cout << p->data << endl;
//					stack.push(p);
//					p = p->lNode;
//			}
//			else {
//				p=stack.top1();
//				stack.pop();
//				p = p->rNode;                
//			}
//		}
//	}
//};
//
//int main() {
//		binarytree* a=new binarytree();
//	a->createtree();
//	a->preOrderMorecur();
//}