#include <iostream>
using namespace std;
void sortFromSmallToLarge(int abc[], int c)
{
    int a;
    int b;
    int k;
    for (a = 0; a < c - 1; a++)
    {
        for (b = 0; b < c - a - 1; b++)
        {
            if (abc[b] > abc[b + 1])
            {
                int temp;
                temp = abc[b];
                abc[b] = abc[b + 1];
                abc[b + 1] = temp;
            }
        }
    }
}
void swap(int num[], int abc[])
{
    int a;
    int i;
    int b;
    int c = 0;
    bool y;
    for (i = 0; i < 10; i++)
    {
        y = true;
        for (a = i + 1; a < 10; a++)
        {
            if (num[i] == num[a])
                y = false;
        }
        if (y)
        {
            abc[c] = num[i];
            c++;
        }
    }
    sortFromSmallToLarge(abc, c);
    for (int d = 0; d < c; d++)
        cout << abc[d] << " ";
}
int main()
{
    int num[10];
    for (int a = 0; a < 10; a++)
    {
        cin >> num[a];
    }
    int abc[10];
    swap(num, abc);
}