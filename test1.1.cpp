#include<iostream>
using namespace std;
int main()
{
	//int i = k + 1; 没有初始化变量k 无法赋值
	int k = 1;
	int i = k + 1;
	//cout << i++ << endl; i++是先输出i的原始值 再对i进行+1的操作 在此步中 i++没有意义
	cout << ++i << endl;
	//int i = 1; i重定义 报错
	i = 1;
	//cout << i++ << endl; i++是先输出i的原始值 再对i进行+1的操作 在此步中 i++没有意义
	cout << ++i << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}