#include"mytriangle.h"
int main()
{
	int side1, side2, side3;
	cout << "请分别输入三边边长" << endl;
	cin >> side1 >> side2 >> side3;
	int val = is_valid(side1, side2, side3);
	if (val == true)
	{
		double square = area(side1, side2, side3); /
			cout << "定义的三角形面积为:" << square << endl;
	}
	else
	{
		cout << "定义的三边长不合法" << endl;
	}
	return 0;
}