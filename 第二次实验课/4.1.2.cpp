#include <iostream>
using namespace std;
void sort(double a[10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (a[j] > a[j+ 1])
			{
				int temp = a[i + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main()
{
	cout << "�����������ֵ��" << endl;
	double m[10];
	// ʹ��ѭ����ȡ����Ԫ��
	for (int i = 0; i < 10; i++) 
	{
		cin >> m[i];
	}
	// ����������
	sort(m);

	// �������������
	cout << "ð������֮�������Ϊ��" << endl;
	for (int i = 0; i < 10; i++) {
		cout << m[i] << " ";
	}
	cout << endl;

	return 0;
	
}