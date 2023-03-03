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
//class MyStack {
//private:
//	int* st;
//	int MaxSize;
//	int top;
//public:
//	MyStack(int n = 10) {
//		st = new int[n];
//		MaxSize = n;
//		top = -1;
//	}
//	~MyStack()
//	{
//		delete[]st;
//	}
//	void Clear() {
//		top = -1;
//	}
//	bool Push(int elem);
//	bool Pop(int& elem);
//	bool Top(int& elem);
//	bool IsEmpty();
//	bool IsFull();
//};
//bool MyStack::IsEmpty() {
//	if (MyStack::top == -1) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//bool MyStack::IsFull()
//{
//	if (top == MaxSize - 1) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//bool MyStack::Push(int elem) {
//	if (IsFull()) {
//		return false;
//	}
//	else {
//		st[++top] = elem;
//		return true;
//	}
//}
//bool  MyStack::Pop(int& elem) {
//	if (IsEmpty()) {
//		return false;
//	}
//	else {
//		elem = st[top--];
//		return true;
//	}
//}
//
//bool  MyStack::Top(int& elem) {
//	if (IsEmpty()) {
//		return false;
//	}
//	else {
//		elem = st[top];
//		return true;
//	}
//}
////��������ڽӾ���洢��ͼ�ṹ������ӱߡ�ɾ���ߡ�������ȱ���������������У���������ȱ����ĵݹ���ǵݹ麯����
//class MyGraph
//{
//private:
//	int ** Adj;
//	int N;
//public:
//	MyGraph(int num)
//	{
//		N = num;
//		//��̬�����ڽӾ���ռ�
//		Adj = new int* [N];
//		for (int i = 0; i < N; ++i)
//		{
//			Adj[i] = new int[N];
//		}
//		//��ʼ���ڽӾ���
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				Adj[i][j] = 0;
//			}
//		}
//	}
//	bool insertEdge(int i, int j, int w=1)
//	{
//		if (0 <= i < N && 0 <= j < N)
//		{
//			Adj[i][j] = w;
//
//		}
//		else {
//			return false;
//		}
//	}
//	bool delEdge(int i, int j)   
//	{
//		if (0 <= i < N && 0 <= j < N)
//		{
//			Adj[i][j] = 0;
//
//		}
//		else {
//			return false;
//		}
//	}
//	void BFSSearch()//��ȱ���
//	{
//		bool* flag = new bool[N];
//		for (int i = 0; i < N; i++)
//		{
//			flag[i] = 0;
//		}
//		for (int i = 0; i < N; i++)
//		{
//			if (flag[i] == 0)
//			{
//				Non_recursion_BFS(i, flag);
//			}
//		}
//	}
//	void Non_recursion_BFS(int v, bool*flag)
//	{
//		int j;
//		Queue<int>s(N);
//
//		while (1) {
//			if (flag[v] == 0)
//			{
//				flag[v] = 1;
//				s.EnQueue(v);
//				cout << v << ' ';
//			}
//			for (j = 0; j < N; j++)
//			{
//				if (Adj[v][j] == 1 && flag[j] == 0)//������б���δ�����ʣ�����һ��
//				{
//					cout << j << ' ';
//					flag[j] = 1;
//					s.EnQueue(j);
//				}
//			}
//			 s.DeQueue();
//			 if (s.IsEmpty())return;
//			 v = s.GetFront();
//		}
//	}
//	void DFSSearch()//��ȱ���
//	{
//		bool* flag = new bool[N];
//		for (int i = 0; i < N; i++)
//		{
//			flag[i] = 0;
//		}
//		for (int i = 0; i < N; i++)
//		{
//			if (flag[i] == 0)
//			{
//				//DFS(i, flag);
//				Non_recursion_DFS(i, flag);
//			}
//		}
//
//	}
//	void DFS(int v, bool* flag)
//	{
//		flag[v] = 1;
//		cout << v << ' ';
//		for (int j = 0; j < N; j++)
//		{
//			if (Adj[v][j]==1 && flag[j] == 0)//������б���δ�����ʣ�����һ��
//			{
//				DFS(j, flag);
//			}
//		}
//	}
//	void Non_recursion_DFS(int v, bool* flag)
//	{
//		int j;
//		MyStack s(N);
//	
//		while (1) {
//			if (flag[v] == 0)
//			{
//				flag[v] = 1;
//				s.Push(v);
//				cout << v << ' ';
//			}
//			for (j = 0; j < N; j++)
//			{
//				if (Adj[v][j] == 1 && flag[j] == 0)//������б���δ�����ʣ�����һ��
//				{
//					v = j;
//					break;
//				}
//			
//			}
//			if (j == N)//û�ҵ�
//			{
//				s.Pop(v);
//				if (s.IsEmpty())
//				{
//					return;
//				}
//				s.Top(v);
//
//			}
//		}
//	}
//	~MyGraph()
//	{
//
//		for (int i = 0; i < N; i++)
//			delete[] Adj[i];
//		delete[] Adj;
//	}
//
//};
//int main()
//{
//	//   0 
//	// 1 2 4
//	//3
//	MyGraph* a = new MyGraph(5);
//	a->insertEdge(0, 1);
//	a->insertEdge(0, 2);
//	a->insertEdge(1,3 );
//	a->insertEdge(0, 4);
//	a->DFSSearch();
//	//a->BFSSearch();
//}