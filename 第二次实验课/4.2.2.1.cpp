#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int len_s1 = strlen(s1);//��s1����
	int len_s2 = strlen(s2);//��s2����
	int equal = 0;//����=0
	for (int i = 0; i < len_s2; i++)
	{
		equal = 0;//����=0
		if (s1[0] == s2[i] && len_s1 <= (len_s2 - i + 1))//����Ӵ��ĵ�һ����ĸ����ĳһ����� ���Ӵ�����С��ĸ��ʣ�೤��
		{
			equal++;//����+1
			for (int j = 1; j < len_s1; j++)//����ѭ��
			{
				i++;//i+1
				if (s1[j] == s2[i])//����Ӵ���һ���ĸ����һ�����
				{
					equal++;//����+1
				}
				else//�в����
				{
					break;//����ѭ��
				}
			}
			if (equal == len_s1)//����������s1�������
			{
				return (i - len_s1 + 1);//�����Ӵ��±�
			}
			else
			{
				continue;//��������´�ѭ��
			}
		}
	}
	return -1;//�����Ӵ���ϵ ����-1
}
int main()
{
	char s1[100], s2[100];//���������ַ���
	cout << "������string1(�Ӵ�):";//�����ַ���s1
	cin.getline(s1, 100);
	cout << "������string2(ĸ��):";//�����ַ���s2
	cin.getline(s2, 100);
	int index = indexof(s1, s2);//���ú���
	cout << "indexof(" << s1 << " , " << s2 << ")is" << index << endl;
	return 0;
}
