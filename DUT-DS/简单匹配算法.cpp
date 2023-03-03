////#define _CRT_SECURE_NO_WARNINGS 1
//
///*1.7-a 朴素的模式匹配算法
//
//	//1.7-a.	朴素的模式匹配算法，返回子串第一次出现的位置，若不存在，返回-1
//	int NaiveStrMatch(const string& T, const string& P)
//
//*/
//#include <iostream>
//#include <string.h>
//using namespace std;
//int NaiveStrMatch(const string & T, const string& P)
//{
//	int n = T.length(), m = P.length();
//	if (m <= n) {
//		int i = 0; int j = 0;
//		while (m-j<=n-i && j < m) {
//			if (T[i] == P[j]) {
//				i++;
//				j++;
//			}
//			else {
//				i = i - j + 1;
//				j = 0;
//			}
//		}
//		if (j == m) {
//			return i - j + 1;
//		}
//		else {
//			return -1;
//		}
//	}
//	else {
//
//		return -1;
//	}
//}
//int main()
//{
//	int result;
//	string t = "sdks";
//	string p = "dks";
//	result = NaiveStrMatch(t, p);
//	if (result != -1) {
//		cout << "目标字符串中存在于第" << result << "位上" << endl;
//	}
//	else {
//		cout << "没有找到" << endl;
//	}
//	return 0;
//}