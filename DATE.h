<<<<<<< HEAD
/**
 * @file DATE.H
 * @brief Header file for the Date class representing a calendar date.
 * @author Ye Min Aung
 * @date 2026-09-09
 */

#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

/**
 * @class Date
 * @brief Manages day, month, and year numeric representations.
 */
class Date {
public:
  /**
   * @brief Default constructor initializing date to default values.
   */
  Date();

  /**
   * @brief Parameterized constructor for Date.
   * @param d Day of the month.
   * @param m Month of the year.
   * @param y Year.
   */
  Date(int d, int m, int y);

  /**
   * @brief Accessor to retrieve the day.
   * @return int Day value.
   */
  int GetDay() const;

  /**
   * @brief Mutator to set the day.
   * @param d New day value.
   */
  void SetDay(int d);

  /**
   * @brief Accessor to retrieve the month.
   * @return int Month value.
   */
  int GetMonth() const;

  /**
   * @brief Mutator to set the month.
   * @param m New month value.
   */
  void SetMonth(int m);

  /**
   * @brief Accessor to retrieve the year.
   * @return int Year value.
   */
  int GetYear() const;

  /**
   * @brief Mutator to set the year.
   * @param y New year value.
   */
  void SetYear(int y);

private:
  int day;    ///< Numeric day
  int month;  ///< Numeric month
  int year;   ///< Numeric year
};

// NO friend keyword: operators declared outside the class
ostream & operator <<(ostream & os, const Date & D);
istream & operator >>(istream & input, Date & D);

#endif // DATE_H
=======
/**
 * @file DATE.H
 * @brief Header file for the Date class representing a calendar date.
 * @author Ye Min Aung
 * @date 2026-09-09
 */

#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

/**
 * @class Date
 * @brief Manages day, month, and year numeric representations.
 */
class Date {
public:
  /**
   * @brief Default constructor initializing date to default values.
   */
  Date();

  /**
   * @brief Parameterized constructor for Date.
   * @param d Day of the month.
   * @param m Month of the year.
   * @param y Year.
   */
  Date(int d, int m, int y);

  /**
   * @brief Accessor to retrieve the day.
   * @return int Day value.
   */
  int GetDay() const;

  /**
   * @brief Mutator to set the day.
   * @param d New day value.
   */
  void SetDay(int d);

  /**
   * @brief Accessor to retrieve the month.
   * @return int Month value.
   */
  int GetMonth() const;

  /**
   * @brief Mutator to set the month.
   * @param m New month value.
   */
  void SetMonth(int m);

  /**
   * @brief Accessor to retrieve the year.
   * @return int Year value.
   */
  int GetYear() const;

  /**
   * @brief Mutator to set the year.
   * @param y New year value.
   */
  void SetYear(int y);

private:
  int day;    ///< Numeric day
  int month;  ///< Numeric month
  int year;   ///< Numeric year
};

// NO friend keyword: operators declared outside the class
ostream & operator <<(ostream & os, const Date & D);
istream & operator >>(istream & input, Date & D);

#endif // DATE_H
>>>>>>> 41f9e42 (Update from vscode)
