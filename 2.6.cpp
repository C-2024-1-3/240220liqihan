#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "����������������:" << endl;
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    c = a; 
    d = (a * b) / c;
    cout << "a��b�����Լ��Ϊ:" << c << endl;
    cout << "a��b����С������Ϊ:" << d << endl;

    return 0;
}