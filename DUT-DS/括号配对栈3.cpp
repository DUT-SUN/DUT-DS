//#define _CRT_SECURE_NO_WARNINGS 1
///*
//����ջ��������ʽ���������4�ַ��ţ�Բ���š������źʹ����š�ע�ͷ��š����һ���㷨����˳
//��ջ�жϱ��ʽ�е���������Ƿ���ȷ��ԡ�
//*/
//#include <iostream>
//using namespace std;
//class stack {
//private:
//    int maxsize;
//    int top;
//    char* st;
//
//public:
//    stack(int size)
//    {
//        maxsize = size;
//        top = -1;
//        st = new char[maxsize];
//    }
//
//    void push(char item)
//    {
//        st[++top] = item;
//    }
//
//    char top1()
//    {
//        return st[top];
//    }
//
//    void pop()
//    {
//        top--;
//    }
//
//    bool empty()
//    {
//        return top == -1;
//    }
//};
///*
//TODO:��һ���㷨����˳��ջ�жϱ��ʽc�е������Ƿ���ȷ��ԡ�
//�����1. �������ʽc�����У�ƥ����� cout << c[i] << "  ƥ�����" << endl;
//      2. ����֮��ջΪ�գ���ƥ����ȷ��cout << "ƥ����ȷ��" << endl;
//               ����Ϊ�գ���  cout << s1.top1() << "  ƥ�����" << endl;
// */
//void Bracketmatch(const char* c) //����ƥ��
//{
//    bool flag = true;
//    stack s1(strlen(c));
//    for (int i = 0; i < strlen(c); i++) {
//        if (i < strlen(c) - 1 && c[i] == '/' && c[i + 1] == '/') {       
//           //ע�ͷ��ţ����治���ٿ��ˣ����Ҵ�ʱջΪ��,ƥ�����
//            break;
//            
//          
//        }
//        if (c[i] == '*' && c[i + 1] == '/') {
//            flag = false;
//            break;
//        }
//
//        if (i < strlen(c) - 1 && c[i] == '/' && c[i + 1] == '*') {
//            for (int j = i; j < strlen(c) - 1; ++j) {
//                if (c[j] == '*' && c[j + 1] == '/') {
//                    i = j ;  
//                }
//            }
//        }
//
//       
//        if (c[i] == '{' || c[i] == '[' || c[i] == '(') {
//            s1.push(c[i]);
//        }
//        if (c[i] == ')' || c[i] == ']' || c[i] == '}') {
//            if (c[i] == ')' && s1.top1() == '(' || c[i] == ']' && s1.top1() == '[' || c[i] == '}' && s1.top1() == '{') {
//                s1.pop();
//            }
//            else {
//                if (c[i] != s1.top1())
//                {
//                    cout << c[i] << "ƥ�����" << endl;
//                    return;
//                }
//          
//                break;
//            }
//        }
//    }
//  
//    if (flag) {
//        if (s1.empty()) {
//            cout << "ƥ����ȷ��" << endl;
//        }
//        else {
//            cout << s1.top1() << "  ƥ�����" << endl;
//        }
//    }
//    else {
//        cout << "ע��ƥ�����" << endl;
//    }
//
//}
//
//int main()
//{
//    string s;
//    cin >> s;
//    Bracketmatch(s.c_str());
//    return 0;
//}
//
