/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct SensorData
{
    string sensorID;
    float temperature;
    float distance;
    string timestamp;
};
int main()
{
    SensorData sensor[3];
    ofstream outFile("sensor_log.txt");
    if (!outFile)
    {
        cout << "Error creating file!" << endl;
        return 1;
    }
    cout << "Enter details for 3 sensor readings:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\nReading " << i + 1 << endl;
        cout << "Sensor ID: ";
        cin >> sensor[i].sensorID;
        cout << "Temperature: ";
        cin >> sensor[i].temperature;
        cout << "Distance (cm): ";
        cin >> sensor[i].distance;
        cout << "Timestamp: ";
        cin >> sensor[i].timestamp;
        outFile << sensor[i].sensorID << " "
                << sensor[i].temperature << " "
                << sensor[i].distance << " "
                << sensor[i].timestamp << endl;
    }
    outFile.close();
    ifstream inFile("sensor_log.txt");
    if (!inFile)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }
    cout << "\n\nStored Sensor Readings:\n";
    SensorData temp;
    while (inFile >> temp.sensorID >> temp.temperature >> temp.distance >> temp.timestamp)
    {
        cout << "Sensor ID: " << temp.sensorID << endl;
        cout << "Temperature: " << temp.temperature << " C" << endl;
        cout << "Distance: " << temp.distance << " cm" << endl;
        cout << "Timestamp: " << temp.timestamp << endl;
        cout << "------------------------" << endl;
    }
    inFile.close();
    return 0;
}*/
/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Student
{
    int rollNo;
    string name;
    string section;
    float cgpa;
};
int main()
{
    Student s[2];
    ofstream outFile("student.txt");
    cout << "Enter details of 2 students:";
    for (int i = 0; i < 2; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Roll No: ";
        cin >> s[i].rollNo;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Section: ";
        cin >> s[i].section;
        cout << "CGPA: ";
        cin >> s[i].cgpa;
        outFile << s[i].rollNo << " "
                << s[i].name << " "
                << s[i].section << " "
                << s[i].cgpa << endl;
    }
    outFile.close();
    ofstream appendFile("student.txt", ios::app);
    appendFile << "Total students: 2" << endl;
    appendFile.close();
    ifstream inFile("student.txt");

    cout << "==================================" << endl;
    cout << "       STUDENT RECORDS" << endl;
    cout << "==================================" << endl;
    Student temp;
    for (int i = 0; i < 2; i++)
    {
        inFile >> temp.rollNo >> temp.name >> temp.section >> temp.cgpa;
        cout << "Student " << i + 1 << endl;
        cout << "Roll No : " << temp.rollNo << endl;
        cout << "Name    : " << temp.name << endl;
        cout << "Section : " << temp.section << endl;
        cout << "CGPA    : " << temp.cgpa << endl;
    }
    string line;
    getline(inFile, line); 
    getline(inFile, line); 
    cout << "" << line << endl;
    inFile.close();
    return 0;
}*/
/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Account
{
    string name;
    long long accountNumber;
    float *deposits;
    float currentBalance;
};
int main()
{
    const int SIZE = 5;
    Account acc[SIZE];
    ofstream outFile("details.txt");
    if (!outFile)
    {
        cout << "File could not be created." << endl;
        return 1;
    }
    cout << "Enter details of 5 account holders:";
    for (int i = 0; i < SIZE; i++)
    {
        acc[i].deposits = new float[30];
        cout << "Account Holder " << i + 1 << endl;
        cout << "Name: ";
        cin >> acc[i].name;
        cout << "Account Number: ";
        cin >> acc[i].accountNumber;
        cout << "Enter 30-day deposits:";
        for (int j = 0; j < 30; j++)
        {
            cin >> acc[i].deposits[j];
        }
        cout << "Current Balance: ";
        cin >> acc[i].currentBalance;
        outFile << acc[i].name << " "
                << acc[i].accountNumber << " ";
        for (int j = 0; j < 30; j++)
        {
            outFile << acc[i].deposits[j] << " ";
        }
        outFile << acc[i].currentBalance << endl;
    }
    outFile.close();
    ifstream inFile("details.txt");
    if (!inFile)
    {
        cout << "File could not be opened." << endl;
        return 1;
    }
    cout << "Accounts with Balance Greater Than 50000";
    cout << "========================================";
    string name;
    long long accNo;
    float deposits[30];
    float balance;
    while (inFile >> name >> accNo)
    {
        for (int i = 0; i < 30; i++)
        {
            inFile >> deposits[i];
        }
        inFile >> balance;
        if (balance > 50000)
        {
            cout << "Name: " << name << endl;
            cout << "Account Number: " << accNo << endl;
            cout << "Current Balance: " << balance << endl;
        }
    }
    inFile.close();
    for (int i = 0; i < SIZE; i++)
    {
        delete[] acc[i].deposits;
    }
    return 0;
}*/

