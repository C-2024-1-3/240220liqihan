#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	char n;
	cout << "请输入第一个数字:" << endl;
	cin >> a;
	cout << "请输入运算符:" << endl;
	cin >> n;
	cout << "请输入第二个数字:" << endl;
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
			cout << "无法计算" << endl;
			return 1;
		}
		break;
	default:
		cout << "错误!非法运算符" << endl;
		return 1;
	}
	cout << "最后的结果为:" << c << endl;

	return 0;
}