/*#include <iostream>
using namespace std;
struct Result
{
    int marks;
    char grade;
};
struct Record
{
    int rollNo;
    Result r;
};
int main()
{
    Record student;
    cout << "Enter Roll Number: ";
    cin >> student.rollNo;
    cout << "Enter Marks: ";
    cin >> student.r.marks;
    cout << "Enter Grade: ";
    cin >> student.r.grade;
    cout << "\nStudent Record" << endl;
    cout << "Roll Number: " << student.rollNo << endl;
    cout << "Marks: " << student.r.marks << endl;
    cout << "Grade: " << student.r.grade << endl;
    return 0;
}*/
/*task2
#include <iostream>
using namespace std;
struct Data
{
    string name;
    string color;
};
struct Car
{
    int model;
    int topSpeed;
    int gears;
    Data d;
};
int main()
{
    Car c;
    cout << "Enter Car Name: ";
    cin >> c.d.name;
    cout << "Enter Car Color: ";
    cin >> c.d.color;
    cout << "Enter Model: ";
    cin >> c.model;
    cout << "Enter Top Speed: ";
    cin >> c.topSpeed;
    cout << "Enter Number of Gears: ";
    cin >> c.gears;

    if (c.topSpeed > 200 && c.gears > 4)
    {
        cout << "\nCar Details" << endl;
        cout << "Name: " << c.d.name << endl;
        cout << "Color: " << c.d.color << endl;
        cout << "Model: " << c.model << endl;
        cout << "Top Speed: " << c.topSpeed << endl;
        cout << "Gears: " << c.gears << endl;
    }
    else
    {
        cout << "\nYour car is not suitable for the race." << endl;
    }
    return 0;
}*/
/*task3
#include <iostream>
using namespace std;
struct Complex
{
    float real;
    float imaginary;
};
void addition(Complex n1, Complex n2)
{
    cout << "\nAddition = "
         << n1.real + n2.real << " + "
         << n1.imaginary + n2.imaginary << "i" << endl;
}
void subtract(Complex n1, Complex n2)
{
    cout << "Subtraction = "
         << n1.real - n2.real << " + "
         << n1.imaginary - n2.imaginary << "i" << endl;
}
void multiply(Complex n1, Complex n2)
{
    float realPart, imagPart;
    realPart = (n1.real * n2.real) - (n1.imaginary * n2.imaginary);
    imagPart = (n1.real * n2.imaginary) + (n1.imaginary * n2.real);
    cout << "Multiplication = "
         << realPart << " + "
         << imagPart << "i" << endl;
}
int main()
{
    Complex num1, num2;
    cout << "Enter real part of first number: ";
    cin >> num1.real;
    cout << "Enter imaginary part of first number: ";
    cin >> num1.imaginary;
    cout << "Enter real part of second number: ";
    cin >> num2.real;
    cout << "Enter imaginary part of second number: ";
    cin >> num2.imaginary;
    addition(num1, num2);
    subtract(num1, num2);
    multiply(num1, num2);
    return 0;
}*/
/*task4
#include <iostream>
#include <string>
using namespace std;
struct Author
{
    string name;
    string nationality;
};
struct Book
{
    string title;
    string ISBN;
    double price;
    int publicationYear;
    Author a;
};
int main()
{
    Book b[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter details of Book " << i + 1 << endl;
        cout << "Enter Title: ";
        cin >> b[i].title;
        cout << "Enter ISBN: ";
        cin >> b[i].ISBN;
        cout << "Enter Price: ";
        cin >> b[i].price;
        cout << "Enter Publication Year: ";
        cin >> b[i].publicationYear;
        cout << "Enter Author Name: ";
        cin >> b[i].a.name;
        cout << "Enter Author Nationality: ";
        cin >> b[i].a.nationality;
    }
    cout << "\nBooks Published After 2015" << endl;
    for (int i = 0; i < 3; i++)
    {
        if (b[i].publicationYear > 2015)
        {
            cout << "\nTitle: " << b[i].title << endl;
            cout << "ISBN: " << b[i].ISBN << endl;
            cout << "Price: " << b[i].price << endl;
            cout << "Publication Year: " << b[i].publicationYear << endl;
            cout << "Author Name: " << b[i].a.name << endl;
            cout << "Author Nationality: " << b[i].a.nationality << endl;
        }
    }
    return 0;
}*/
/*task5
#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string name;
    int rollNo;
    float marks[3];
    float gpa;
};
void calculateGPA(Student &s)
{
    float average;
    average = (s.marks[0] + s.marks[1] + s.marks[2]) / 3;
    s.gpa = average / 10;

    if (s.gpa > 4.0)
    {
        s.gpa = 4.0;
    }
}
void displayStudent(Student s)
{
    cout << "\nStudent Details" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Marks Subject 1: " << s.marks[0] << endl;
    cout << "Marks Subject 2: " << s.marks[1] << endl;
    cout << "Marks Subject 3: " << s.marks[2] << endl;
    cout << "GPA: " << s.gpa << endl;
}
int main()
{
    Student s[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Enter Name: ";
        cin >> s[i].name;

        cout << "Enter Roll Number: ";
        cin >> s[i].rollNo;

        cout << "Enter Marks of Subject 1: ";
        cin >> s[i].marks[0];

        cout << "Enter Marks of Subject 2: ";
        cin >> s[i].marks[1];

        cout << "Enter Marks of Subject 3: ";
        cin >> s[i].marks[2];

        calculateGPA(s[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        displayStudent(s[i]);
    }
    return 0;
}*/
/*task6
#include <iostream>
#include <string>
using namespace std;
struct Account
{
    string accountNumber;
    string holderName;
    double balance;
};
Account createAccount()
{
    Account a;
    cout << "Enter Account Number: ";
    cin >> a.accountNumber;
    cout << "Enter Holder Name: ";
    cin >> a.holderName;
    cout << "Enter Initial Balance: ";
    cin >> a.balance;
    return a;
}

void deposit(Account &a, double amount)
{
    a.balance = a.balance + amount;
    cout << "\nDeposit Receipt" << endl;
    cout << "Deposited Amount: " << amount << endl;
    cout << "Current Balance: " << a.balance << endl;
}
bool withdraw(Account &a, double amount)
{
    if (amount <= a.balance)
    {
        a.balance = a.balance - amount;
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Account user;
    double amount;
    user = createAccount();
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    deposit(user, amount);
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    if (withdraw(user, amount))
    {
        cout << "\nWithdrawal Successful" << endl;
        cout << "Remaining Balance: " << user.balance << endl;
    }
    else
    {
        cout << "\nInsufficient Funds" << endl;
    }
    return 0;
}*/
///////////////////////////////////////////////////////////Home task//////////////////////////////////////////////////////////////////////////////////////////////////
/*task1
#include <iostream>
#include <string>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
struct Phonebook
{
    string name;
    string city;
    string phoneNumber;
    Date d;
};
int main()
{
    Phonebook p;
    cout << "Enter Name: ";
    cin >> p.name;
    cout << "Enter City: ";
    cin >> p.city;
    cout << "Enter Phone Number: ";
    cin >> p.phoneNumber;
    cout << "Enter Day: ";
    cin >> p.d.day;
    cout << "Enter Month: ";
    cin >> p.d.month;
    cout << "Enter Year: ";
    cin >> p.d.year;
    cout << "\nPhonebook Details" << endl;
    cout << "Name: " << p.name << endl;
    cout << "City: " << p.city << endl;
    cout << "Phone Number: " << p.phoneNumber << endl;
    cout << "Date: " << p.d.day << "/" << p.d.month << "/" << p.d.year << endl;
    return 0;
}*/
/*task2
#include <iostream>
using namespace std;
struct Parameters
{
    float length;
    float width;
};
struct Result
{
    float area;
    float perimeter;
};

struct Rectangle
{
    Parameters p;
    Result r;
};
int main()
{
    Rectangle rect;
    cout << "Enter Length: ";
    cin >> rect.p.length;
    cout << "Enter Width: ";
    cin >> rect.p.width;
    rect.r.area = rect.p.length * rect.p.width;
    rect.r.perimeter = 2 * (rect.p.length + rect.p.width);
    cout << "\nRectangle Details" << endl;
    cout << "Length: " << rect.p.length << endl;
    cout << "Width: " << rect.p.width << endl;
    cout << "Area: " << rect.r.area << endl;
    cout << "Perimeter: " << rect.r.perimeter << endl;
    return 0;
}*/
/*task3
#include <iostream>
#include <string>
using namespace std;
struct Instructor
{
    string name;
    string department;
};
struct Course
{
    string courseCode;
    string courseName;
    int creditHours;
    int maxSeats;
    int enrolledStudents;
    Instructor ins;
};
bool enrollStudent(Course &c)
{
    if (c.enrolledStudents < c.maxSeats)
    {
        c.enrolledStudents++;
        return true;
    }
    else
    {
        return false;
    }
}
void displayCourse(Course c)
{
    cout << "\nCourse Details" << endl;
    cout << "Course Code: " << c.courseCode << endl;
    cout << "Course Name: " << c.courseName << endl;
    cout << "Credit Hours: " << c.creditHours << endl;
    cout << "Maximum Seats: " << c.maxSeats << endl;
    cout << "Enrolled Students: " << c.enrolledStudents << endl;
    cout << "Seats Remaining: " << c.maxSeats - c.enrolledStudents << endl;
    cout << "Instructor Name: " << c.ins.name << endl;
    cout << "Department: " << c.ins.department << endl;
}
int main()
{
    Course c[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter details of Course " << i + 1 << endl;
        cout << "Enter Course Code: ";
        cin >> c[i].courseCode;
        cout << "Enter Course Name: ";
        cin >> c[i].courseName;
        cout << "Enter Credit Hours: ";
        cin >> c[i].creditHours;
        cout << "Enter Maximum Seats: ";
        cin >> c[i].maxSeats;
        cout << "Enter Enrolled Students: ";
        cin >> c[i].enrolledStudents;
        cout << "Enter Instructor Name: ";
        cin >> c[i].ins.name;
        cout << "Enter Department: ";
        cin >> c[i].ins.department;
    }
    for (int i = 0; i < 2; i++)
    {
        if (enrollStudent(c[i]))
        {
            cout << "\nStudent enrolled in " << c[i].courseCode << endl;
        }
        else
        {
            cout << "\nNo seats available in " << c[i].courseCode << endl;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        displayCourse(c[i]);
    }
    return 0;
}*/
/*task4
#include <iostream>
#include <string>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
struct Doctor
{
    string name;
    string specialization;
};
struct Patient
{
    string patientID;
    string name;
    int age;
    Date admissionDate;
    Doctor assignedDoctor;
    double dailyCharge;
};
double calculateBill(Patient p, int days)
{
    return p.dailyCharge * days;
}
void displayPatientReport(Patient p, int days)
{
    double totalBill = calculateBill(p, days);
    cout << "\n==============================" << endl;
    cout << "      Hospital Report" << endl;
    cout << "==============================" << endl;
    cout << "Patient ID: " << p.patientID << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Admission Date: "
         << p.admissionDate.day << "/"
         << p.admissionDate.month << "/"
         << p.admissionDate.year << endl;
    cout << "Doctor Name: " << p.assignedDoctor.name << endl;
    cout << "Specialization: " << p.assignedDoctor.specialization << endl;
    cout << "Daily Charge: " << p.dailyCharge << endl;
    cout << "Days Stayed: " << days << endl;
    cout << "Total Bill: " << totalBill << endl;
    cout << "==============================" << endl;
}

int main()
{
    Patient p[2];
    int days[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter details of Patient " << i + 1 << endl;
        cout << "Enter Patient ID: ";
        cin >> p[i].patientID;
        cout << "Enter Name: ";
        cin >> p[i].name;
        cout << "Enter Age: ";
        cin >> p[i].age;
        cout << "Enter Admission Day: ";
        cin >> p[i].admissionDate.day;
        cout << "Enter Admission Month: ";
        cin >> p[i].admissionDate.month;
        cout << "Enter Admission Year: ";
        cin >> p[i].admissionDate.year;
        cout << "Enter Doctor Name: ";
        cin >> p[i].assignedDoctor.name;
        cout << "Enter Specialization: ";
        cin >> p[i].assignedDoctor.specialization;
        cout << "Enter Daily Charge: ";
        cin >> p[i].dailyCharge;
        cout << "Enter Number of Days Stayed: ";
        cin >> days[i];
    }
    for (int i = 0; i < 2; i++)
    {
        displayPatientReport(p[i], days[i]);
    }
    return 0;
}*/
