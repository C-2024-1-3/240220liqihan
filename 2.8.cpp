#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double a = 0, n = 0, N = 0;

    cout << "������a��ֵ" << endl;
    cin >> a;
    if (a < 0) {
        cout << "���ܼ��㸺����ƽ������" << endl;
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
    cout << "a��ƽ����Ϊ:" << N << endl;

    return 0;
}