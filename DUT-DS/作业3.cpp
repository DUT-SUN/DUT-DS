//#define _CRT_SECURE_NO_WARNINGS 1
///*�κ�ϰ��1.8-c
//
//        c.	��֪headΪ������ı�ͷָ�룬�����д洢�Ķ����������ݣ�ʵ����������ĵݹ��㷨��
//            i.	�������е����ֵ
//                int GetMax(Node* a)
//
//            ii.	�������еĽ�����
//                int GetNodeNum(Node* a)
//
//            iii.������������ƽ��ֵ
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
//TODO:�������е����ֵ,�����ء��������aΪ�գ���ֱ�ӷ���MinNumber
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
//TODO:�������еĽ������������ظ�����
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
//TODO: ������������ƽ��ֵ
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
//    cout << "���ֵ��" << max << endl;
//    cout << "��������" << nodeNum << endl;
//    cout << "ƽ��ֵ��" << avg << endl;
//}
//                                                                        