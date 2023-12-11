#include<iostream>
using namespace std;
void change_state(bool* arr, int num1)//定义改变状态函数
{
	for (int i = num1; i < 100; )//从第i项开始
	{
		arr[i] = (!arr[i]);//第i项取反
		int j = i + 1;//下标+1
		j += j + 1;//隔j+1项后继续取反
		i = j - 1;
	}
}
int main()
{
	bool arr[100];//定义一个布尔类型的数组
	for (int i = 0; i < 100; i++)
	{
		arr[i] = true;//将数组的所有值赋为true(开)
	}
	for (int i = 1; i < 100; i++)//从学生2到学生100改变状态
	{
		change_state(arr, i);//调用改变状态函数
	}
	cout << "开着的门有:" << endl;//打印开着的门
	for (int i = 0; i < 100; i++)//创建循环
	{
		if (arr[i] == true)//如果开着
		{
			cout << (i+1) << ' ';//打印编号
		}
	}
	return 0;
}