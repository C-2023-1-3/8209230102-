#include<iostream>
#define π 3.14;//定义宏常量 防止值被改
using namespace std;
int main()
{
	double r;//定义半径
	double h;//定义高度
	cout << "请输入圆锥底面半径:";//提示输入半径
	cin >> r;//输入半径
	cout << "请输入圆锥高:";//提示输入高
	cin >> h;//输入高
	double s = (r * r) * π;//s=πr^2 定义s并给其赋值
	double v = s * h * (1.0 / 3);//v=1/3sh 定义v并给其赋值
	cout << "圆锥的体积为" << v << endl;
	return 0;
}