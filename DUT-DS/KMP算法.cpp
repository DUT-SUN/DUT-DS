//////#define _CRT_SECURE_NO_WARNINGS 1
//////#include<iostream>
//////using namespace std;
////////next[0] = -1 �汾
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
/////*1.7-b,c KMPģʽƥ���㷨
////
////    //1.7-b.	�����ַ��������������㷨�������������������顣
////    int* next(string P)
////
////    //1.7-c.	KMPģʽƥ���㷨�������Ӵ���һ�γ��ֵ�λ�ã��������ڣ�����-1
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
//                      //�տ�ʼ�õ�����˵��5��ǰһ��Ҳ���ǵ�4��λ�õ�next�����ֵ
//                    //Ȼ��ȥ�ж����k>0��������2��������±�Ϊ2����ĸ������5��λ��ĸ����ȵĻ�����ôk
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
//TODO:1.7-c.	KMPģʽƥ���㷨�������Ӵ���һ�γ��ֵ�λ�ã��������ڣ�����-1
//����˵����TΪԭʼ�ַ���
//         PΪ�Ӵ�
//         NΪ�ַ���P����������
//����ֵ˵����ͨ��KMP�㷨������ҵ��Ӵ����򷵻��Ӵ���һ�γ��ֵ�λ�ã�
//����û�в��ҵ�������-1
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
//    string p; //Ҫ���ҵ��ַ���
//    string q; //ԭʼ�ַ���
//    getline(cin, p);
//    getline(cin, q);
//    int* N;
//    N = next(p);
//    for (int i = 0; i < p.length(); i++)
//        cout << N[i] << " ";
//    cout << endl;
//    cout << KMPStrMatching(q, p, N, 0) << endl;
//}
