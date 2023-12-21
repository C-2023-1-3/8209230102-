#include<iostream>
using namespace std;
class Point {
public:
	Point(int a, int b)//构造函数
	{
		x = a;
		y = b;
	}
	void setPoint(int i, int j)//修改点的坐标
	{
		x += i;
		y += j;
	}
	void display()//输出点的坐标
	{
		cout << "The point is(" << x << ',' << y << ')' << endl;
	}
private:
	int x;
	int y;
};
int main()
{
	Point p1(60, 80);//定义p1点
	p1.setPoint(20, 10);//修改p1点坐标
	p1.display();//输出p1点坐标
	return 0;
}