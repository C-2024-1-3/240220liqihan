#include <iostream>
using namespace std;
int main()
{
	char c;
    int letters = 0, spaces=0, numbers=0, others = 0;
	cout << "请输入一段字符" << endl;
    while ((c = cin.get()) != '\n')
    { 
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++; 
        }
        else if (c == ' ') 
        {
            spaces++; 
        }
        else if (c >= '0' && c <= '9')
        {
            numbers++;
        }
        else 
        {
            others++; 
        }
    }

    cout << "英文字母个数: " << letters << std::endl;
    cout << "空格个数: " << spaces << std::endl;
    cout << "数字字符个数: " << numbers << std::endl;
    cout << "其他字符个数: " << others << std::endl;

    return 0;
}