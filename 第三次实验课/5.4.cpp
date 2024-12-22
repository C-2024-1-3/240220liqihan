#include <iostream>
#include <string>

using namespace std;

// 定义学生类
class Student {
public:
    string id;
    double score;

    Student(string id, double score) : id(id), score(score) {}
};

// 定义max函数，使用指向对象的指针作为参数
void max(Student* students[], int size) {
    if (size <= 0) {
        cout << "No students to compare." << endl;
        return;
    }

    Student* maxStudent = students[0];

    for (int i = 1; i < size; ++i) {
        if (students[i]->score > maxStudent->score) {
            maxStudent = students[i];
        }
    }

    cout << "The student with the highest score is: " << maxStudent->id << " with a score of " << maxStudent->score << endl;
}

int main() {
    // 创建5个学生对象
    Student* students[5];
    students[0] = new Student("S001", 85.5);
    students[1] = new Student("S002", 90.0);
    students[2] = new Student("S003", 78.5);
    students[3] = new Student("S004", 92.5);
    students[4] = new Student("S005", 88.0);

    // 调用max函数，传入指向学生对象的指针数组
    max(students, 5);

    // 释放动态分配的内存
    for (int i = 0; i < 5; ++i) {
        delete students[i];
    }

    return 0;
}