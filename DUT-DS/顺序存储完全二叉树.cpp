//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class CBT
//{
//private:
//	char* st;
//	int maxSize;
//public:
//	CBT(int n)
//	{
//		maxSize = n;
//		st = new char[maxSize];
//	}
//	~CBT() {
//		delete st;
//	}
//	void CBTinit() {
//		cout << "请输入你的数据:";
//		for (int i = 0; i < maxSize; i++)
//		{
//			cin >> st[i];
//		}
//	}
//	char PNodeValue(int i) {
//		return st[(i-1) / 2];
//	}
//	char LeftCNodeValue(int i) {
//		int left = i * 2-1;
//		if (2 * i + 1 > maxSize) {
//			cout << "没有左孩子" << endl;
//			return '?';
//		}
//		else {
//			return st[left];
//		}
//	}
//	char RightCNodeValue(int i) {
//		int right = 2 * i ;
//		if (2 * i + 2 > maxSize) {
//			cout << "没有右孩子" << endl;
//			return '?';
//		}
//		else {
//			return st[right];
//		}
//	}
//};
//int main()
//{
//	int count;
//	cout << "请输入你要输入的数据个数:";
//	cin >> count;
//	CBT tree(count);
//	tree.CBTinit();
//	cout << tree.PNodeValue(2) << endl;
//	cout << tree.LeftCNodeValue(3)<<endl;
//	cout << tree.RightCNodeValue(3)<<endl;
//
//
//}