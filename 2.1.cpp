#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "������һ���ַ�" << endl;
	cin >> ch;
	int a = int(ch);//����a ����ASCII�븳ֵ��a
	if (a >= 97 && a <= 122)//�ж��Ǵ�д����Сд	
	{
		a -= 32;//��Ϊ��д
		cout << char(a);
	}
	else
	{
		a++;//ASCII��+1
		cout << a;
	}
	return 0;
}