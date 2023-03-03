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
//	void preOrderMorecur() {
//		Node* p = root;
//		MyStack<Node*>stack(7);
//		while (p || !stack.empty())
//		{
//			// ��ջ��Ϊ0��ʱ��
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
//			// ��ջ��Ϊ0��ʱ��
//			if (p) {
//
//				//!---------ԭ��ǰ���λ��
//				stack.push(p);
//				p = p->lNode;
//			}
//			else {
//				p = stack.top1();
//				cout << p->data << endl;//ֻ�ǰ�ǰ���������������Ƶ������
//				stack.pop();
//				p = p->rNode;
//			}
//		}
//	}
//	void levelOrder(Node* p) {//�ݹ����
//		if (p != NULL)
//		{
//			cout << p->data << endl;
//			levelOrder(p->lNode);
//			levelOrder(p->rNode);
//		}
//	}
//	void inOrder(Node* p) {//����ݹ����
//		if (p != NULL)
//		{
//			
//			inOrder(p->lNode);
//			cout << p->data << endl;
//			inOrder(p->rNode);
//		}
//	}
//	void PostOrder(Node* p) {//�ݹ����
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
//		//1 2 4 5 3 6 7  ǰ��
//		//4 2 5 1 6 3 7  ����
//		int j;
//		Node*rt = new Node(a[s1]-'0');
//		for ( j = s2; j <= e2; j++)//ǰ���һ���Ǹ�,������ȥ�Ҹ��ڵ�
//		{
//			if (b[j] == a[s1])
//			{
//				break;
//			}
//		}
//		//��һ��j��3
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
//	//�������������
//	    //      1
//		//  2       3
//		//4   5   6   7
//
//		
//	    //4 5 2 6 7 3 1  ����
//		//4 2 5 1 6 3 7  ����
//	//�������һ���Ǹ�
//	//ȥ������
//	Node* mktreebyIP(char* a, int s1, int e1, char* b, int s2, int e2)
//	{
//		//�������� a
//		//�������� b
//		int j;
//		Node* rt = new Node(a[e1] - '0');//��������������������ڵ�
//
//		for (j = s2; j <= e2; j++)//ǰ���һ���Ǹ�,������ȥ�Ҹ��ڵ�
//		{
//			if (b[j] == a[e1])
//			{
//				break;
//			}
//		}
//		//��һ��j��3
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
//	bool isCompleteBT(Node* root)//�ж�һ�����ǲ�����ȫ������
//	{
//		if (root == NULL) {
//			return true;
//		}
//		Queue<Node*>qcbt(10);
//		qcbt.EnQueue(root);
//		Node* front = NULL;
//		while (front = qcbt.GetFront()) { //��Ϊ�գ��Ͳ����ӽڵ�����ӽڵ�
//			qcbt.EnQueue(front->lNode);//Ϊ�յ�ʱ������Ұ�2������5ȥ��
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
//	//	cout << "����ȫ������" << endl;
//	//}
//	//else {
//	//	cout << "������ȫ������" << endl;
//	//}
//	cout << "������������:" << endl;
//	a->preOrderMorecur();
//	cout << "--------" << endl;
//	a->inOrderMorecur();
//	cout << "--------" << endl;
//	a->PostOrderMorecur();
//	cout << "ǰ�����ɵ���:" << endl;
//	char* s1 = new char[8];//ǰ
//	char* s2 = new char[8];//��
//	char* s3 = new char[8];//��
//	strcpy(s1, "1245367");
//	strcpy(s2, "4251637");
//	strcpy(s3, "4526731");
//	//cout << "����ǰ������:";
//	//cin >> s1;
//	//cout << "������������:";
//	//cin >> s2;
//	Node*x=a->mktreebyIP(s3, 0, 6, s2, 0, 6);
//	a->root = x;
//	a->PostOrderMorecur();//����ǵݹ����
//	cout << "--------" << endl;
//	a->inOrderMorecur();
//	
//
//}