#include<iostream>
using namespace std;
class Time             // ����Time��
{
public:
	void cinTime()
	{
		cin >> hour;      //�����趨��ʱ�� 
		cin >> minute;
		cin >> sec;
	}

	void coutTime()
	{
		cout << hour << ':' << minute << ':' << sec << endl;
	}
private:            // ���ݳ�Ա��Ϊ˽�е�
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.cinTime();
	t1.coutTime();
	return 0;
}

/*
��д����Ҫ��
(1)�����ݳ�Ա��Ϊ˽�еģ�
(2)�����������Ĺ��ܸ�Ϊ�ɳ�Ա����ʵ�֣�
(3)�������ڶ����Ա������
Ȼ���������г��������ʲô��ԱӦָ��Ϊ���õ� ? ʲô��ԱӦָ��Ϊ˽�е� ? ʲô������÷������ж��� ? ʲô������������ⶨ�� ?
*/