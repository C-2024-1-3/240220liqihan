#include <iostream>
using namespace std;
int main()
{
	double price = 0.8;
	int n = 2;
	int N = 2 * n;
	int day = 1;
	int sum = n;
	for (; N < 100;day++)
	{
		sum += N;
		int temp = n;
		n = N;
		N = 2 * n;
	}
	if (N > 100) 
	{
		sum -= N - 100;
	}
	double average = (sum * price) / day;
	cout << "平均每天花费为:" << average<< endl;
	cout << "一共购买了" << day << "天" << endl;

}