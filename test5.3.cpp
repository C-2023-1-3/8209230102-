#include<iostream>
using namespace std;
class Cuboid
{
public:
	void cinCuboid()//��Ա���� �ü������볤��߲���ֵ
	{
		cout << "�����볤���峤���:";
		cin >> lenth;
		cin >> width;
		cin >> height;
	}
	void printV()//��Ա���� ������������
	{
		v = lenth * width * height;
		cout << "V=" << v << endl;
	}
private:
	int lenth;
	int width;
	int height;
	int v;
};
int main()
{
	Cuboid c1, c2, c3;
	c1.cinCuboid();//���ø�ֵ����
	c2.cinCuboid();
	c3.cinCuboid();
	c1.printV();//���ü����������
	c2.printV();
	c3.printV();
	return 0;
}