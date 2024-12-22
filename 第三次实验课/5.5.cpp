#include <iostream>
using namespace std;
class Point {
private:
	int x;
	int y;

public:
	Point():x(60),y(80){}

	void setPoint(int i, int j)
	{
		x = i + 60;
		y = j + 80;
	}
	void display()
	{
		cout << "修改后的坐标为：" << "(" << x << "," << y << ")" << endl;
	}
};

int main()
{
	Point p;
	cout << "初始坐标为：";
	p.display();
	p.setPoint(10, 20);
	cout << "修改之后坐标为：";
	p.display();

	return 0;
}