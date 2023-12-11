#include<iostream>
using namespace std;
int peach_number(int num1,int num2)//定义计算数量的函数
{
	if (num2 != 0)//判断天数是否足够
	{
		int temp = (num1 + 1) * 2;//计算前一天的桃子数
		num1 = temp;//赋值给num1
		num2--;//天数-1
		return peach_number(num1, num2);//递归
	}
	else//如果天数达到要求
	{
		return num1;//返回计算出的num1
	}
}
int main()
{
	int n = 1;//第十天只剩一个桃子
	cout << "第一天猴子共摘了" << peach_number(n,10) << "个桃子" << endl;//调用函数,分别输入现在个数及天数
	return 0;
}