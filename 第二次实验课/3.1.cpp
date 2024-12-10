#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	while ( b!= 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int lcm(int a, int b, int& c)
{
	return (a * b / c);
}
int main()
{
	int m, n;
	cout << "请输入自然数m和n:" << endl;
	cin >> m >> n;
	int c = gcd(m, n);
	int d = lcm(m, n, c);
	cout << "m和n的最大公约数为:" << c << endl;
	cout << "m和n的最小公倍数为:" << d << endl;
	
}