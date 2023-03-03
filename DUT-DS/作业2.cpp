//#define _CRT_SECURE_NO_WARNINGS 1
///*课后习题1.8-b
//    b.	给定一个不带头结点的单链表，写出将链表倒置的算法
//        Node* Reverse(Node* first)
//*/
//#include <iostream>
//using namespace std;
//struct Node {
//    Node(int x)
//    {
//        value = x;
//        next = NULL;
//    }
//    int value;
//    Node* next;
//};
//
///*
//TODO:链表倒置的算法
// */
//Node* Reverse(Node* first)
//{
//
//    if (first->next == NULL || first == NULL)
//        return first;
//    else
//    {
//        Node* beg = NULL;
//        Node* mid = first;
//        Node* end = first->next;
//        while (1)
//        {
//            mid->next = beg;
//            if (end == NULL)
//            {
//                break;
//            }
//            beg = mid;
//            mid = end;
//            end = end->next;
//        }
//        first = mid;
//        return first;
//    }
//
//
//}
//void print(Node* node)
//{
//    while (NULL != node) {
//        cout << node->value << " ";
//        node = node->next;
//    }
//}
//int main()
//{
//    int iNum;
//    cin >> iNum;
//    Node* a = NULL;
//    Node* pTemp=NULL;
//    for (int i = 0; i < iNum; i++) {
//        int tmp;
//        cin >> tmp;
//        if (i == 0) {
//            a = new Node(tmp);
//            pTemp = a;
//        }
//        else {
//            pTemp->next = new Node(tmp);
//            pTemp = pTemp->next;
//        }
//    }
//
//    cout << "倒置前为：";
//    print(a);
//    cout << endl;
//    Node* r = Reverse(a);
//    cout << "倒置后为：";
//    print(r);
//    cout << endl;
//    return 0;
//}
