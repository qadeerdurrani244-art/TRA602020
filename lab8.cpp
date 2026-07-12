/*#include <iostream>
using namespace std;
class ServoMotor {
private:
    int servoID;
    float currentAngle;
    float maxAngle;

public:
    ServoMotor() {
        servoID = 0;
        currentAngle = 0.0f;
        maxAngle = 180.0f;
        cout << "[Default Constructor] Servo-0 initialized." << endl;
    }
    ServoMotor(int id, float angle, float maxAng)
        : servoID(id), currentAngle(angle), maxAngle(maxAng)
    {
        cout << "[Param Constructor] Servo-" << servoID
             << " initialized at " << currentAngle
             << " deg." << endl;
    }
    ~ServoMotor() {
        cout << "[Destructor] Servo-" << servoID
             << " powered off." << endl;
    }
    void rotate(float newAngle) {

        if(newAngle > maxAngle)
            currentAngle = maxAngle;
        else if(newAngle < 0)
            currentAngle = 0;
        else
            currentAngle = newAngle;

        cout << "Servo-" << servoID
             << " rotated to " << currentAngle
             << " deg." << endl;
    }
    void display() const {
        cout << "Servo[" << servoID
             << "] Angle: " << currentAngle
             << " Max: " << maxAngle << endl;
    }
};
int main() {
    cout << "--- Creating servos ---" << endl;
    ServoMotor s1;
    ServoMotor s2(2, 30.0f, 270.0f);
    ServoMotor s3(3, 90.0f, 180.0f);
    cout << "--- Rotating servos ---" << endl;
    s1.rotate(45.0f);
    s2.rotate(300.0f);
    s3.rotate(-10.0f);
    cout << "--- Status ---" << endl;
    s1.display();
    s2.display();
    s3.display();
    cout << "--- End of main ---" << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
class SensorLog {
private:
    string sensorID;
    float* data;
    int capacity;
    int count;
public:
    SensorLog(string id, int cap)
        : sensorID(id), capacity(cap)
    {
        count = 0;
        data = new float[capacity];
        for(int i = 0; i < capacity; i++)
            data[i] = 0.0f;

        cout << "[Constructor] Log '" << sensorID
             << "' created. Capacity: "
             << capacity << endl;
    }
    SensorLog(const SensorLog& other)
    {
        sensorID = other.sensorID + "_copy";
        capacity = other.capacity;
        count = other.count;
        data = new float[capacity];
        for(int i = 0; i < capacity; i++)
            data[i] = other.data[i];

        cout << "[Copy Constructor] Log '"
             << sensorID
             << "' cloned." << endl;
    }
    ~SensorLog()
    {
        delete[] data;

        cout << "[Destructor] Log '"
             << sensorID
             << "' memory freed." << endl;
    }
    void addReading(float val)
    {
        if(count >= capacity)
        {
            cout << "Log '" << sensorID
                 << "' full. Cannot add." << endl;
            return;
        }
        data[count] = val;
        count++;
        cout << "Log '" << sensorID
             << "' recorded: "
             << val << endl;
    }
    void display() const
    {
        cout << "Log [" << sensorID
             << "] (" << count
             << "/" << capacity
             << "): ";

        for(int i = 0; i < count; i++)
            cout << data[i] << " ";

        cout << endl;
    }
};
int main() {
    SensorLog log1("Ultrasonic-01", 4);
    log1.addReading(12.5f);
    log1.addReading(33.1f);
    log1.addReading(45.8f);
    log1.addReading(22.0f);
    log1.addReading(99.9f);
    cout << "--- Copy log ---" << endl;
    SensorLog log2(log1);
    log2.display();
    cout << "--- Display original ---" << endl;
    log1.display();
    cout << "--- Heap log ---" << endl;
    SensorLog* log3 = new SensorLog("LiDAR-01", 2);
    log3->addReading(5.0f);
    log3->display();
    delete log3;
    cout << "--- End ---" << endl;
    return 0;
}*/
//////////////////////////////////////////////////////////////Home task///////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
class RobotArm {
private:
    string armName;
    int numJoints;
    string* jointNames;
    float* jointAngles;
    float maxReach;
public:
    RobotArm()
    {
        armName = "DefaultArm";
        numJoints = 3;
        maxReach = 50.0f;
        jointNames = new string[numJoints];
        jointAngles = new float[numJoints];
        jointNames[0] = "J1";
        jointNames[1] = "J2";
        jointNames[2] = "J3";
        for(int i = 0; i < numJoints; i++)
            jointAngles[i] = 0;
        cout << "[Default Constructor] "
             << armName
             << " created. Joints: "
             << numJoints << endl;
    }
    RobotArm(string name, int joints,
             string names[], float reach)
    {
        armName = name;
        numJoints = joints;
        maxReach = reach;
        jointNames = new string[numJoints];
        jointAngles = new float[numJoints];
        for(int i = 0; i < numJoints; i++)
        {
            jointNames[i] = names[i];
            jointAngles[i] = 0;
        }
        cout << "[Param Constructor] "
             << armName
             << " created. Joints: "
             << numJoints << endl;
    }
    RobotArm(const RobotArm& other)
    {
        armName = other.armName + "_copy";
        numJoints = other.numJoints;
        maxReach = other.maxReach;
        jointNames = new string[numJoints];
        jointAngles = new float[numJoints];
        for(int i = 0; i < numJoints; i++)
        {
            jointNames[i] = other.jointNames[i];
            jointAngles[i] = other.jointAngles[i];
        }
        cout << "[Copy Constructor] "
             << armName
             << " cloned. Joints: "
             << numJoints << endl;
    }
    ~RobotArm()
    {
        delete[] jointNames;
        delete[] jointAngles;

        cout << "[Destructor] "
             << armName
             << " shut down. Memory freed."
             << endl;
    }
    void setAngle(int jointIndex, float angle)
    {
        if(jointIndex < 0 || jointIndex >= numJoints)
            return;
        if(angle < 0)
            angle = 0;
        if(angle > 180)
            angle = 180;
        jointAngles[jointIndex] = angle;
        cout << jointNames[jointIndex]
             << " set to "
             << angle
             << " deg" << endl;
    }
    float totalAngle() const
    {
        float sum = 0;

        for(int i = 0; i < numJoints; i++)
            sum += jointAngles[i];

        return sum;
    }
    void displayArm() const
    {
        cout << "Arm: "
             << armName
             << " | Max Reach: "
             << maxReach
             << " cm" << endl;

        for(int i = 0; i < numJoints; i++)
        {
            cout << " Joint[" << i << "] "
                 << jointNames[i]
                 << " : "
                 << jointAngles[i]
                 << " deg" << endl;
        }

        cout << "Total angle: "
             << totalAngle()
             << " deg" << endl;
    }
};

 int main()
{
    RobotArm arm1;

    string joints[] =
    {
        "Shoulder",
        "Elbow",
        "Wrist",
        "Gripper"
    }; 
    RobotArm arm2("Arm-Delta", 4, joints, 120);
    arm2.setAngle(0, 45);
    arm2.setAngle(1, 90);
    arm2.setAngle(2, 30);
    RobotArm arm3(arm2);
    cout << "\--- Arm-Delta Status ---" << endl;
    arm2.displayArm();
    cout << "\--- Arm-Delta_copy Status ---" << endl;
    arm3.displayArm();
    return 0;
}
