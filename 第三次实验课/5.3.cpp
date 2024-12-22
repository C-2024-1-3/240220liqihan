#include <iostream>
using namespace std;
class Coboid
{
private:
	double length;
	double width;
	double height;
public:
	void setV()
	{
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void showV()
	{
		double V = length * width * height;
		cout << "该长方体的体积为：" << V << endl;
	}
};
int main()
{
	Coboid c1;
	Coboid c2;
	Coboid c3;
	c1.setV();
	c1.showV();
	c2.setV();
	c2.showV();
	c3.setV();
	c3.showV();
	return 0;
}