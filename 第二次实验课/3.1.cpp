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
	cout << "��������Ȼ��m��n:" << endl;
	cin >> m >> n;
	int c = gcd(m, n);
	int d = lcm(m, n, c);
	cout << "m��n�����Լ��Ϊ:" << c << endl;
	cout << "m��n����С������Ϊ:" << d << endl;
	
}