#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "请输入一个字符" << endl;
	cin >> ch;
	int a = int(ch);//定义a 并将ASCII码赋值给a
	if (a >= 97 && a <= 122)//判断是大写还是小写	
	{
		a -= 32;//变为大写
		cout << char(a);
	}
	else
	{
		a++;//ASCII码+1
		cout << a;
	}
	return 0;
}