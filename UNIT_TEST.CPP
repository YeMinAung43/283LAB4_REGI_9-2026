#include "REGIST.H"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int passed = 0;
int failed = 0;

void Check(bool condition, const string& testName)
{
    if (condition)
    {
        cout << "[PASS] " << testName << endl;
        passed++;
    }
    else
    {
        cout << "[FAIL] " << testName << endl;
        failed++;
    }
}

void TestDate()
{
    cout << "\n===== DATE TESTS =====" << endl;

    Date d;

    Check(d.GetDay() == 1, "Date default day");
    Check(d.GetMonth() == 1, "Date default month");
    Check(d.GetYear() == 1900, "Date default year");

    d.SetDay(15);
    d.SetMonth(9);
    d.SetYear(2026);

    Check(d.GetDay() == 15, "Date Set/Get Day");
    Check(d.GetMonth() == 9, "Date Set/Get Month");
    Check(d.GetYear() == 2026, "Date Set/Get Year");

    Date d2(20, 10, 2026);

    Check(d2.GetDay() == 20 &&
          d2.GetMonth() == 10 &&
          d2.GetYear() == 2026,
          "Date parameterized constructor");

    stringstream input("5 12 2025");
    input >> d2;

    Check(d2.GetDay() == 5 &&
          d2.GetMonth() == 12 &&
          d2.GetYear() == 2025,
          "Date input operator");

    stringstream output;
    output << d2;

    Check(output.str() == "5/12/2025",
          "Date output operator");
}

void TestUNIT()
{
    cout << "\n===== UNIT TESTS =====" << endl;

    UNIT u;

    Check(u.GetUnitId() == "", "UNIT default ID");
    Check(u.GetName() == "", "UNIT default name");
    Check(u.GetSection() == '\0', "UNIT default section");
    Check(u.GetCredits() == 0, "UNIT default credits");

    u.SetUnitId("ICT283");
    u.SetName("Data_Structures");
    u.SetSection('A');
    u.SetCredits(3);

    Check(u.GetUnitId() == "ICT283", "UNIT Set/Get ID");
    Check(u.GetName() == "Data_Structures", "UNIT Set/Get name");
    Check(u.GetSection() == 'A', "UNIT Set/Get section");
    Check(u.GetCredits() == 3, "UNIT Set/Get credits");

    UNIT u2("ICT159", "Programming", 'B', 3);

    Check(u2.GetUnitId() == "ICT159" &&
          u2.GetName() == "Programming" &&
          u2.GetSection() == 'B' &&
          u2.GetCredits() == 3,
          "UNIT parameterized constructor");

    stringstream input("ICT289 Computer_Graphics A 3");
    input >> u2;

    Check(u2.GetUnitId() == "ICT289" &&
          u2.GetName() == "Computer_Graphics" &&
          u2.GetSection() == 'A' &&
          u2.GetCredits() == 3,
          "UNIT input operator");

    stringstream output;
    output << u2;

    Check(output.str().find("ICT289") != string::npos,
          "UNIT output operator");
}

void TestResult()
{
    cout << "\n===== RESULT TESTS =====" << endl;

    Result r;

    Check(r.GetMark() == 0.0f, "Result default mark");

    UNIT u("ICT283", "Data_Structures", 'A', 3);
    Date d(15, 9, 2026);

    r.SetUnit(u);
    r.SetMark(85.5f);
    r.SetDate(d);

    Check(r.GetUnit().GetUnitId() == "ICT283",
          "Result Set/Get unit");

    Check(r.GetMark() == 85.5f,
          "Result Set/Get mark");

    Check(r.GetDate().GetDay() == 15 &&
          r.GetDate().GetMonth() == 9 &&
          r.GetDate().GetYear() == 2026,
          "Result Set/Get date");

    Result r2(u, 92.0f, d);

    Check(r2.GetUnit().GetUnitId() == "ICT283" &&
          r2.GetMark() == 92.0f &&
          r2.GetDate().GetYear() == 2026,
          "Result parameterized constructor");

    stringstream input(
        "ICT159 Programming B 3 78.5 20 6 2026"
    );

    input >> r2;

    Check(r2.GetUnit().GetUnitId() == "ICT159" &&
          r2.GetUnit().GetName() == "Programming" &&
          r2.GetUnit().GetSection() == 'B' &&
          r2.GetUnit().GetCredits() == 3 &&
          r2.GetMark() == 78.5f &&
          r2.GetDate().GetDay() == 20 &&
          r2.GetDate().GetMonth() == 6 &&
          r2.GetDate().GetYear() == 2026,
          "Result input operator");

    stringstream output;
    output << r2;

    Check(output.str().find("ICT159") != string::npos &&
          output.str().find("78.5") != string::npos,
          "Result output operator");
}

void TestRegistration()
{
    cout << "\n===== REGISTRATION TESTS =====" << endl;

    Registration r;

    Check(r.GetStudentId() == 0,
          "Registration default student ID");

    Check(r.GetSemester() == 0,
          "Registration default semester");

    Check(r.GetCount() == 0,
          "Registration default count");

    Check(r.GetCredits() == 0,
          "Registration default credits");

    r.SetStudentId(34567890);
    r.SetSemester(2);

    UNIT u1("ICT283", "Data_Structures", 'A', 3);
    UNIT u2("ICT159", "Programming", 'B', 3);

    Result result1(u1, 85.5f, Date(15, 9, 2026));
    Result result2(u2, 92.0f, Date(20, 6, 2026));

    r.SetResult(0, result1);
    r.SetResult(1, result2);

    Check(r.GetStudentId() == 34567890,
          "Registration Set/Get student ID");

    Check(r.GetSemester() == 2,
          "Registration Set/Get semester");

    Check(r.GetCount() == 2,
          "Registration result count");

    Check(r.GetResult(0).GetMark() == 85.5f,
          "Registration first result");

    Check(r.GetResult(1).GetMark() == 92.0f,
          "Registration second result");

    Check(r.GetCredits() == 6,
          "Registration total credits");

    r.SetResult(-1, result1);
    r.SetResult(MaxUnit, result1);

    Check(r.GetCount() == 2,
          "Registration rejects invalid SetResult index");

    Check(r.GetResult(-1).GetMark() == 0.0f,
          "Registration invalid negative GetResult");

    Check(r.GetResult(MaxUnit).GetMark() == 0.0f,
          "Registration invalid upper GetResult index");

    stringstream input(
        "12345678 1 2 "
        "ICT283 Data_Structures A 3 85.5 15 9 2026 "
        "ICT159 Programming B 3 92.0 20 6 2026"
    );

    Registration r2;
    input >> r2;

    Check(r2.GetStudentId() == 12345678 &&
          r2.GetSemester() == 1 &&
          r2.GetCount() == 2 &&
          r2.GetCredits() == 6,
          "Registration input operator");

    Check(r2.GetResult(0).GetUnit().GetUnitId() == "ICT283" &&
          r2.GetResult(0).GetMark() == 85.5f &&
          r2.GetResult(0).GetDate().GetYear() == 2026,
          "Registration first input result");
}

int main()
{
    TestDate();
    TestUNIT();
    TestResult();
    TestRegistration();

    cout << "\n==================================" << endl;
    cout << "UNIT TEST SUMMARY" << endl;
    cout << "Passed: " << passed << endl;
    cout << "Failed: " << failed << endl;
    cout << "==================================" << endl;

    if (failed == 0)
    {
        cout << "All unit tests passed." << endl;
    }
    else
    {
        cout << "Some unit tests failed." << endl;
    }

    return failed == 0 ? 0 : 1;
}
