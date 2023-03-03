//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//template<class T>
//void Swap(T& x, T& y)
//{
//	T temp = y;
//	y = x;
//	x = temp;
//}
//template<class T>
//int Partition2(T Array[], int low, int high)
//{
//	T pivot = Array[low];
//	while (low < high)
//	{
//		while (low < high && Array[high] >= pivot)
//		{
//			high--;
//		}
//		while (low < high && Array[low] <= pivot)
//		{
//			low++;
//		}
//		Array[high] = Array[low];
//	}
//	Array[low] = pivot;
//	return low;
//}
//template<class T>
//int Partition1(T Array[], int first, int last)
//{
//	int low = first + 1;
//	int high = last;
//	T pivot = Array[first];
//
//	while (low <= high)
//	{
//		while (low <= high && Array[low] < pivot)
//		{
//			low++;
//		}
//		while (low <= high && Array[high] > pivot)
//		{
//			high--;
//		}
//		if (low < high)Swap(Array[high--],Array[low++]);
//		else {
//			low++;
//		}
//
//	}
//	Swap(Array[first], Array[high]);
//	return high;
//}
//template<class T>
//void QuickSort(T arr[], int low, int high)
//{
//	int pivotLocation;
//	if (low < high)
//	{
//		pivotLocation = Partition1(arr, low, high);
//		QuickSort(arr, low, pivotLocation-1);
//		QuickSort(arr, pivotLocation + 1,high );
//	}
//}
//
//int main()
//{
//	int* arr = new int[10]{ 3,7,5,6,2,9,8,10,1,4 };
//	QuickSort(arr,0,9);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//}