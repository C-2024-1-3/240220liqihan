#include <iostream>
using namespace std;
int main()
{
    double r, h;
    double V = 0;
    const double Pi = 3.14159; 
    cout << "������Բ׶�׵İ뾶:" << endl;
    cin >> r;
    cout << "������׶��ĸߣ�" << endl;
    cin >> h;
    V = (Pi * r * r * h) / 3; 
    cout << "Բ׶�����Ϊ��" << V << endl;
    return 0;
}