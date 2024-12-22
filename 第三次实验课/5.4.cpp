#include <iostream>
#include <string>

using namespace std;

// ����ѧ����
class Student {
public:
    string id;
    double score;

    Student(string id, double score) : id(id), score(score) {}
};

// ����max������ʹ��ָ������ָ����Ϊ����
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
    // ����5��ѧ������
    Student* students[5];
    students[0] = new Student("S001", 85.5);
    students[1] = new Student("S002", 90.0);
    students[2] = new Student("S003", 78.5);
    students[3] = new Student("S004", 92.5);
    students[4] = new Student("S005", 88.0);

    // ����max����������ָ��ѧ�������ָ������
    max(students, 5);

    // �ͷŶ�̬������ڴ�
    for (int i = 0; i < 5; ++i) {
        delete students[i];
    }

    return 0;
}