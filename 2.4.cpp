#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	char n;
	cout << "�������һ������:" << endl;
	cin >> a;
	cout << "�����������:" << endl;
	cin >> n;
	cout << "������ڶ�������:" << endl;
	cin >> b;

	switch (n)
	{
	case '+':
		c = a + b;
		break;
	case '-':
		c = a - b;
		break;
	case '*':
		c = a * b;
		break;
	case '/':
		if (b != 0)
		{
			c = a / b;
		}
		else
		{
			cout << "�޷�����" << endl;
			return 1;
		}
		break;
	default:
		cout << "����!�Ƿ������" << endl;
		return 1;
	}
	cout << "���Ľ��Ϊ:" << c << endl;

	return 0;
}