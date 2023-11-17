#include<iostream>
using namespace std;
int main()
{
	char c;//定义一个字符
	int letter = 0, space = 0, number = 0, other = 0;//定义各种字符类型
	cout << "请输入一串字符串" << endl;//提示输入字符串
	while ((c=cin.get()) != '\n')//如果cin中不包含换行 循环继续
	{
		if (c>='a'&&c<='z' || c>='A'&&c<='Z')//判断字母
			letter++;//字母字符+1
		else if (c==' ')//判断空格
			space++;//空格字符+1
		else if (c>='0'&&c<='9')//判断数字
			number++;//数字字符+1
		else
			other++;//否则其他字符+1
	}
	cout << "字母字符数量为" << letter << "空格字符数量为" << space << "数字字符数量为" << number << "其他字符数量为" << other << endl;//输出各类字符数量
	return 0;
}