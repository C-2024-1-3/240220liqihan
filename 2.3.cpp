#include <iostream>
using namespace std;
int main()
{
	double a, b, c, L = 0;
	cout << "���������ε����߳�" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	L =a + b + c;
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		if ((a == b) || (b == c) || (a == c))
		{
			cout << "����������ǵ���������" << endl;
		}
		else
		{
			cout << "��������β��ǵ���������" << endl;
		}
		cout << "�����ε��ܳ�Ϊ:" << L << endl;
	}
	else
	{
		cout << "�������߲��ܹ���������" << endl;
	}

	return 0;
}