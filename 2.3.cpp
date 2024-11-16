#include <iostream>
using namespace std;
int main()
{
	double a, b, c, L = 0;
	cout << "输入三角形的三边长" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	L =a + b + c;
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		if ((a == b) || (b == c) || (a == c))
		{
			cout << "这个三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "这个三角形不是等腰三角形" << endl;
		}
		cout << "三角形的周长为:" << L << endl;
	}
	else
	{
		cout << "这三条边不能构成三角形" << endl;
	}

	return 0;
}