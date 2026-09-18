/**
 * @file REGIST.H
 * @brief Header file for the Registration class.
 * @author Ye Min Aung
 * @date 2026-09-09
 */

#ifndef REGIST_H
#define REGIST_H

#include "RESULT.H"
#include <iostream>

using namespace std;

const int MaxUnit = 10;

/**
 * @class Registration
 * @brief Holds student details and an array of Result objects.
 */
class Registration {
public:
  Registration();

  int GetCredits() const;
  int GetCount() const;

  long GetStudentId() const;
  void SetStudentId(long id);

  int GetSemester() const;
  void SetSemester(int sem);

  Result GetResult(int index) const;
  void SetResult(int index, const Result& res);

private:
  long studentId;           ///< Student ID number
  int semester;             ///< Semester designation
  int count;                ///< Total number of unit results stored
  Result results[MaxUnit];  ///< Array of Result objects
};

// NO friend keyword
ostream & operator <<(ostream & os, const Registration & R);
istream & operator >>(istream & input, Registration & R);

#endif // REGIST_H
