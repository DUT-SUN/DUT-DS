//#define _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
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
//			
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
//			// 当栈顶为0的时候
//			if (p) {
//				stack.push(p);
//				p = p->lNode;
//			}
//			else {
//				//      1
//				//  2       3
//				//4   5   6   7
//				//当右结点为空的时候或者栈顶现在的元素的右子结点是当前结点(说明右子树已经遍历完了
//				//那么就可以打印栈的这个元素了
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
//						p = stack.top1();//p现在弹完后的栈顶元素 2
//						stack.pop();
//					}
//				}
//
//				//现在跳出来的就是p->rNode!=NULL&& 栈顶部的右子树还没遍历
//
//			}
//		}
//	}
//	void preOrderMorecur() {
//		Node* p = root;
//		MyStack<Node*>stack(7);
//		while (p || !stack.empty())
//		{
//			// 当栈顶为0的时候
//			if (p) {
//
//				cout << p->data << endl;
//				stack.push(p);
//				p = p->lNode;
//			}
//			else {
//				p = stack.top1();
//				stack.pop();
//				p = p->rNode;
//			}
//		}
//	}
//	void inOrderMorecur() {
//		Node* p = root;
//		MyStack<Node*>stack(7);
//		while (p || !stack.empty())
//		{
//			// 当栈顶为0的时候
//			if (p) {
//
//				//!---------原来前序的位置
//				stack.push(p);
//				p = p->lNode;
//			}
//			else {
//				p = stack.top1();
//				cout << p->data << endl;//只是把前序遍历的这条语句移到这而已
//				stack.pop();
//				p = p->rNode;
//			}
//		}
//	}
//	void levelOrder(Node* p) {//递归遍历
//		if (p != NULL)
//		{
//			cout << p->data << endl;
//			levelOrder(p->lNode);
//			levelOrder(p->rNode);
//		}
//	}
//	void inOrder(Node* p) {//中序递归遍历
//		if (p != NULL)
//		{
//			
//			inOrder(p->lNode);
//			cout << p->data << endl;
//			inOrder(p->rNode);
//		}
//	}
//	void PostOrder(Node* p) {//递归遍历
//		if (p != NULL)
//		{
//
//			PostOrder(p->lNode);
//			PostOrder(p->rNode);
//			cout << p->data << endl;
//		}
//	}
//	Node* mktreebyPI(char* a, int s1, int e1, char* b, int s2, int e2)
//	{
//		//      1
//		//  2       3
//		//4   5   6   7
//		
//		//1 2 4 5 3 6 7  前序
//		//4 2 5 1 6 3 7  中序
//		int j;
//		Node*rt = new Node(a[s1]-'0');
//		for ( j = s2; j <= e2; j++)//前序第一个是根,从中序去找根节点
//		{
//			if (b[j] == a[s1])
//			{
//				break;
//			}
//		}
//		//第一轮j是3
//		if (j - s2 != 0)
//		{
//			rt->lNode = mktreebyPI(a, s1+1, s1 + j - s2, b, s2, j - 1);
//		}
//		if (e2 - j != 0)
//		{
//			rt->rNode = mktreebyPI(a, s1 + j - s2 + 1, e1, b, j + 1, e2);
//		}
//		return rt;
//	}
//	//中序后序生成树
//	    //      1
//		//  2       3
//		//4   5   6   7
//
//		
//	    //4 5 2 6 7 3 1  后序
//		//4 2 5 1 6 3 7  中序
//	//后序最后一个是根
//	//去中序找
//	Node* mktreebyIP(char* a, int s1, int e1, char* b, int s2, int e2)
//	{
//		//后序序列 a
//		//中序序列 b
//		int j;
//		Node* rt = new Node(a[e1] - '0');//这个树（或者子树）根节点
//
//		for (j = s2; j <= e2; j++)//前序第一个是根,从中序去找根节点
//		{
//			if (b[j] == a[e1])
//			{
//				break;
//			}
//		}
//		//第一轮j是3
//		if (j - s2 != 0)
//		{
//			rt->lNode = mktreebyIP(a, s1 , s1 + j - s2-1, b, s2, j - 1);
//		}
//		if (e2 - j != 0)
//		{
//			rt->rNode = mktreebyIP(a, s1 + j - s2 , e1-1, b, j + 1, e2);
//		}
//		return rt;
//	}
//	bool isCompleteBT(Node* root)//判断一个树是不是完全二叉树
//	{
//		if (root == NULL) {
//			return true;
//		}
//		Queue<Node*>qcbt(10);
//		qcbt.EnQueue(root);
//		Node* front = NULL;
//		while (front = qcbt.GetFront()) { //不为空，就插左子节点和右子节点
//			qcbt.EnQueue(front->lNode);//为空的时候比如我把2的右子5去掉
//			qcbt.EnQueue(front->rNode);
//			qcbt.DeQueue();
//		}
//		while (!qcbt.IsEmpty()) {
//			if (qcbt.GetFront() != NULL) { 
//				return false;
//			}
//			qcbt.DeQueue();
//		}
//		return true;   
//	}
//	
//
//};
//
//int main() {
//	binarytree* a = new binarytree();
//	a->createtree();
//	//if (a->isCompleteBT(a->root)) {
//	//	cout << "是完全二叉树" << endl;
//	//}
//	//else {
//	//	cout << "不是完全二叉树" << endl;
//	//}
//	cout << "主动创建的树:" << endl;
//	a->preOrderMorecur();
//	cout << "--------" << endl;
//	a->inOrderMorecur();
//	cout << "--------" << endl;
//	a->PostOrderMorecur();
//	cout << "前中生成的树:" << endl;
//	char* s1 = new char[8];//前
//	char* s2 = new char[8];//中
//	char* s3 = new char[8];//后
//	strcpy(s1, "1245367");
//	strcpy(s2, "4251637");
//	strcpy(s3, "4526731");
//	//cout << "输入前序序列:";
//	//cin >> s1;
//	//cout << "输入中序序列:";
//	//cin >> s2;
//	Node*x=a->mktreebyIP(s3, 0, 6, s2, 0, 6);
//	a->root = x;
//	a->PostOrderMorecur();//后序非递归遍历
//	cout << "--------" << endl;
//	a->inOrderMorecur();
//	
//
//}