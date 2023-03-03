//#define _CRT_SECURE_NO_WARNINGS 1
///*
//利用栈，假设表达式中允许包含4种符号：圆括号、方括号和大括号、注释符号。设计一个算法采用顺
//序栈判断表达式中的运算符号是否正确配对。
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
//TODO:计一个算法采用顺序栈判断表达式c中的括号是否正确配对。
//输出：1. 遍历表达式c过程中，匹配错误 cout << c[i] << "  匹配错误" << endl;
//      2. 遍历之后，栈为空，则匹配正确，cout << "匹配正确！" << endl;
//               若不为空，则  cout << s1.top1() << "  匹配错误" << endl;
// */
//void Bracketmatch(const char* c) //括号匹配
//{
//    bool flag = true;
//    stack s1(strlen(c));
//    for (int i = 0; i < strlen(c); i++) {
//        if (i < strlen(c) - 1 && c[i] == '/' && c[i + 1] == '/') {       
//           //注释符号，后面不用再看了，并且此时栈为空,匹配完成
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
//                    cout << c[i] << "匹配错误" << endl;
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
//            cout << "匹配正确！" << endl;
//        }
//        else {
//            cout << s1.top1() << "  匹配错误" << endl;
//        }
//    }
//    else {
//        cout << "注释匹配错误！" << endl;
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
