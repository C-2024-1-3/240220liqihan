//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
using namespace std;
#include"student.h"            
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int n,const char*na,char s)
{
    num = n;
    strcpy(name, na);//����һ��strcpy���������ڶ��ַ�����ֵ
    sex = s;
}