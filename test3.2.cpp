#include<iostream>
using namespace std;
bool is_prime(int num)//�����ж������ĺ���
{
	int j = 0;//����j=0
	for (int i = 1; i <= num; i++)//����ѭ��ö��
	{
		if (num % i == 0)
		{
			j++;//ÿ��һ������,j��+1
		}
	}
	if (j == 2)//���j=2,��numֻ����������,��������,����true
	{
		return true;
	}
	else {//��֮,����false
		return false;
	}
}
int main()
{
	bool prime;//����prime���ڽ��պ�������ֵ
	int n=1;//����n����ö��
	for (int j = 0; ;)//����ѭ��
	{
		n++;//n+1(��2��ʼö��)
		prime = is_prime(n);//���պ�������ֵ
		if (prime == true)//���������
		{
			cout << n << ' ';//���������
			j++;//����+1
			if (j % 10 == 0)//����Ѿ������10������
			{
				cout << endl;//����
			}
		}
		if (j == 200)//��������200������
		{
			break;//����ѭ��,��������
		}
	}
	return 0;
}