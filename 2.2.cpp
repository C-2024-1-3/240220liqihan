#include <iostream>
using namespace std;
int main()
{
	double x=0;
	double y=0;
	cout << "������x��ֵ:" << endl;
	cin >> x;
	if (x>0 && x< 10)
	{
		if (x>0 && x< 1)
		{
			y = 3 - 2 * x;
		}
		else
		{
			if (x>=1 && x< 5)
			{
				y = 2.0 / 4.0 * x + 1;
			}
			else
			{
				y = x * x;
			}
		}

	}
	cout << "y��ֵΪ:" <<y<< endl;

	return 0;

}