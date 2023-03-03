//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int* a = new int[5]{ 1,3,6,7,10 };
//	int left = 0;
//	int right = 4;
//	int x;
//	cout << "输入你要查找的值:";
//	cin >> x;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (x == a[mid])
//		{
//			cout << "找到了，下标是" << mid << endl;
//			return 0;
//		}
//		else if (x <= a[mid])
//		{
//			right = mid - 1;
//		}
//		else {
//			left = mid + 1;
//		}
//	}
//	if (left > right)
//	{
//		cout << "没找到" << endl;
//	}
//}