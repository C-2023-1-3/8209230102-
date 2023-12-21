#include<iostream>
using namespace std;
class Student
{
	friend Student Max(Student* stuarr);//声明友元
public:
	Student(int a, int b) :id(a), mark(b){}//初始化列表
	void getInformation()//输出学生信息
	{
		cout << id << "号学生取得" << mark << "分的最高分" << endl;
	}
private:
	int id;
	int mark;
};
Student Max(Student* stuarr)//定义比较最大值函数
{
	Student s_Max(0,-1);//最大值
	for (int i = 0; i < 5; i++)
	{
		if (stuarr[i].mark > s_Max.mark)
		{
			s_Max.mark = stuarr[i].mark;
			s_Max.id = stuarr[i].id;
		}
	}
	return s_Max;//返回最大值
}
int main()
{
	Student stuarr[5] = {							//定义student类的数组
		{1,20},{2,40},{3,23},{4,100},{5,96}
	};
	Student s_max=Max(stuarr);//调用比较最大值函数
	s_max.getInformation();
	return 0;
}