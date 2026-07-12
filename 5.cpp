#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
};

int main()
{
    Student s[2];

    for(int i = 0; i < 2; i++)
    {
        cout << "Student " << i + 1 << " Name: ";
        cin >> s[i].name;

        cout << "Student " << i + 1 << " Roll No: ";
        cin >> s[i].roll;
    }

    cout << "\nStudent Record\n";

    for(int i = 0; i < 2; i++)
    {
        cout << "Name: " << s[i].name << endl;
        cout << "Roll No: " << s[i].roll << endl;
    }

    return 0;
}
