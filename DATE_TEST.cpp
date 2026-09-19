#include "DATE.H"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    cout << "===== DATE UNIT TEST =====" << endl;

    Date date;

    // Test default constructor
    if (date.GetDay() == 1)
        cout << "[PASS] Default Day" << endl;
    else
        cout << "[FAIL] Default Day" << endl;

    if (date.GetMonth() == 1)
        cout << "[PASS] Default Month" << endl;
    else
        cout << "[FAIL] Default Month" << endl;

    if (date.GetYear() == 1900)
        cout << "[PASS] Default Year" << endl;
    else
        cout << "[FAIL] Default Year" << endl;


    // Test setters and getters
    date.SetDay(15);
    date.SetMonth(9);
    date.SetYear(2026);

    if (date.GetDay() == 15)
        cout << "[PASS] Set/Get Day" << endl;
    else
        cout << "[FAIL] Set/Get Day" << endl;

    if (date.GetMonth() == 9)
        cout << "[PASS] Set/Get Month" << endl;
    else
        cout << "[FAIL] Set/Get Month" << endl;

    if (date.GetYear() == 2026)
        cout << "[PASS] Set/Get Year" << endl;
    else
        cout << "[FAIL] Set/Get Year" << endl;


    // Test parameterized constructor
    Date date2(20, 10, 2026);

    if (date2.GetDay() == 20 &&
        date2.GetMonth() == 10 &&
        date2.GetYear() == 2026)
        cout << "[PASS] Parameterized Constructor" << endl;
    else
        cout << "[FAIL] Parameterized Constructor" << endl;


    // Test input operator
    stringstream input("5 12 2025");
    input >> date2;

    if (date2.GetDay() == 5 &&
        date2.GetMonth() == 12 &&
        date2.GetYear() == 2025)
        cout << "[PASS] Input Operator" << endl;
    else
        cout << "[FAIL] Input Operator" << endl;


    // Test output operator
    stringstream output;
    output << date2;

    if (output.str() == "5/12/2025")
        cout << "[PASS] Output Operator" << endl;
    else
        cout << "[FAIL] Output Operator" << endl;


    return 0;
}
