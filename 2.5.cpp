#include <iostream>
using namespace std;
int main()
{
	char c;
    int letters = 0, spaces=0, numbers=0, others = 0;
	cout << "������һ���ַ�" << endl;
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

    cout << "Ӣ����ĸ����: " << letters << std::endl;
    cout << "�ո����: " << spaces << std::endl;
    cout << "�����ַ�����: " << numbers << std::endl;
    cout << "�����ַ�����: " << others << std::endl;

    return 0;
}