#include<iostream>
using namespace std;
void bubbleSort(int* arr, int len)//定义冒泡排序函数
{
	for (int i = 0; i < len - 1; i++)//比较轮数:比较一次 可以比出 一个最大值 要将10个数排序 仅需比出9次(10-1)最大值 即可确定排序
	{
		for (int j = 0; j < len - 1 - i; j++)//比较的数字:第一次要10个数前后比较 比较九回 选出最大值 第二次要9个数相互比较 比较8回 选出除了第一次选出的数以外的最大值
			//以此类推 比较9次 比较的回数=10-比较过的次数
		{
			if (arr[j] > arr[j + 1])//如果前一项 大于 后一项 调换前后两项(如果是<就是降序)
			{
				int temp = arr[j];//换项记得创建临时变量
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()//主程序
{
	int arr1[10];//定义数组
	cout << "请输入数组的数值" << endl;//提示定义数组
	for (int i = 0; i < 10; i++)//循环定义数组
	{
		cin >> arr1[i];//输入数组
	}
	int num = (sizeof(arr1) / sizeof(arr1[1]));//计算数组长度
	bubbleSort(arr1, num);//调用函数
	cout << "排序后的数组为" << endl;//提示排序结果
	for (int i = 0; i < num; i++)
	{
		cout << arr1[i] << ' ';//输出数组
	}
	return 0;
}