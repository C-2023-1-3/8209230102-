#include<iostream>
using namespace std;
int Gcd(int &m, int &n)//���������������
{
	int temp;//������ʱ����
	for (int i = 1; i < m || i < n; i++)//����ѭ��
	{
		if (m % i == 0 && n % i == 0)//���i��Ϊa,b��ȡ������Ϊ0 �Ͷ���a,b������
		{
			temp = i;//��Ŀǰ����i���Ǹ�ֵ����ʱ����
		}
	}
	return temp;//������ʱ����
}
int LCM(int &m, int &n)//������С����������
{
	int temp;//������ʱ����
	for (int i = m; i <= (m * n); i++)//����ѭ��
	{
		if (i % m == 0 && i % n == 0)//���i��Ϊ��ȡ����,�ֱ�ȡ��a,b���Ϊ0 ����a,b�Ĺ�����
		{
			temp = i;//����������ֵ����ʱ����
			break;//�ҵ��ĵ�һ��������������С������ ����ѭ��
		}
	}
	return temp;//������ʱ����
}
int main()
{
	int m, n;//����m,n
	cout << "������m��ֵ:";//��ʾ����m��ֵ
	cin >> m;//����m
	cout << "������n��ֵ:";//��ʾ����n��ֵ
	cin >> n;//����n
	int gcd = Gcd(m, n);//���������������
	int lcm = LCM(m, n);//������С����������
	cout << "m��n�����������:" << gcd << endl << "��С��������:" << lcm << endl;//������
	return 0;
}