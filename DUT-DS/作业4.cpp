//#define _CRT_SECURE_NO_WARNINGS 1
///*�κ�ϰ��1.8-d
//
//    d.	��ha��hb�ֱ���������ͷ���ķǵݼ���������ı�ͷָ�룬�����һ���㷨��
//        ����������������ϲ���һ���ǵݼ�����ĵ�����Ҫ����������ʹ��ԭ����������Ĵ洢�ռ䣬
//        ������ռ�������Ĵ洢�ռ䡣�����������ظ������ݡ�
//
//        Node* Merge(Node* a, Node* b)
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
//
///*
//TODO:��������,������a������b�������Ӻϲ������Ӻϲ�����������ʹ��ԭ����������Ĵ洢�ռ䣬
//������ռ�������Ĵ洢�ռ䣬�Һϲ������һ���ǵݼ�����ĵ�����
//����ֵ˵�������غϲ���ķǵݼ���������
//*/
//Node* Merge(Node* a, Node* b)
//{
//    Node* pa=a;
//    Node* pb=b;
//    Node* pc=a;
//    Node* head=NULL;
//    bool flag = true;
//    while (pa && pb) {
//        if (pa->value <= pb->value) {
//            if (flag) {
//                head = pa;
//                pc = pa;
//                pa = pa->next;
//         
//                flag = false;
//            }
//            else {
//                pc->next = pa;
//                pc = pa;
//                pa = pa->next;
//            }
//           
//        }
//        else {
//            if (flag) {
//                head = pb;
//                pc = pb;
//                pb = pb->next;
//        
//                flag = false;
//            }
//            else {
//                pc->next = pb;
//                pc = pb;
//                pb = pb->next;
//            }
//       
//        }
//    }
//    pc->next = pa ? pa : pb;
//    return head;
//}
//void print(Node* pNode)
//{
//    while (pNode != NULL) {
//        cout << pNode->value << " ";
//        pNode = pNode->next;
//    }
//    cout << endl;
//}
//
//Node* init()
//{
//    int count;
//    cin >> count;
//    Node* p = NULL, * q=NULL;
//    for (int i = 0; i < count; i++) {
//        int iValue;
//        cin >> iValue;
//        if (NULL == p) {
//            p = new Node(iValue);
//            q = p;
//        }
//        else {
//            q->next = new Node(iValue);
//            q = q->next;
//        }
//    }
//    return p;
//}
//
//int main()
//{
//    Node* ha = init();
//    Node* hb = init();
//    cout << "�ϲ�ǰ����1Ϊ:";
//    print(ha);
//    cout << "�ϲ�ǰ����2Ϊ:";
//    print(hb);
//    Node* head = Merge(ha, hb);
//    cout << "�ϲ���ĵ�����Ϊ:";
//    print(head);
//    return 0;
//}
