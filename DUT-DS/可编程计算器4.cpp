//#define _CRT_SECURE_NO_WARNINGS 1
////�����ַ������Լ�����ƥ������
////��������ȼ�ȷ��
////+ - * / ^ ( 
////�ѵ�1�������֣�10+20����ַ�����ô��ȡ�����֣�����1������Ȼ�����������������>��0��С��'9'�����ģ�
////֮ǰ��*10+�µ������Դ�����
////�ж��Ǹ��㻹������   1.02+2
////�������Ǹ���         1+(-1) -�����������-���Ǹ����أ�˼�������Ǿ���-1+5 2*��-1�� 
////�����-��ǰ��ջ��û��������������� 
//#include <iostream>
//#include<math.h>
//using namespace std;
////ջ�����ȼ�
//int isp(char ch)
//{
//    switch (ch)
//    {
//    case '#': return 0;
//    case '(': return 1;
//    case '^':return 7;
//    case '*':case '/':case '%':return 5;
//    case '+':case '-':return 3;
//    case ')':return 8;
//    }
//}
////ջ�����ȼ�
//int icp(char ch)
//{
//    switch (ch)
//    {
//    case '#': return 0;
//    case '(': return 8;
//    case '^':return 6;
//    case '*':case '/':case '%':return 4;
//    case '+':case '-':return 2;
//    case ')':return 1;
//    }
//}
//
//
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
//    ~stack() {
//        delete[]st;
//    }
//};
//
////�Ƚ�ջ��ջ�����ȼ���С
//char precede(int isp, int icp)
//{
//    if (isp < icp) return '<';
//    else if (isp > icp) return '>';
//    else return '=';
//}
//
////������򵥵�˫Ŀ��������ʽ
//int cal(int first, char op, int second)
//{
//    switch (op)
//    {
//    case'+':
//        return(first + second);
//    case'-':
//        return(first - second);
//    case'*':
//        return(first * second);
//    case'/':
//        return(first / second);
//    case'%':
//        return(first % second);
//    case'^':
//        return(pow(first, second));
//    }
//}
//int Cal(string c) 
//{
//    c += '#';
//    int len = c.length();
//   
//        stack ops(len);//����ջ
//        stack nums(len);//�����ջ
//        //���ݺ������
//      
//        ops.push('#');
//        int num = 0, i = 0, first, second;
//        while (c[i] != '#' || ops.top1() != '#')// �ַ�ɨ������������ջ���С�����ʱ���ؽ���
//        {
//            //1.������
//            if (isdigit(c[i]))
//            {
//                num = num * 10 + (c[i] - '0');
//                if (!isdigit(c[i + 1]))
//                {
//                    nums.push(num);
//                    num = 0;
//                }
//                i++;
//            }
//            else
//            {
//                switch (precede(isp(ops.top1()), icp(c[i])))
//                {
//                case '<':// ջ��Ԫ������Ȩ��
//                    ops.push(c[i]);
//                    i++;
//                    break;
//                case '=':// �����Ų�������һ�ַ�
//                    ops.pop();
//                    i++;
//                    break;
//                case '>':// ��ջ������������ջ������ȡ��һ���ʽ�ַ�
//                    second = nums.top1();
//                    nums.pop();
//                    first = nums.top1();
//                    nums.pop();
//                    nums.push(cal(first, ops.top1(), second));
//                    ops.pop();
//                    break;
//                }
//            }
//           
//        }
//        return nums.top1();
//}
//
//int main() {
//    string s;
//    int input;
//   do{
//       system("cls");
//        cout << "��������Ҫ����ı��ʽ(������1+1):" << endl;
//        cin >> s;
//        cout<<Cal(s.c_str())<<endl;
//        cout << "�Ƿ���Ҫ����(���� 1��|0��)" << endl;
//        
//        cin >> input;
//   } while (input);
//    
//}
