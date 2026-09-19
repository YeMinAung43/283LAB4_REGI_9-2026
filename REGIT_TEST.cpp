#include "REGIST.H"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    cout << "===== REGISTRATION UNIT TEST =====" << endl;

    Registration registration;


    // Test default constructor
    if (registration.GetStudentId() == 0)
        cout << "[PASS] Default Student ID" << endl;
    else
        cout << "[FAIL] Default Student ID" << endl;

    if (registration.GetSemester() == 0)
        cout << "[PASS] Default Semester" << endl;
    else
        cout << "[FAIL] Default Semester" << endl;

    if (registration.GetCount() == 0)
        cout << "[PASS] Default Count" << endl;
    else
        cout << "[FAIL] Default Count" << endl;

    if (registration.GetCredits() == 0)
        cout << "[PASS] Default Credits" << endl;
    else
        cout << "[FAIL] Default Credits" << endl;


    // Test setters and getters
    registration.SetStudentId(34567890);
    registration.SetSemester(2);

    if (registration.GetStudentId() == 34567890)
        cout << "[PASS] Set/Get Student ID" << endl;
    else
        cout << "[FAIL] Set/Get Student ID" << endl;

    if (registration.GetSemester() == 2)
        cout << "[PASS] Set/Get Semester" << endl;
    else
        cout << "[FAIL] Set/Get Semester" << endl;


    // Create units
    UNIT unit1(
        "ICT283",
        "Data_Structures",
        'A',
        3
    );

    UNIT unit2(
        "ICT159",
        "Programming",
        'B',
        3
    );


    // Create results
    Result result1(
        unit1,
        85.5f,
        Date(15, 9, 2026)
    );

    Result result2(
        unit2,
        92.0f,
        Date(20, 6, 2026)
    );


    // Test SetResult
    registration.SetResult(0, result1);
    registration.SetResult(1, result2);


    // Test count
    if (registration.GetCount() == 2)
        cout << "[PASS] Result Count" << endl;
    else
        cout << "[FAIL] Result Count" << endl;


    // Test GetResult
    if (registration.GetResult(0).GetMark() == 85.5f)
        cout << "[PASS] Get First Result" << endl;
    else
        cout << "[FAIL] Get First Result" << endl;

    if (registration.GetResult(1).GetMark() == 92.0f)
        cout << "[PASS] Get Second Result" << endl;
    else
        cout << "[FAIL] Get Second Result" << endl;


    // Test GetCredits
    if (registration.GetCredits() == 6)
        cout << "[PASS] Total Credits" << endl;
    else
        cout << "[FAIL] Total Credits" << endl;


    // Test invalid index
    registration.SetResult(-1, result1);
    registration.SetResult(MaxUnit, result1);

    if (registration.GetCount() == 2)
        cout << "[PASS] Invalid SetResult Index" << endl;
    else
        cout << "[FAIL] Invalid SetResult Index" << endl;


    // Test invalid GetResult
    if (registration.GetResult(-1).GetMark() == 0.0f)
        cout << "[PASS] Invalid Negative GetResult" << endl;
    else
        cout << "[FAIL] Invalid Negative GetResult" << endl;

    if (registration.GetResult(MaxUnit).GetMark() == 0.0f)
        cout << "[PASS] Invalid Upper GetResult" << endl;
    else
        cout << "[FAIL] Invalid Upper GetResult" << endl;


    // Test input operator
    stringstream input(
        "12345678 1 2 "
        "ICT283 Data_Structures A 3 85.5 15 9 2026 "
        "ICT159 Programming B 3 92.0 20 6 2026"
    );

    Registration registration2;

    input >> registration2;

    if (registration2.GetStudentId() == 12345678 &&
        registration2.GetSemester() == 1 &&
        registration2.GetCount() == 2 &&
        registration2.GetCredits() == 6)
        cout << "[PASS] Input Operator" << endl;
    else
        cout << "[FAIL] Input Operator" << endl;


    return 0;
}
