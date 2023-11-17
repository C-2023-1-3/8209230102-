#include<iostream>
#include<iomanip>//用setprecision要引用该头文件
using namespace std;
int main()
{
	double F;//定于华氏温度变量
	cout << "请输入华氏温度:";//提示输入华氏温度
	cin >> F;//输入华氏温度
	double C = (F - 32) / 1.8;//定义摄氏温度 计算并赋值
	cout << "摄氏度为:" <<fixed << setprecision(2) << C << endl;//输出摄氏度 使用fixed和setprecision保留两位小数
	return 0;
}