//#define _CRT_SECURE_NO_WARNINGS 1
////特殊字符提醒以及括号匹配提醒
////运算符优先级确定
////+ - * / ^ ( 
////难点1分离数字，10+20这个字符串怎么提取出数字，发现1是数字然后向后遍历如果发现有>‘0’小于'9'这样的，
////之前的*10+新的数字以此往复
////判断是浮点还是整数   1.02+2
////正数还是负数         1+(-1) -到底是运算符-还是负号呢，思考——那就是-1+5 2*（-1） 
////如果在-号前入栈中没有其他运算符或者 
//#include <iostream>
//#include<math.h>
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
////比较栈内栈外优先级大小
//char precede(int isp, int icp)
//{
//    if (isp < icp) return '<';
//    else if (isp > icp) return '>';
//    else return '=';
//}
//
////计算最简单的双目运算符表达式
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
//        stack ops(len);//数据栈
//        stack nums(len);//运算符栈
//        //数据和运算符
//      
//        ops.push('#');
//        int num = 0, i = 0, first, second;
//        while (c[i] != '#' || ops.top1() != '#')// 字符扫描完毕且运算符栈仅有‘＃’时返回结束
//        {
//            //1.是数字
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
//                case '<':// 栈顶元素优先权低
//                    ops.push(c[i]);
//                    i++;
//                    break;
//                case '=':// 脱括号并接收下一字符
//                    ops.pop();
//                    i++;
//                    break;
//                case '>':// 退栈并将运算结果入栈，但不取下一表达式字符
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
//        cout << "请输入你要计算的表达式(类似于1+1):" << endl;
//        cin >> s;
//        cout<<Cal(s.c_str())<<endl;
//        cout << "是否还需要计算(输入 1是|0否)" << endl;
//        
//        cin >> input;
//   } while (input);
//    
//}
