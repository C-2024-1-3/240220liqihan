#include <iostream>
using namespace std;
int add(int n)
{
	int m = (n + 1) * 2;
	return m;
}
int main()
{
	int a = 1;
	for (int i = 0; i < 10; i++)
	{
		int b = add(a);
		int temp = b;
		b = a;
		a = temp;
		i++;
	}
	cout << "第一天猴子吃了" << a << "个桃子" << endl;
}