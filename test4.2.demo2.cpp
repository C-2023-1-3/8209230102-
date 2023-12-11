#include<iostream>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)//定义函数
{
	int s_len = strlen(hexString);//定义数组长度
	int num = 0;//定义计数=0
	for (int i = 0; i < s_len; i++)//建立循环
	{
		if (hexString[i] >= '0' && hexString[i] <= '9')//对于0-9的数值
		{
			num = num + (((int(hexString[i]))-48) * pow(16, s_len - i - 1));//转换成int类型的0-9 根据相应位数乘上16的x-1次方
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')//对于A-F的数值
		{
			num = num +(((int(hexString[i])) - 55) * pow(16, s_len - i - 1));//转换为int类型的10-15 根据相应位数乘上16的x-1次方
		}
		else if (hexString[i] >= 'a' && hexString[i] <= 'f')//对于a-f的小写数值
		{
			num = num +(((int(hexString[i])) - 87) * pow(16, s_len - i - 1));//转换为int类型的10-15 根据相应位数乘上16的x-1次方
		}
		else {//对于其他字符
			cout << "数值不是16进制" << endl;//提示字符串不合法
			return 0;//返回错误值
		}
	}
	return num;
	
}
int main()
{
	char s[50];//定义数组
	cout << "请输入16进制数字:";//输入数组
	cin.getline(s, 50);
	int dec=parseHex(s);//调用函数
	cout << "十进制数字为:" << dec << endl;//输出十进制数字
}