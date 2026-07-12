/*task1
#include <iostream>
using namespace std;
struct Country {
    string name;
    float population;
};
int main() {
    Country c;
    cout << "Enter country name: ";
    cin >> c.name;
    cout << "Enter population (in millions): ";
    cin >> c.population;
    cout << "\n--- Country Information ---" << endl;
    cout << "Country Name: " << c.name << endl;
    cout << "Population: " << c.population << " million" << endl;
    return 0;
}*/
/*task2
#include <iostream>
using namespace std;
struct Student {
    int rollNo;
    float marks[5];
};
int main() {
    Student s;
    cout << "Enter Roll Number: ";
    cin >> s.rollNo;
    cout << "Enter marks of 5 subjects:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
    }
    cout << "\n--- Student Record ---" << endl;
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Marks in 5 subjects:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": " << s.marks[i] << endl;
    }
    return 0;
}*/
/*task3
#include <iostream>
using namespace std;
struct Car {
    string model;
    string color;
    float price;
};
int main() {
    Car c[5];
    cout << "Enter details of 5 cars:\n";
    for(int i = 0; i < 5; i++) {
        cout << "\nCar " << i + 1 << endl;
        cout << "Enter model: ";
        cin >> c[i].model;
        cout << "Enter color: ";
        cin >> c[i].color;
        cout << "Enter price: ";
        cin >> c[i].price;
    }
    int choice;
    cout << "\nEnter 1 to display most costly car\n";
    cout << "Enter 2 to display all cars\n";
    cout << "Your choice: ";
    cin >> choice;
    if(choice == 1) {
        int maxIndex = 0;
        for(int i = 1; i < 5; i++) {
            if(c[i].price > c[maxIndex].price) {
                maxIndex = i;
            }
        }
        cout << "\n--- Most Costly Car ---\n";
        cout << "Model: " << c[maxIndex].model << endl;
        cout << "Color: " << c[maxIndex].color << endl;
        cout << "Price: " << c[maxIndex].price << endl;
    }
    else if(choice == 2) {
        cout << "\n--- All Car Records ---\n";
        for(int i = 0; i < 5; i++) {
            cout << "\nCar " << i + 1 << endl;
            cout << "Model: " << c[i].model << endl;
            cout << "Color: " << c[i].color << endl;
            cout << "Price: " << c[i].price << endl;
        }
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}*/
/*task4
#include <iostream>
using namespace std;
struct phone {
    int areaCode;
    int exchange;
    int number;
};
int main() {
    phone myNumber = {212, 767, 8900};
    phone userNumber;
    cout << "Enter your area code, exchange, and number: ";
    cin >> userNumber.areaCode >> userNumber.exchange >> userNumber.number;
    cout << "My number is (" << myNumber.areaCode << ") "
         << myNumber.exchange << "-" << myNumber.number << endl;
    cout << "Your number is (" << userNumber.areaCode << ") "
         << userNumber.exchange << "-" << userNumber.number << endl;
    return 0;
}*/
/*task5
#include <iostream>
using namespace std;
struct point {
    int x;
    int y;
};
int main() {
    point p1, p2, p3;
    cout << "Enter coordinates for p1: ";
    cin >> p1.x >> p1.y;
    cout << "Enter coordinates for p2: ";
    cin >> p2.x >> p2.y;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    cout << "Coordinates of p1+p2 are: "
         << p3.x << ", " << p3.y << endl;
    return 0;
}*/
/*task6
#include <iostream>
using namespace std;
struct Distance {
    int feet;
    int inches;
};
struct Volume {
    Distance length;
    Distance width;
    Distance height;
};
int main() {
    Volume room = {
        {12, 6},   // length = 12 feet 6 inches
        {10, 3},   // width  = 10 feet 3 inches
        {8, 9}     // height = 8 feet 9 inches
    };
    float l = room.length.feet + room.length.inches / 12.0;
    float w = room.width.feet + room.width.inches / 12.0;
    float h = room.height.feet + room.height.inches / 12.0;
    float volume = l * w * h;
    cout << "Room dimensions:" << endl;
    cout << "Length: " << room.length.feet << " feet " << room.length.inches << " inches" << endl;
    cout << "Width : " << room.width.feet << " feet " << room.width.inches << " inches" << endl;
    cout << "Height: " << room.height.feet << " feet " << room.height.inches << " inches" << endl;
    cout << "\nVolume of room = " << volume << " cubic feet" << endl;
    return 0;
}*/
/*task7
#include <iostream>
using namespace std;
struct employee {
    int empNo;
    float compensation;
};
int main() {
    employee e1, e2, e3;
    cout << "Enter details for Employee 1\n";
    cout << "Employee Number: ";
    cin >> e1.empNo;
    cout << "Compensation: ";
    cin >> e1.compensation;
    cout << "\nEnter details for Employee 2\n";
    cout << "Employee Number: ";
    cin >> e2.empNo;
    cout << "Compensation: ";
    cin >> e2.compensation;
    cout << "\nEnter details for Employee 3\n";
    cout << "Employee Number: ";
    cin >> e3.empNo;
    cout << "Compensation: ";
    cin >> e3.compensation;
    cout << "\n--- Employee Details ---\n";
    cout << "\nEmployee 1\n";
    cout << "Number: " << e1.empNo << endl;
    cout << "Compensation: $" << e1.compensation << endl;
    cout << "\nEmployee 2\n";
    cout << "Number: " << e2.empNo << endl;
    cout << "Compensation: $" << e2.compensation << endl;
    cout << "\nEmployee 3\n";
    cout << "Number: " << e3.empNo << endl;
    cout << "Compensation: $" << e3.compensation << endl;
    return 0;
}*/
/*task8
#include <iostream>
using namespace std;
struct date {
    int month;
    int day;
    int year;
};
int main() {
    date d;
    cout << "Enter date (MM/DD/YYYY): ";
    char ch1, ch2;   // to store '/' characters
    cin >> d.month >> ch1 >> d.day >> ch2 >> d.year;
    cout << "Date is: "
         << d.month << "/" << d.day << "/" << d.year << endl;
    return 0;
}*/
/*task9
#include <iostream>
using namespace std;
struct time {
    int hours;
    int minutes;
    int seconds;
};
int main() {
    time t1;
    cout << "Enter time (HH:MM:SS): ";
    char ch1, ch2; 
    cin >> t1.hours >> ch1 >> t1.minutes >> ch2 >> t1.seconds;
    long totalsecs;
    totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    cout << "Total seconds = " << totalsecs << endl;
    return 0;
}*/
/*task10
#include <iostream>
using namespace std;
struct time {
    int hours;
    int minutes;
    int seconds;
};
int main() {
    time t1, t2, result;
    cout << "Enter first time (HH:MM:SS): ";
    char ch1, ch2;
    cin >> t1.hours >> ch1 >> t1.minutes >> ch2 >> t1.seconds;
    cout << "Enter second time (HH:MM:SS): ";
    cin >> t2.hours >> ch1 >> t2.minutes >> ch2 >> t2.seconds;
    int total1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int total2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int totalSeconds = total1 + total2;
    result.hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    result.minutes = totalSeconds / 60;
    result.seconds = totalSeconds % 60;
    cout << "Sum of time = "
         << result.hours << ":"
         << result.minutes << ":"
         << result.seconds << endl;
    return 0;
}*/


