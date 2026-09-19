#include "RESULT.H"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    cout << "===== RESULT UNIT TEST =====" << endl;

    Result result;

    // Test default constructor
    if (result.GetMark() == 0.0f)
        cout << "[PASS] Default Mark" << endl;
    else
        cout << "[FAIL] Default Mark" << endl;


    // Create UNIT and Date
    UNIT unit("ICT283", "Data_Structures", 'A', 3);
    Date date(15, 9, 2026);


    // Test setters
    result.SetUnit(unit);
    result.SetMark(85.5f);
    result.SetDate(date);


    // Test getters
    if (result.GetUnit().GetUnitId() == "ICT283")
        cout << "[PASS] Set/Get Unit" << endl;
    else
        cout << "[FAIL] Set/Get Unit" << endl;

    if (result.GetMark() == 85.5f)
        cout << "[PASS] Set/Get Mark" << endl;
    else
        cout << "[FAIL] Set/Get Mark" << endl;

    if (result.GetDate().GetDay() == 15 &&
        result.GetDate().GetMonth() == 9 &&
        result.GetDate().GetYear() == 2026)
        cout << "[PASS] Set/Get Date" << endl;
    else
        cout << "[FAIL] Set/Get Date" << endl;


    // Test parameterized constructor
    Result result2(unit, 92.0f, date);

    if (result2.GetUnit().GetUnitId() == "ICT283" &&
        result2.GetMark() == 92.0f &&
        result2.GetDate().GetYear() == 2026)
        cout << "[PASS] Parameterized Constructor" << endl;
    else
        cout << "[FAIL] Parameterized Constructor" << endl;


    // Test input operator
    stringstream input(
        "ICT159 Programming B 3 78.5 20 6 2026"
    );

    input >> result2;

    if (result2.GetUnit().GetUnitId() == "ICT159" &&
        result2.GetUnit().GetName() == "Programming" &&
        result2.GetUnit().GetSection() == 'B' &&
        result2.GetUnit().GetCredits() == 3 &&
        result2.GetMark() == 78.5f &&
        result2.GetDate().GetDay() == 20 &&
        result2.GetDate().GetMonth() == 6 &&
        result2.GetDate().GetYear() == 2026)
        cout << "[PASS] Input Operator" << endl;
    else
        cout << "[FAIL] Input Operator" << endl;


    // Test output operator
    stringstream output;
    output << result2;

    if (output.str().find("ICT159") != string::npos &&
        output.str().find("78.5") != string::npos)
        cout << "[PASS] Output Operator" << endl;
    else
        cout << "[FAIL] Output Operator" << endl;


    return 0;
}
