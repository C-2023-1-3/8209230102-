//student.h                (这是头文件，在此文件中进行类的声明)
#include<iostream>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value()	//赋值成员函数
	{
		cout << "set name is:";
		cin.getline(name, 20);//使用getline输入
		cout << "set sex is:(m/f) ";
		cin >> sex;
		cout << "set num is:";
		cin >> num;
	}
private:
	int num;
	char name[20];
	char sex;
};

