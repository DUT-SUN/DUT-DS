//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//template<class Record>
//void insertSort(Record arr[], int n)
//{
//	Record RecordTemp;
//	for (int i = 1; i < n; i++) {
//		//一上来拿到需要插入的那个值
//		RecordTemp = arr[i];
//		int j = i - 1;
//		//然后去往前找有没有比这个值大的，如果有，j就--
//		while (j >= 0 && arr[j] > RecordTemp)
//		{
//			arr[j + 1] = arr[j];
//			j = j - 1;
//		}
//		arr[j+1] = RecordTemp;
//
//	}
//}
//template<class Record>
//void BinaryInsetSort(Record arr[],int n)
//{
//	Record RecordTemp;
//	for (int i = 1; i < n; i++) {
//		//一上来拿到需要插入的那个值
//		RecordTemp = arr[i];
//		//折半查找
//		int left = 0;
//		int right = i - 1;
//		while (left <= right)
//		{
//			int middle = (left + right) / 2;
//			if (arr[middle] < RecordTemp)
//			{
//				left = middle + 1;
//			}
//			else
//			{
//				right = middle - 1;
//			}
//		}
//		for (int j = i - 1; j >= left; j--)
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[left] = RecordTemp;
//		
//	}
//}
//int main()
//{
//	int* arr = new int[10]{ 3,7,5,6,2,9,8,10,1,4 };
//	//insertSort(arr, 10);
//	BinaryInsetSort(arr, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//}