#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double C,T= 0;
	cout << "请输入华氏温度:" << endl;
	cin >> C;
	T = (C - 32) / 1.8;
	cout << "转化后的摄氏温度为:" <<fixed<<setprecision(2)<< T<<endl;

	return 0;

}