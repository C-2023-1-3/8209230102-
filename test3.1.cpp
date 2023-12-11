#include<iostream>
using namespace std;
int Gcd(int &m, int &n)//定义最大公因数函数
{
	int temp;//定义临时变量
	for (int i = 1; i < m || i < n; i++)//设置循环
	{
		if (m % i == 0 && n % i == 0)//如果i作为a,b的取余数均为0 就都是a,b的因数
		{
			temp = i;//将目前最大的i覆盖赋值到临时变量
		}
	}
	return temp;//返回临时变量
}
int LCM(int &m, int &n)//定义最小公倍数函数
{
	int temp;//定义临时变量
	for (int i = m; i <= (m * n); i++)//设置循环
	{
		if (i % m == 0 && i % n == 0)//如果i作为被取余数,分别取余a,b结果为0 就是a,b的公倍数
		{
			temp = i;//将公倍数赋值到临时变量
			break;//找到的第一个公倍数就是最小公倍数 跳出循环
		}
	}
	return temp;//返回临时变量
}
int main()
{
	int m, n;//定义m,n
	cout << "请输入m的值:";//提示输入m的值
	cin >> m;//输入m
	cout << "请输入n的值:";//提示输入n的值
	cin >> n;//输入n
	int gcd = Gcd(m, n);//调用最大公因数函数
	int lcm = LCM(m, n);//调用最小公倍数函数
	cout << "m与n的最大公因数是:" << gcd << endl << "最小公倍数是:" << lcm << endl;//输出结果
	return 0;
}