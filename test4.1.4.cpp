#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int size3 = size1 + size2;//list3�ĳ���
	for (int i = 0; i < size3; i++)//����ѭ�� ��list3��ֵ
	{
		if (i < size1)//���i<list1�ĳ��� ��list1�е���ֵ���θ���list3
			list3[i] = list1[i];
		else//i������list1�ĳ��� ��list2�е���ֵ���θ���list3
			list3[i] = list2[i - size1];//��list2[0]��ʼ��ֵ
	}
	for (int i = 0; i < size3 - 1; i++)//ð������
	{
		for (int j = 0; j < size3 - i - 1; j++)
		{
			if (list3[j] > list3[j + 1])
			{
				int temp;
				temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}
	}
	cout << "�ϲ��������������:";//��ʾ�ϲ���Ľ��
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << ' ';//����ϲ���Ľ��
	}
}
int main()
{
	int size1, size2;//�������鳤��
	cout << "������list1�ĳ���:";//��ʾ����size1
	cin >> size1;//����size1
	int* list1 = new int[size1];//ʹ��new �ó�����ֵ�����С
	cout << "������list1����ֵ:";//��ʾ����list1��ֵ
	for (int i = 0; i < size1; i++)//����ѭ��
	{
		cin >> list1[i];//������ֵ
	}
	cout << "������list2�ĳ���:";//��ʾ����size2
	cin >> size2;//����size2
	int* list2 = new int[size2];//ʹ��new �ó�����ֵ�����С
	cout << "������list2����ֵ:";//��ʾ����list2��ֵ
	for (int i = 0; i < size2; i++)//����ѭ��
	{
		cin >> list2[i];//������ֵ
	}
	int* list3 = new int[size1 + size2];//ʹ��new ��������list3
	merge(list1, size1, list2, size2, list3);//���ú���
	return 0;
}