<<<<<<< HEAD
/**
 * @file RESULT.H
 * @brief Header file for the Result class wrapping a UNIT, mark, and date.
 * @author Ye Min Aung
 * @date 2026-09-09
 */

#ifndef RESULT_H
#define RESULT_H

#include "UNIT.H"
#include "DATE.H"
#include <iostream>

using namespace std;

/**
 * @class Result
 * @brief Combines a UNIT object, numeric mark, and registration Date.
 */
class Result {
public:
  Result();
  Result(const UNIT& u, float m, const Date& d);

  UNIT GetUnit() const;
  void SetUnit(const UNIT& u);

  float GetMark() const;
  void SetMark(float m);

  Date GetDate() const;
  void SetDate(const Date& d);

private:
  UNIT unit;   ///< Contained UNIT object
  float mark;  ///< Floating point mark achieved
  Date date;   ///< Date completed
};

// NO friend keyword
ostream & operator <<(ostream & os, const Result & R);
istream & operator >>(istream & input, Result & R);

#endif // RESULT_H
=======
/**
 * @file RESULT.H
 * @brief Header file for the Result class wrapping a UNIT, mark, and date.
 * @author Ye Min Aung
 * @date 2026-09-09
 */

#ifndef RESULT_H
#define RESULT_H

#include "UNIT.H"
#include "DATE.H"
#include <iostream>

using namespace std;

/**
 * @class Result
 * @brief Combines a UNIT object, numeric mark, and registration Date.
 */
class Result {
public:
  Result();
  Result(const UNIT& u, float m, const Date& d);

  UNIT GetUnit() const;
  void SetUnit(const UNIT& u);

  float GetMark() const;
  void SetMark(float m);

  Date GetDate() const;
  void SetDate(const Date& d);

private:
  UNIT unit;   ///< Contained UNIT object
  float mark;  ///< Floating point mark achieved
  Date date;   ///< Date completed
};

// NO friend keyword
ostream & operator <<(ostream & os, const Result & R);
istream & operator >>(istream & input, Result & R);

#endif // RESULT_H
>>>>>>> 41f9e42 (Update from vscode)
