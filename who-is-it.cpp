#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int totalMarks;

    Student() : id(0), section('\0'), totalMarks(0)
    {
        name[0] = '\0';
    }

    Student(int id, char *name, char section, int totalMarks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->totalMarks = totalMarks;
    }
};

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        Student students[3];

        for (int i = 0; i < 3; i++)
        {
            int id, marks;
            char name[101], section;
            cin >> id >> name >> section >> marks;
            students[i] = Student(id, name, section, marks);
        }

        Student bestStudent = students[0];

        for (int i = 1; i < 3; i++)
        {
            if (students[i].totalMarks > bestStudent.totalMarks ||
                (students[i].totalMarks == bestStudent.totalMarks && students[i].id < bestStudent.id))
            {
                bestStudent = students[i];
            }
        }

        cout << bestStudent.id << " " << bestStudent.name << " " << bestStudent.section << " " << bestStudent.totalMarks << endl;
    }

    return 0;
}
