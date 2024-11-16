#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "请输入两个正整数:" << endl;
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    c = a; 
    d = (a * b) / c;
    cout << "a和b的最大公约数为:" << c << endl;
    cout << "a和b的最小公倍数为:" << d << endl;

    return 0;
}