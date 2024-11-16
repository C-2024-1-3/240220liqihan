#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double a = 0, n = 0, N = 0;

    cout << "请输入a的值" << endl;
    cin >> a;
    if (a < 0) {
        cout << "不能计算负数的平方根。" << endl;
        return 1;
    }
    n = a; 
    N = (n + a / n) / 2; 
    for (; fabs(N - n) >= 0.0001;) 
    {
        double temp = n;
        n = N;
        N = (n + a / n) / 2; 
    }
    cout << "a的平方根为:" << N << endl;

    return 0;
}