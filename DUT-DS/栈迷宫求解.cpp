//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//struct point
//{
//    int x;
//    int y;
//};
//class stack {
//private:
//    int maxsize;
//    int top;
//    point* st;
//
//public:
//    stack(int size)
//    {
//        maxsize = size;
//        top = -1;
//        st = new point[maxsize];
//    }
//
//    void push(int ax,int ay)
//    {
//        ++top;
//        st[top].x = ax;
//        st[top].y = ay;
//    }
//
//    point& top1()
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
//
//int main()
//{
//    int labyrinth[10][10] = { 
//        {1,1,1,1,1,1,1,1,1,1},
//        {1,0,0,1,0,0,0,1,0,1},
//        {1,0,0,1,0,0,0,1,0,1},
//        {1,0,0,0,1,1,1,0,0,1},
//        {1,0,1,1,1,0,0,0,0,1},
//        {1,0,0,0,1,0,0,0,0,1},
//        {1,0,1,0,0,0,1,0,0,1},
//        {1,0,1,1,1,0,1,1,0,1},
//        {1,1,0,0,0,0,0,0,0,1},
//        {1,1,1,1,1,1,1,1,1,1} };
//    //��0��ǽ1�����߹�-1
//    int startx = 1; int starty = 1;
//    int endx = 8; int endy = 8;
//    stack a(100);
//    a.push(1, 1);//�ѳ���λ����ջ
//    labyrinth[1][1] = -1;
//    int curX = 1;
//    int curY = 1;
//    while (a.top1().x != 8 || a.top1().y != 8)
//    {
//        curX = a.top1().x;
//       curY = a.top1().y;
//        bool flag = true;
//        //�������º�����
//        if (flag&&labyrinth[curX+1][curY] ==0) {//û�ƶ�һ�β����¿�
//            curX++;
//            labyrinth[curX][curY] = -1;
//            a.push(curX, curY);
//
//            flag = false;
//        }
//        else if (flag && labyrinth[curX ][curY+1] == 0)
//        {
//            curY++;
//            labyrinth[curX][curY] = -1;
//            a.push(curX, curY);
//
//            flag = false;
//        }
//        else if (flag && labyrinth[curX][curY-1] == 0)
//        {
//            curY--;
//            labyrinth[curX][curY] = -1;
//            a.push(curX, curY);
//
//            flag = false;
//        }
//        else if (flag && labyrinth[curX-1][curY] == 0)
//        {
//            curX--;
//            labyrinth[curX][curY] = -1;
//            a.push(curX, curY);
//            flag = false;
//        }
//        else {//��ʱ�������ܶ��������ˣ��п�����Χ�߹���-1Ҳ�п�����ǽ
//            //������ط��ó�ǽ
//            labyrinth[curX][curY] = 1;
//            a.pop();//��ʱ���ջ
//            curX = a.top1().x;//�õ���һ��������
//            curY = a.top1().y;
//        }
//    }
//    while (!a.empty())
//    {
//        cout << '(' << a.top1().x << ',' << a.top1().y << ')' << "->";
//        a.pop();
//    }
//    cout << "�ɹ���Ȧ";
//}