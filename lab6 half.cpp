#include <iostream>
#include <fstream>
using namespace std;
struct SensorReading
{
    int sensorID;
    float temperature;
    float humidity;
    string timestamp;
};
int main()
{
    SensorReading sensor[3] =
    {
        {1, 36.5, 72.3, "2024-01-15 08:00"},
        {2, 38.1, 68.9, "2024-01-15 08:05"},
        {3, 35.7, 75.1, "2024-01-15 08:10"},
    };
    ofstream file("sensor_log.txt");
    if (file.is_open())
    {
        for (int i = 0; i < 3; i++)
        {
            file << "--- Sensor Reading " << i + 1 << " ---" << endl;
            file << "Sensor ID : " << sensor[i].sensorID << endl;
            file << "Temperature : " << sensor[i].temperature << " C" << endl;
            file << "Humidity : " << sensor[i].humidity << " %" << endl;
            file << "Timestamp : " << sensor[i].timestamp << endl;
        }

        file.close();
        cout << "File \"sensor_log.txt\" created successfully." << endl;
    }
    else
    {
        cout << "Unable to open file." << endl;
        return 0;
    }
    ifstream readFile("sensor_log.txt");
    string line;
    if (readFile.is_open())
    {
        cout << "\nReading file contents:\n" << endl;

        while (getline(readFile, line))
        {
            cout << line << endl;
        }

        readFile.close();
    }
    else
    {
        cout << "Unable to read file." << endl;
    }
    return 0;
}
