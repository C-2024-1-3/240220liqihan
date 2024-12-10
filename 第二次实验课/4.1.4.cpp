#include <iostream>
using namespace std;
void sort(int add[], int c)
{
	for (int i = 0; i < c - 1; i++)
	{
		for (int j = 0; j < c - 1 - i; j++)
		{
			if (add[j] > add[j + 1])
			{
				int temp;
				temp = add[j];
				add[j] = add[j + 1];
				add[j + 1] = temp;
			}
		}
	}
}
void merge(const int list1[], int size1, const int list2[], int size2,int list3[])
{
	int size3 = size1 + size2;
	for (int i = 0; i < size3; i++)
	{
		if (i < size1)
		{
			list3[i] = list1[i];
		}
		else
		{
			list3[i] = list2[i - size1];
		}
	}
}
int main()
{
	int size1, size2, size3;
	int list1[80], list2[80], list3[160];
	cout << "请输入数组1的长度："  << endl;
	cin >> size1;
	cout << "请输入数组1：" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入数组2的长度："  << endl;
	cin >> size2;
	cout << "请输入数组2：" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	size3 = size1 + size2;
	merge(list1,size1,list2,size2,list3);
	sort(list3, size3);
	cout << "合并之后的数组是:" << endl;
	for (int a = 0; a < size3; a++)
	{
		cout << list3[a] << endl;
	}
}
