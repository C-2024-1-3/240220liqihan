#include<iostream>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)//���庯��
{
	int s_len = strlen(hexString);//�������鳤��
	int num = 0;//�������=0
	for (int i = 0; i < s_len; i++)//����ѭ��
	{
		if (hexString[i] >= '0' && hexString[i] <= '9')//����0-9����ֵ
		{
			num = num + (((int(hexString[i])) - 48) * pow(16, s_len - i - 1));//ת����int���͵�0-9 ������Ӧλ������16��x-1�η�
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')//����A-F����ֵ
		{
			num = num + (((int(hexString[i])) - 55) * pow(16, s_len - i - 1));//ת��Ϊint���͵�10-15 ������Ӧλ������16��x-1�η�
		}
		else if (hexString[i] >= 'a' && hexString[i] <= 'f')//����a-f��Сд��ֵ
		{
			num = num + (((int(hexString[i])) - 87) * pow(16, s_len - i - 1));//ת��Ϊint���͵�10-15 ������Ӧλ������16��x-1�η�
		}
		else {//���������ַ�
			cout << "��ֵ����16����" << endl;//��ʾ�ַ������Ϸ�
			return 0;//���ش���ֵ
		}
	}
	return num;

}
int main()
{
	char s[50];//��������
	cout << "������16��������:";//��������
	cin.getline(s, 50);
	int dec = parseHex(s);//���ú���
	cout << "ʮ��������Ϊ:" << dec << endl;//���ʮ��������
}
