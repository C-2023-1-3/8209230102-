#include<iostream>
using namespace std;
class Point {
public:
	Point(int a, int b)//���캯��
	{
		x = a;
		y = b;
	}
	void setPoint(int i, int j)//�޸ĵ������
	{
		x += i;
		y += j;
	}
	void display()//����������
	{
		cout << "The point is(" << x << ',' << y << ')' << endl;
	}
private:
	int x;
	int y;
};
int main()
{
	Point p1(60, 80);//����p1��
	p1.setPoint(20, 10);//�޸�p1������
	p1.display();//���p1������
	return 0;
}