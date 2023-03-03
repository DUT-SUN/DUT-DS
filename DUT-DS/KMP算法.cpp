//////#define _CRT_SECURE_NO_WARNINGS 1
//////#include<iostream>
//////using namespace std;
////////next[0] = -1 版本
//////void getNext(char* p, int* next) {
//////	next[0] = -1;
//////	int i = 0, j = -1;
//////	while (i < strlen(p)) {
//////		if (j == -1 || p[i] == p[j]) {
//////			++i;
//////			++j;
//////			next[i] = j;
//////		}
//////		else	j = next[j];
//////	}
//////}
//////int KMP(char* t, char* p,int*next)
//////{
//////	int i = 0;
//////	int j = 0;
//////	int m = strlen(t);
//////	int n = strlen(p);
//////	while (i < m && j < n) 
//////	{
//////		if (j == -1 || t[i] == p[j]) {
//////			i++;
//////			j++;
//////		}
//////		else 	j = next[j];
//////	}
//////	if (j == strlen(p))
//////		return i - j;
//////	else
//////		return -1;
//////}
//////
//////int main() {
//////	char a[] = "abcbd";
//////	char b[] = "bcb";
//////	int* next = new int[strlen(b)+1];
//////	getNext(b, next);
//////	cout<<KMP(a, b, next);
//////}
/////*1.7-b,c KMP模式匹配算法
////
////    //1.7-b.	计算字符串特征向量的算法，返回特征向量的数组。
////    int* next(string P)
////
////    //1.7-c.	KMP模式匹配算法，返回子串第一次出现的位置，若不存在，返回-1
////    int KMPStrMatching(string T, string P, int* N, int startIndex)
////
//
//#include <assert.h>
//#include <iostream>
//#include <string.h>
//#include <string>
//using namespace std;
//int* next(string P)
//{
//    int len = P.length();
//    int* next = new int[len];
//    next[0] = 0;//ababc
//                //00120
//                      //刚开始拿到比如说第5个前一个也就是第4个位置的next数组的值
//                    //然后去判断如果k>0，现在是2而且这个下标为2的字母和现在5号位字母不相等的话，那么k
//    for (int i = 1; i < len; ++i) {
//        int k = next[i - 1];
//        while (k > 0 && P[k] != P[i]) k = next[k - 1];
//        next[i] = (P[i] == P[k]) ? k + 1 : 0;
//    }
//
//    return next;
//}
//
///*
//TODO:1.7-c.	KMP模式匹配算法，返回子串第一次出现的位置，若不存在，返回-1
//参数说明：T为原始字符串
//         P为子串
//         N为字符串P的特征向量
//返回值说明：通过KMP算法如果查找到子串，则返回子串第一次出现的位置，
//否则没有查找到，返回-1
//*/
//int KMPStrMatching(string T, string P, int* N, int startIndex)
//{
//   
//    int j = 0;
//    for (int i = 0; i < T.length(); i++) {
//        while (j > 0 && T[i] != P[j]) {
//            j = N[j - 1];
//        }
//        if (T[i] == P[j]) {
//            j++;
//        }
//        if (j == P.length()) {
//            return i - j + 1;
//        }
//    }
//    return -1;
//    
// 
//}
//
//int main()
//{
//    string p; //要查找的字符串
//    string q; //原始字符串
//    getline(cin, p);
//    getline(cin, q);
//    int* N;
//    N = next(p);
//    for (int i = 0; i < p.length(); i++)
//        cout << N[i] << " ";
//    cout << endl;
//    cout << KMPStrMatching(q, p, N, 0) << endl;
//}
