#include<iostream>
using namespace std;
void change_state(bool* arr, int num1)//����ı�״̬����
{
	for (int i = num1; i < 100; )//�ӵ�i�ʼ
	{
		arr[i] = (!arr[i]);//��i��ȡ��
		int j = i + 1;//�±�+1
		j += j + 1;//��j+1������ȡ��
		i = j - 1;
	}
}
int main()
{
	bool arr[100];//����һ���������͵�����
	for (int i = 0; i < 100; i++)
	{
		arr[i] = true;//�����������ֵ��Ϊtrue(��)
	}
	for (int i = 1; i < 100; i++)//��ѧ��2��ѧ��100�ı�״̬
	{
		change_state(arr, i);//���øı�״̬����
	}
	cout << "���ŵ�����:" << endl;//��ӡ���ŵ���
	for (int i = 0; i < 100; i++)//����ѭ��
	{
		if (arr[i] == true)//�������
		{
			cout << (i+1) << ' ';//��ӡ���
		}
	}
	return 0;
}