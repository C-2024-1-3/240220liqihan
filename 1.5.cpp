#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double C,T= 0;
	cout << "�����뻪���¶�:" << endl;
	cin >> C;
	T = (C - 32) / 1.8;
	cout << "ת����������¶�Ϊ:" <<fixed<<setprecision(2)<< T<<endl;

	return 0;

}