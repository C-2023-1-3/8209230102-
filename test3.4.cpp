#include"mytriangle.h"
int main()
{
	int side1, side2, side3;//定义三边长
	cout << "请分别输入三边边长" << endl;//提醒输入三边长
	cin >> side1 >> side2 >> side3;//输入三边长
	int val = is_valid(side1, side2, side3);//调用判断三角形是否有效的函数
	if (val == true)//如果有效
	{
		double square = area(side1, side2, side3);//调用计算面积函数
		cout << "您定义的三角形面积为:" << square << endl;//输出面积
	}
	else//如果无效
	{
		cout << "您定义的三边长不合法" << endl;//提示无效
	}
	return 0;
}