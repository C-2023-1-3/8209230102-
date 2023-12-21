#include<iostream>
using namespace std;
class Cuboid
{
public:
	void cinCuboid()//成员函数 用键盘输入长宽高并赋值
	{
		cout << "请输入长方体长宽高:";
		cin >> lenth;
		cin >> width;
		cin >> height;
	}
	void printV()//成员函数 计算体积并输出
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
	c1.cinCuboid();//调用赋值函数
	c2.cinCuboid();
	c3.cinCuboid();
	c1.printV();//调用计算输出函数
	c2.printV();
	c3.printV();
	return 0;
}