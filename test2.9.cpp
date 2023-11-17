#include<iostream>
using namespace std;
int main()
{
	double price = 0.8, total_p = 0;//定义单价及总价
	int number = 2, day = 0;//定义购买数量及购买天数
	double average_p;//定义平均价格
	for (int i = 1; number<=100 ; i++)//循环 number超过100退出循环
	{
		day++;//天数+1
		total_p += price * number;//总价=原先总价+每天新花的钱
		number *= 2;//数量*2
	}
	average_p = total_p / day;//平均价格=总价/天数
	cout << "平均每天买" << average_p << "元" << endl;//输出每天平均花费
	return 0;
}