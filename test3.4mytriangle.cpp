#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3)//判断三角形是否有效
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)//两边之和大于第三边
	{
		return true;//返回true
	}
	else
	{
		return false;//返回false
	}
}
double area(double side1, double side2, double side3)//计算面积
{
	double s = (side1 + side2 + side3) / 2;//面积公式
	double square = sqrt(s * (s - side1) * (s - side2) * (s - side3));//面积公式
	return square;//返回面积大小
}