///////////////////////////////////////////////////////////Home task//////////////////////////////////////////////////////////////////////////////////////////////////
/*TASK1
#include <iostream>
using namespace std;
struct hotel {
    string name;
    int dishes;
    float bill;
};
int main() {
    hotel h[3];
    cout << "Enter details of last 3 hotels visited:\n";
    for(int i = 0; i < 3; i++) {
        cout << "\nHotel " << i + 1 << endl;
        cout << "Hotel name: ";
        cin >> h[i].name;
        cout << "Number of dishes: ";
        cin >> h[i].dishes;
        cout << "Total bill: ";
        cin >> h[i].bill;
    }
    cout << "\n--- Records with 15% Tax Added ---\n";
    float grandTotal = 0;
    for(int i = 0; i < 3; i++) {
        float taxBill = h[i].bill + (h[i].bill * 0.15);
        grandTotal += taxBill;
        cout << "\nHotel Name: " << h[i].name << endl;
        cout << "Dishes: " << h[i].dishes << endl;
        cout << "Bill after 15% tax: " << taxBill << endl;
    }
    cout << "\nTotal Bill of all hotels (with tax): " << grandTotal << endl;
    return 0;
}*/
/*TASK2
#include <iostream>
using namespace std;
struct Person {
    float income;
    float taxRate;
    float tax;
};
int main() {
    Person p[5];
    cout << "Enter income and tax rate for 5 persons:\n";
    for(int i = 0; i < 5; i++) {
        cout << "\nPerson " << i + 1 << endl;
        cout << "Income: ";
        cin >> p[i].income;
        cout << "Tax rate (%): ";
        cin >> p[i].taxRate;
        p[i].tax = (p[i].income * p[i].taxRate) / 100;
    }
    cout << "\n--- Tax Payable for Each Person ---\n";
    for(int i = 0; i < 5; i++) {
        cout << "Person " << i + 1 << " Tax: " << p[i].tax << endl;
    }
    return 0;
}*/

