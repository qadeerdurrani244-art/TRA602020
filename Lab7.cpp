/*
#include <iostream>
using namespace std;
struct Date {
    int day;
    int month;
    int year;
};

int calculateYears(Date dob, Date current) {
    int age = current.year - dob.year;

    if (current.month < dob.month || 
       (current.month == dob.month && current.day < dob.day)) {
        age--;
    }

    return age;
}
void calculateFullAge(Date &dob, Date &current, int &years, int &months, int &days) {
    days = current.day - dob.day;
    months = current.month - dob.month;
    years = current.year - dob.year;

    if (days < 0) {
        days += 30; 
        months--;
    }

    if (months < 0) {
        months += 12;
        years--;
    }
}

int main() {
    Date dob, current;
    cout << "Enter Date of Birth (day month year): ";
    cin >> dob.day >> dob.month >> dob.year;
    cout << "Enter Current Date (day month year): ";
    cin >> current.day >> current.month >> current.year;
    int years = calculateYears(dob, current);
    int fullYears, months, days;
    calculateFullAge(dob, current, fullYears, months, days);
    cout << "\nAge in years: " << years << endl;
    cout << "Full Age: " << fullYears << " years, "
         << months << " months, "
         << days << " days" << endl;

    return 0;
}*/
#include <iostream>
using namespace std;
struct Vehicle {
    int id;
    string name;
    string engineType;
    string color;
};

void displayList(Vehicle v[], int size) {
    cout << "\nAvailable Vehicles:\n";
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << v[i].name << endl;
    }
}

void showDetails(Vehicle v[], int index) {
    cout << "\nVehicle Details:\n";
    cout << "ID: " << v[index].id << endl;
    cout << "Name: " << v[index].name << endl;
    cout << "Engine Type: " << v[index].engineType << endl;
    cout << "Color: " << v[index].color << endl;
}

int main() {
    const int size = 4;

    Vehicle vehicles[size] = {
        {101, "Toyota Corolla", "Petrol", "White"},
        {102, "Honda Civic", "Petrol", "Black"},
        {103, "Tesla Model 3", "Electric", "Red"},
        {104, "Hyundai Tucson", "Diesel", "Grey"}
    };
    displayList(vehicles, size);
    int choice;
    cout << "\nSelect a vehicle (1-" << size << "): ";
    cin >> choice;
    if (choice >= 1 && choice <= size) {
        showDetails(vehicles, choice - 1);
    } else {
        cout << "Invalid selection!" << endl;
    }
    return 0;
}
