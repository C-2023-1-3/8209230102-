#include<iostream>
using namespace std;
void count(const char s[], int counts[])//定义计数函数
{
	int len_s = strlen(s);//定义字符串长度
	for (int i = 0; i < len_s; i++)//创立循环
	{
		int m = int(s[i]) - 65;//在m与ASCII码之间建立关系
		if (m >= 0 && m < 26)//m为大写字母
		{
			counts[m]++;//相应字母计数+1
		}
		if (m >= 32 && m < 58)//m为小写字母
		{
			counts[m - 32]++;//相应字母计数+1
		}
		else//不是字母
		{
			continue;//进入下次循环
		}
	}
}
int main()
{
	char s[100];//定义字符数组
	cout << "请输入字符串:";//输入字符串
	cin.getline(s, 100);
	int counts[26];//定义整数数组
	for (int i = 0; i < 26; i++)//建立循环
	{
		counts[i] = 0;//给每个值都赋为0
	}
	count(s, counts);//调用函数
	for (int i = 0; i < 26; i++)//建立循环
	{
		if (counts[i] != 0)//打印有计数的字母
		{
			cout << char(i + 65) << ":" << counts[i] << endl;//打印字母及其计数
		}
	}
	return 0;
}