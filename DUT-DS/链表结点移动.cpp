//#define _CRT_SECURE_NO_WARNINGS 1
////请补充myList中的三个成员函数体。
//#include<iostream>
//using namespace std;
//class Node
//{
//public:
//    int data;
//    Node* next;
//public:
//    Node(int dt, Node* nt = 0) { data = dt; next = nt; }
//    Node() { next = 0; }
//};
//class myList
//{
//    Node* head;
//public:
//    myList() { head = 0; }
//    //bool moveleft(int k);
//    bool insertToHead(int x)
//    {
//        //step1：开辟Node存储空间 s，把x存储到 s中
//        Node* s = new Node;
//        s->data = x; s->next = 0;
//        //step2:原head 连接到 s的后面
//        s->next = head;
//        //step3：更改head，指向新结点s
//        head = s;
//        return true;
//    }
//    bool printValue();
//
//    bool insertToTail(int x);
//    bool insertBefore(int i, int x); //在第i个元素之气那插入x
//};
//
//bool myList::printValue()
//{
//    if (head == NULL) {
//        return false;
//    }
//    else {
//        Node* headx = head;
//        while (headx->next != NULL) {
//            cout << headx->data << ' ';
//            headx = headx->next;
//        }
//        cout << headx->data << ' ';
//        return true;
//    }
//}
//bool myList::insertBefore(int i, int x) //在第i个元素之前那插入
//{
//    if (head == NULL)
//    {
//        return false;
//    }
//    int count = 0;
//    Node* headx = head;
//    while (headx->next != NULL) {
//        count++;
//        headx = headx->next;
//    }
//    count++;
//    if (i >= 1 && i <= count)
//    {
//        if (i == 1) {
//            insertToHead(x);
//            return true;
//        }
//        else {
//            headx = head;
//            while (headx && (i - 2)) {
//                headx = headx->next;
//                i--;
//            }
//            Node* s = new Node;
//            s->next = headx->next;
//            s->data = x;
//            headx->next = s;
//            return true;
//        }
//    }
//    else {
//        return false;
//    }
//}
//bool myList::insertToTail(int x)
//{
//    if (head == NULL) {
//        return false;
//    }
//    Node* headx = head;
//    while (headx->next != NULL) {
//        headx = headx->next;
//    }
//    Node* s = new Node;
//    s->next = NULL;
//    s->data = x;
//    headx->next = s;
//    return true;
//}
//int main()
//{
//    myList mlist;
//
//    mlist.insertToHead(1);
//    mlist.insertToHead(2);
//    mlist.insertToHead(3);
//    mlist.insertBefore(2, 10);
//    mlist.insertToTail(30);
//    mlist.printValue();//输出的是 3 10 2 1 30
//    mlist.insertBefore(1, 0);
//    mlist.insertBefore(10, 50); //不会插入
//    mlist.printValue();//输出的还是 0 3 10 2 1 30
//    return 0;
//}
