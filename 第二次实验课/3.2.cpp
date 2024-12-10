#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int num);
int main()
{
		const int total = 200;
		int count = 0; // ���ҵ�����������
		int num = 2;   // ��2��ʼ���ÿ�����Ƿ�Ϊ����

		while (count < total) 
		{
			if (is_prime(num)) 
			{
				// ����ҵ�������
				cout << num << "\t";
				++count; // �����ҵ�����������
				if (count % 10 == 0) 
				{
					// ÿ���10����������
				cout << endl;
				}
			}
			++num; // �����һ����
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