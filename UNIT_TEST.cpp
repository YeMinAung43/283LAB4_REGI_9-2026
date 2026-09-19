#include "UNIT.H"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    cout << "===== UNIT UNIT TEST =====" << endl;

    UNIT unit;

    // Test default constructor
    if (unit.GetUnitId() == "")
        cout << "[PASS] Default Unit ID" << endl;
    else
        cout << "[FAIL] Default Unit ID" << endl;

    if (unit.GetName() == "")
        cout << "[PASS] Default Name" << endl;
    else
        cout << "[FAIL] Default Name" << endl;

    if (unit.GetSection() == '\0')
        cout << "[PASS] Default Section" << endl;
    else
        cout << "[FAIL] Default Section" << endl;

    if (unit.GetCredits() == 0)
        cout << "[PASS] Default Credits" << endl;
    else
        cout << "[FAIL] Default Credits" << endl;


    // Test setters and getters
    unit.SetUnitId("ICT283");
    unit.SetName("Data_Structures");
    unit.SetSection('A');
    unit.SetCredits(3);

    if (unit.GetUnitId() == "ICT283")
        cout << "[PASS] Set/Get Unit ID" << endl;
    else
        cout << "[FAIL] Set/Get Unit ID" << endl;

    if (unit.GetName() == "Data_Structures")
        cout << "[PASS] Set/Get Name" << endl;
    else
        cout << "[FAIL] Set/Get Name" << endl;

    if (unit.GetSection() == 'A')
        cout << "[PASS] Set/Get Section" << endl;
    else
        cout << "[FAIL] Set/Get Section" << endl;

    if (unit.GetCredits() == 3)
        cout << "[PASS] Set/Get Credits" << endl;
    else
        cout << "[FAIL] Set/Get Credits" << endl;


    // Test parameterized constructor
    UNIT unit2("ICT159", "Programming", 'B', 3);

    if (unit2.GetUnitId() == "ICT159" &&
        unit2.GetName() == "Programming" &&
        unit2.GetSection() == 'B' &&
        unit2.GetCredits() == 3)
        cout << "[PASS] Parameterized Constructor" << endl;
    else
        cout << "[FAIL] Parameterized Constructor" << endl;


    // Test input operator
    stringstream input("ICT289 Computer_Graphics A 3");
    input >> unit2;

    if (unit2.GetUnitId() == "ICT289" &&
        unit2.GetName() == "Computer_Graphics" &&
        unit2.GetSection() == 'A' &&
        unit2.GetCredits() == 3)
        cout << "[PASS] Input Operator" << endl;
    else
        cout << "[FAIL] Input Operator" << endl;


    // Test output operator
    stringstream output;
    output << unit2;

    if (output.str().find("ICT289") != string::npos)
        cout << "[PASS] Output Operator" << endl;
    else
        cout << "[FAIL] Output Operator" << endl;


    return 0;
}
