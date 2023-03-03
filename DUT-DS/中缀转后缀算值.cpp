//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////栈内优先级
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
////栈外优先级
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
//char precede(int isp, int icp)
//{
//    if (isp < icp) return '<';
//    else if (isp > icp) return '>';
//    else return '=';
//}
//template<typename T>
//class stack {
//private:
//    int maxsize;
//    int top;
//    T* st;
//
//public:
//    stack(int size)
//    {
//        maxsize = size;
//        top = -1;
//        st = new T[maxsize];
//    }
//
//    void push(T item)
//    {
//        st[++top] = item;
//    }
//
//    T& top1()
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
//    void Clear() {
//        for (int i = 0; i < maxsize; i++) {
//           
//                st[i] = "\0";
//            
//        }
//    }
//};
//char* Change(string &s) {
//    s += '#';
//    int length = s.length();
//    stack<char>ops(length);
//    ops.push('#');
//    stack<char*>str(length);
//    
//    int  i = 0 ;
//    char* first;
//    char *second;
//    while (s[i] != '#' || ops.top1() != '#')
//    {
//        if (isdigit(s[i]))
//        {
//            char* a=new char[2];
//            a[0] = s[i];
//            a[1] = '\0';    
//           str.push(a);
//           i++;
//       
//        }
//        else
//            {
//                switch (precede(isp(ops.top1()), icp(s[i])))
//                {
//                case '<':// 栈顶元素优先权低
//                    ops.push(s[i]);
//                    i++;
//                    break;
//                case '=':// 脱括号并接收下一字符
//                    ops.pop();
//                    i++;
//                    break;
//                case '>':// 退栈并将运算结果入栈，但不取下一表达式字符
//                    second = str.top1();
//                    str.pop();
//                    first = str.top1();
//                    str.pop();
//                    strcat(first, second);
//                    char* b = new char[2];
//                    b[0] = ops.top1();
//                    b[1] = '\0';
//                    strcat(first, b);
//                    str.push(first);
//                    ops.pop();
//                    delete[]b;
//                    break;
//                }
//            }
//           
//        }
//    return str.top1();
//    }
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
//int calc(char*s) {
//    int len = strlen(s);
//    s[len] = '#';
//    s[len + 1] = '\0';
//    int length = len+1;
//    stack<char>ops(length);
//    stack<int>nums(length);
//    ops.push('#');
//    int  i = 0, first, second;
//    while (s[i] != '#' )
//    {
//        if (isdigit(s[i])) {
//            s[i] -= '0';
//            nums.push(s[i]);
//            i++;
//        }
//        else {
//            second = nums.top1();
//            nums.pop();
//            first = nums.top1();
//            nums.pop();
//            nums.push(cal(first, s[i], second));
//            ops.pop();
//            i++;
//        }
//    }
//    return nums.top1();
//}
//int main() {
//
//    
//    string s;
//    cout << "请输入一段中缀表达式:";
//    cin >> s;
//
//    cout << "转化为后缀表达式为:" << Change(s) << endl;
//    cout << "计算结果为:"<<calc(Change(s)) << endl;
//}