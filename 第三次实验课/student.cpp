//student.cpp                     在此文件中进行函数的定义
#include <iostream>
using namespace std;
#include"student.h"            
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int n,const char*na,char s)
{
    num = n;
    strcpy(name, na);//调用一个strcpy函数，用于对字符串赋值
    sex = s;
}