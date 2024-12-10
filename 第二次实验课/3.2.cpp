#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int num);
int main()
{
		const int total = 200;
		int count = 0; // 已找到的素数数量
		int num = 2;   // 从2开始检查每个数是否为素数

		while (count < total) 
		{
			if (is_prime(num)) 
			{
				// 输出找到的素数
				cout << num << "\t";
				++count; // 增加找到的素数计数
				if (count % 10 == 0) 
				{
					// 每输出10个素数换行
				cout << endl;
				}
			}
			++num; // 检查下一个数
		}

		return 0;

}
bool is_prime(int num)
{
	if (num ==1)
	{
		return false;
	}
	if (num == 2)
	{
		return true;
	}
	if (num % 2 == 0)
	{
		return false;
	}
	for (int i = 3; i <= sqrt(num); i += 2)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}