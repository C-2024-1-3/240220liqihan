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
		if (a[i])//���a[i]��ֵ����ģ���ôif���ſ���ִ�У�����a[i]�Դ�������
		{
		cout << i+1 << " "; 
		}
	}
	cout << endl;

	return 0;
}