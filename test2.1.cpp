#include<iostream>
using namespace std;
int main()
{
	char ch;//定义ch
	cout << "请输入一个字符" << endl;//提示输入
	cin >> ch;//输入
	int a = int(ch);//定义a 并将ASCII码赋值给a
	if (a >= 97 && a <= 122)//判断 如果ASCII码在小写字母之间
	{
		a -= 32;//ASCII码-32 变为大写
		cout << char(a);//输出大写后的字符
	}
	else//没有大写 或者已经为大写
	{
		a++;//ASCII码+1
		cout << a;//输出+1后的值
	}
	return 0;
}