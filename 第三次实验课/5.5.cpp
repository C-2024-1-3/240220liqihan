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
		cout << "�޸ĺ������Ϊ��" << "(" << x << "," << y << ")" << endl;
	}
};

int main()
{
	Point p;
	cout << "��ʼ����Ϊ��";
	p.display();
	p.setPoint(10, 20);
	cout << "�޸�֮������Ϊ��";
	p.display();

	return 0;
}