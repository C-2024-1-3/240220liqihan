#include <iostream>
using namespace std;
int main()
{
	bool a[100] = { false };
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 0; j <100; j += i)
		{
			a[j] = !a[j];
		}
	}
	cout << "Open lockers: ";
	for (int i = 0; i < 100; ++i) {
		if (a[i])//如果a[i]的值是真的，那么if语句才可以执行，本身a[i]自带条件。
		{
		cout << i+1 << " "; 
		}
	}
	cout << endl;

	return 0;
}