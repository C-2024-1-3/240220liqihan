#include <iostream>
using namespace std;
int main()
{
    double r, h;
    double V = 0;
    const double Pi = 3.14159; 
    cout << "请输入圆锥底的半径:" << endl;
    cin >> r;
    cout << "请输入锥体的高：" << endl;
    cin >> h;
    V = (Pi * r * r * h) / 3; 
    cout << "圆锥的体积为：" << V << endl;
    return 0;
}