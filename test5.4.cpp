#include<iostream>
using namespace std;
class Student
{
	friend Student Max(Student* stuarr);//������Ԫ
public:
	Student(int a, int b) :id(a), mark(b){}//��ʼ���б�
	void getInformation()//���ѧ����Ϣ
	{
		cout << id << "��ѧ��ȡ��" << mark << "�ֵ���߷�" << endl;
	}
private:
	int id;
	int mark;
};
Student Max(Student* stuarr)//����Ƚ����ֵ����
{
	Student s_Max(0,-1);//���ֵ
	for (int i = 0; i < 5; i++)
	{
		if (stuarr[i].mark > s_Max.mark)
		{
			s_Max.mark = stuarr[i].mark;
			s_Max.id = stuarr[i].id;
		}
	}
	return s_Max;//�������ֵ
}
int main()
{
	Student stuarr[5] = {							//����student�������
		{1,20},{2,40},{3,23},{4,100},{5,96}
	};
	Student s_max=Max(stuarr);//���ñȽ����ֵ����
	s_max.getInformation();
	return 0;
}