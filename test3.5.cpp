#include<iostream>
using namespace std;
int peach_number(int num1,int num2)//������������ĺ���
{
	if (num2 != 0)//�ж������Ƿ��㹻
	{
		int temp = (num1 + 1) * 2;//����ǰһ���������
		num1 = temp;//��ֵ��num1
		num2--;//����-1
		return peach_number(num1, num2);//�ݹ�
	}
	else//��������ﵽҪ��
	{
		return num1;//���ؼ������num1
	}
}
int main()
{
	int n = 1;//��ʮ��ֻʣһ������
	cout << "��һ����ӹ�ժ��" << peach_number(n,10) << "������" << endl;//���ú���,�ֱ��������ڸ���������
	return 0;
}