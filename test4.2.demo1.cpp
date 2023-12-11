#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int len_s1 = strlen(s1);//求s1长度
	int len_s2 = strlen(s2);//求s2长度
	int equal = 0;//计数=0
	for (int i = 0; i < len_s2; i++)
	{
		equal = 0;//计数=0
		if (s1[0] == s2[i] && len_s1 <= (len_s2 - i + 1))//如果子串的第一项与母串的某一项相等 且子串长度小于母串剩余长度
		{
			equal++;//计数+1
			for (int j = 1; j < len_s1; j++)//建立循环
			{
				i++;//i+1
				if (s1[j] == s2[i])//如果子串下一项和母串下一项相等
				{
					equal++;//计数+1
				}
				else//有不相等
				{
					break;//跳出循环
				}
			}
			if (equal == len_s1)//如果相等数和s1长度相等
			{
				return (i - len_s1 + 2);//返回子串下标
			}
			else
			{
				continue;//否则进行下次循环
			}
		}
	}
	return -1;//不是子串关系 返回-1
}
int main()
{
	char s1[100], s2[100];//定义两个字符串
	cout << "请输入string1(子串):";//输入字符串s1
	cin.getline(s1, 100);
	cout << "请输入string2(母串):";//输入字符串s2
	cin.getline(s2, 100);
	int index = indexof(s1, s2);//调用函数
	cout << "indexof(" << s1 << " , " << s2 << ")is" << index << endl;
	return 0;
}