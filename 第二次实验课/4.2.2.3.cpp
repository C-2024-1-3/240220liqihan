#include<iostream>
using namespace std;
void bubble_sort(int* arr, const int* size)//����������
{
	for (int i = 0; i < *size - 1; i++)
	{
		for (int j = 0; j < *size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int size;//���������С
	cout << "�����������С:";//���������С
	cin >> size;
	int* arr = new int[size];//��new���嶯̬����
	cout << "������������ֵ:";//����������ֵ
	for (int i = 0; i < size; i++)//����ѭ��������ֵ
	{
		cin >> arr[i];
	}
	bubble_sort(arr, &size);//����������
	cout << "����������Ϊ:";//��������ĺ���
	for (int i = 0; i < size; i++)
	{
		cout << *&arr[i] << ' ';//ʹ��ָ��������
	}
	delete[]arr;//ɾ�������Ķ�̬����
	return 0;
}
