#include<iostream>
using namespace std;
void count(const char s[], int counts[])//�����������
{
	int len_s = strlen(s);//�����ַ�������
	for (int i = 0; i < len_s; i++)//����ѭ��
	{
		int m = int(s[i]) - 65;//��m��ASCII��֮�佨����ϵ
		if (m >= 0 && m < 26)//mΪ��д��ĸ
		{
			counts[m]++;//��Ӧ��ĸ����+1
		}
		if (m >= 32 && m < 58)//mΪСд��ĸ
		{
			counts[m - 32]++;//��Ӧ��ĸ����+1
		}
		else//������ĸ
		{
			continue;//�����´�ѭ��
		}
	}
}
int main()
{
	char s[100];//�����ַ�����
	cout << "�������ַ���:";//�����ַ���
	cin.getline(s, 100);
	int counts[26];//������������
	for (int i = 0; i < 26; i++)//����ѭ��
	{
		counts[i] = 0;//��ÿ��ֵ����Ϊ0
	}
	count(s, counts);//���ú���
	for (int i = 0; i < 26; i++)//����ѭ��
	{
		if (counts[i] != 0)//��ӡ�м�������ĸ
		{
			cout << char(i + 65) << ":" << counts[i] << endl;//��ӡ��ĸ�������
		}
	}
	return 0;
}