//main.cpp                      主函数模块
#include <iostream>             //将类声明头文件包含进来
#include "student.h"
int main()
{
	Student stud;                //定义对象
	stud.set_value();			 //执行stud对象的set_value函数
	stud.display();              //执行stud对象的display函数
	return 0;
}

//请完善该程序，在类中增加一个对数据成员赋初值的成员函数set_value。上机调试并运行。