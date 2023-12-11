#include<iostream>
using namespace std;
void bubble_sort(int* arr, const int* size)//定义排序函数
{
	for (int i = 0; i < *size - 1; i++)
	{
		for (int j = 0; j < *size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int size;//定义数组大小
	cout << "请输入数组大小:";//输入数组大小
	cin >> size;
	int* arr = new int[size];//用new定义动态数组
	cout << "请输入数组数值:";//输入数组数值
	for (int i = 0; i < size; i++)//建立循环输入数值
	{
		cin >> arr[i];
	}
	bubble_sort(arr, &size);//调用排序函数
	cout << "排序后的数组为:";//输出排序后的函数
	for (int i = 0; i < size; i++)
	{
		cout << *&arr[i] << ' ';//使用指针输出结果
	}
	delete[]arr;//删除创建的动态数组
	return 0;
}
