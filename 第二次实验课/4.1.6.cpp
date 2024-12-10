#include <iostream>
#include <string>
using namespace std;
void count(const char s[], int counts[])
{
	int len1 = strlen(s);
	for (int i = 0; i < len1; i++)
	{
		char ch = s[i];
		if (ch >= 'A' && ch <= 'Z')
		{
			ch += 'a' - 'A';
		}
		if (ch >= 'a' && ch <= 'z')
		{
			counts[ch - 'a']++;
		}
	}
}
int main()
{
	const int a = 26;
	int counts[a] = { 0 };
	char input[100];
	cout << "Enter a string:" << endl;
	cin.getline(input, 100);
	count(input, counts);
	for (int i = 0; i < a; i++)
	{
		if (counts[i] != 0)
		{
			cout << char('a' + i) << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}