#include<iostream>
using namespace std;
int Gcd(int num1, int num2)//定义最大公因数函数
{
	int temp;//定义临时变量
	for (int i = 1; i < num1 || i < num2; i++)//设置循环
	{
		if (num1 % i == 0 && num2 % i == 0)//如果i作为a,b的取余数均为0 就都是a,b的因数
		{
			temp = i;//将目前最大的i覆盖赋值到临时变量
		}
	}
	return temp;//返回临时变量
}
int LCM(int num1, int num2)//定义最小公倍数函数
{
	int temp;//定义临时变量
	for (int i = num1; i <= (num1 * num2); i++)//设置循环
	{
		if (i % num1 == 0 && i % num2 == 0)//如果i作为被取余数,分别取余a,b结果为0 就是a,b的公倍数
		{
			temp = i;//将公倍数赋值到临时变量
			break;//找到的第一个公倍数就是最小公倍数 跳出循环
		}
	}
	return temp;//返回临时变量
}
int main()
{
	int a, b;//定义a,b两个变量
	cout << "请输入数字a:";//提示输入a
	cin >> a;//输入a
	cout << "请输入数字b:";//提示输入b
	cin >> b;//输入b
	int gcd = Gcd(a, b);//调用最大公因数函数
	int lcm = LCM(a, b);//调用最小公倍数函数
	cout << "最大公因数为" << gcd << endl << "最小公倍数为" << lcm << endl;//输出结果
	return 0;
}