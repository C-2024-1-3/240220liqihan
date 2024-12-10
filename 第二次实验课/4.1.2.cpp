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
	cout << "请输入数组的值：" << endl;
	double m[10];
	// 使用循环读取数组元素
	for (int i = 0; i < 10; i++) 
	{
		cin >> m[i];
	}
	// 调用排序函数
	sort(m);

	// 输出排序后的数组
	cout << "冒泡排序之后的数组为：" << endl;
	for (int i = 0; i < 10; i++) {
		cout << m[i] << " ";
	}
	cout << endl;

	return 0;
	
}