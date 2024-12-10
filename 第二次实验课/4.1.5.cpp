#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1); 
    int len2 = strlen(s2); 
    if (len1 == 0 || len2 == 0 || len1 > len2) {
        return -1; 
    }
    for (int i = 0; i <= len2 - len1; ++i) { 
        bool found = true;
        for (int j = 0; j < len1; ++j) { 
            if (s2[i + j] != s1[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    char s1[100], s2[100]; 
    cout << "Enter string s1: ";
    cin.getline(s1, 100);
    cout << "Enter string s2: ";
    cin.getline(s2, 100); 

    int index = indexOf(s1, s2); 
    if (index != -1) {
        cout << "s1 is a substring of s2 at index: " << index << endl; // 如果是子串，输出下标
    }
    else {
        cout << "s1 is not a substring of s2" << endl; 
    }
    return 0;
}