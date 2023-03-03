//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class Node
//{
//public:
//	float coef;
//	int expn;
//	Node* next;
//public:
//	Node(int x, int y, Node* nt = 0) { coef = x; expn = y; next = nt; }
//	Node() { next = 0; }
//};
//class myList
//{
//
//public:
//	Node* head;
//	myList() { Node* p = new Node; head = p; head->next = NULL; }
//	bool insertToHead(int x, int y)
//	{
//		//step1：开辟Node存储空间 s，把x存储到 s中
//		Node* s = new Node;
//		s->coef = x; s->expn = y; s->next = 0;
//		//step2:原head 连接到 s的后面
//		s->next = head;
//		//step3：更改head，指向新结点s
//		head = s;
//		return true;
//	}
//	void PrintPolyn()
//	{
//		Node* headx = head;
//	
//		while (headx->next != NULL)
//		{
//			headx = headx->next;
//			if (headx->expn == 0) {
//				cout << headx->coef<<'+';
//				
//			}
//			else if (headx->expn == 1) {
//				cout << headx->coef << "X " << '+';
//			}
//			else {
//				cout << headx->coef << "X^" << headx->expn << '+';
//			}
//
//		}
//	
//		cout << '\b';
//		
//		
//
//	}
//};
//
//void CreatePolyn(myList* p) {
//	int count;
//	Node* q;
//	Node* headx = p->head;
//	cout << "\r请输入多项式项数:";
//	cin >> count;
//	cout << "请按指数从高到低的顺序输入多项式每项的系数和指数，格式如（2.1, 3）(1.3,2):" << endl;
//	for (int i = 0; i < count; i++) {
//		q = new Node;
//		cin >> q->coef >> q->expn;
//		headx->next = q;
//		headx = q;
//	}
//}
//
//void AddPolyn(myList* p1, myList* p2, myList* p)
//{
//	Node* x;//结果链表的结点
//	Node* head1 = p1->head;
//	Node*head2 = p2->head;
//	Node* head = p->head;
//	//这里结果链表头结点并没有数据为了方便
//	head1 = head1->next;
//	head2 = head2->next;
//	while (head1 != NULL && head2 != NULL)//当两个需要合并的链表都没到最后的时候
//	{
//	
//		if (head1->expn > head2->expn) {
//			x = new Node;
//			x->coef = head1->coef;
//			x->expn = head1->expn;
//			head->next = x;
//			head = x;
//			head1 = head1->next;
//		}
//		else if (head1->expn < head2->expn)
//		{
//			x = new Node;
//			x->coef = head2->coef;
//			x->expn = head2->expn;
//			head->next = x;
//			head = x;
//			head2 = head2->next;
//		}
//		else {
//			x = new Node;
//			x->coef = head1->coef+head2->coef;
//			x->expn = head2->expn;//因为指数相等所以哪个都行
//			head->next = x;
//			head = x;
//			head1 = head1->next;
//			head2 = head2->next;
//		}
//	}
//	if (head1 != NULL && head2 == NULL) {
//		while (head1 != NULL) {
//			x = new Node;
//			x->coef = head1->coef;
//			x->expn = head1->expn;
//			head->next = x;
//			head = x;
//			head1 = head1->next;
//		}
//	}
//	if (head1 == NULL && head2 != NULL)
//	{
//		while (head2 != NULL) {
//			x = new Node;
//			x->coef = head2->coef;
//			x->expn = head2->expn;
//			head->next = x;
//			head = x;
//			head2 = head2->next;
//		}
//	}
//}
//
//int main() {
//	myList* p1 = new myList;
//	myList* p2 = new myList;
//
//	CreatePolyn(p1);
//	p1->PrintPolyn();
//	cout << "输入你要相加的多项式:" << endl;
//	CreatePolyn(p2);
//	myList* p = new myList;//结果链表初始化
//	AddPolyn(p1, p2, p);
//	p->PrintPolyn();
//}