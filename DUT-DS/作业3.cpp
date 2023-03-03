//#define _CRT_SECURE_NO_WARNINGS 1
///*课后习题1.8-c
//
//        c.	已知head为单链表的表头指针，链表中存储的都是整形数据，实现下列运算的递归算法：
//            i.	求链表中的最大值
//                int GetMax(Node* a)
//
//            ii.	求链表中的结点个数
//                int GetNodeNum(Node* a)
//
//            iii.求所有整数的平均值
//                double GetAvg(Node* a, int n)
//
//*/
//#include <iostream>
//using namespace std;
//const int MinNumber = -1000000;
//struct Node {
//    Node(int x)
//    {
//        value = x;
//        next = NULL;
//    }
//    int value;
//    Node* next;
//};
///*
//TODO:求链表中的最大值,并返回。如果链表a为空，则直接返回MinNumber
//*/
//int GetMax(Node* a)
//{
//    if (a == NULL) {
//        return MinNumber;
//    }
//    int MaxValue = a->value;
//    while (a->next) {
//        if (a->next->value > MaxValue) {
//            MaxValue = a->next->value;
//        }
//        a = a->next;
//    }
//    return MaxValue;
//}
///*
//TODO:求链表中的结点个数，并返回个数。
// */
//int GetNodeNum(Node* a)
//{
//    if (a == NULL)
//    {
//        return 0;
//    }
//    int count = 0;
//    while (a) {
//        count++;
//        a = a->next;
//    }
//    return count;
//}
///*
//TODO: 求所有整数的平均值
//*/
//double GetAvg(Node* a, int n)
//{
//    double sum = 0;
//    if (a == NULL) {
//        return 0;
//    }
//    while (a) {
//        sum += a->value;
//        a = a->next;
//    }
//    return sum / n;
//}
//
//int main()
//{
//    int count;
//    cin >> count;
//    Node* a = NULL, * p=NULL;
//    for (int i = 0; i < count; i++) {
//        int iValue;
//        cin >> iValue;
//        if (a == NULL) {
//            a = new Node(iValue);
//            p = a;
//        }
//        else {
//            p->next = new Node(iValue);
//            p = p->next;
//        }
//    }
//    int max = GetMax(a);
//    int nodeNum = GetNodeNum(a);
//    double avg = GetAvg(a, nodeNum);
//    cout << "最大值：" << max << endl;
//    cout << "结点个数：" << nodeNum << endl;
//    cout << "平均值：" << avg << endl;
//}
//                                                                        