#include<iostream>
using namespace std;
int main()
{
	int arr[10];//定义数组
	int temparr[10];//定义临时数组
	int num = 0;//定义显示数
	int temp=0;//定义临时变量记录是否有数据重复
	cout << "请输入数组中的10个数" << endl;//提示输入数据
	for (int i = 0; i < 10; i++)//搭建循环输入数据
	{
		cin >> temparr[i];//输入数据
	}
	for (int i = 0; i < 10; i++)//搭建循环判断赋值
	{
		temp = 0;//将临时记录变量赋为0
		for (int j = 0; j < i; j++)//创建内层循环
		{
			if (temparr[i] == temparr[j])//如果目前的数值和前面的数值有重复
			{
				temp++;//临时变量+1
			}
		}
		if (temp == 0)//如果临时变量为0 即不存在重复
		{
			arr[num] = temparr[i];//将不重复的数值在数组中的最新一位赋值
			num++;//显示数+1
		}
	}
	cout << "您输入的数字是(已删去重复值)" << endl;//赋值后对数组进行打印输出
	for (int i = 0; i < num; i++)//只打印在显示数内的数据
	{
		cout << arr[i] << ' ';//打印数据
	}
	return 0;
}