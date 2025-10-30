#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    char gender;
    string branch;
};

int main() {
    Student *students = new Student[100];
    
    Student *temp = new Student[200];

    for(int i = 0; i < 100; i++) {
        temp[i] = students[i];
    }

    delete[] students;
    students = temp;

    cout << "Array successfully resized from 100 to 200 Student records.";

    return 0;
}

