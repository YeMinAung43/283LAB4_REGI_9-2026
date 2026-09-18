<<<<<<< HEAD
#include "DATE.H"

Date::Date() {
  day = 1;
  month = 1;
  year = 1900;
}

Date::Date(int d, int m, int y) {
  day = d;
  month = m;
  year = y;
}

int Date::GetDay() const {
  return day;
}

void Date::SetDay(int d) {
  day = d;
}

int Date::GetMonth() const {
  return month;
}

void Date::SetMonth(int m) {
  month = m;
}

int Date::GetYear() const {
  return year;
}

void Date::SetYear(int y) {
  year = y;
}

istream & operator >>(istream & input, Date & D) {
  int d, m, y;
  if (input >> d >> m >> y) {
    D.SetDay(d);
    D.SetMonth(m);
    D.SetYear(y);
  }
  return input;
}

ostream & operator <<(ostream & os, const Date & D) {
  os << D.GetDay() << "/" << D.GetMonth() << "/" << D.GetYear();
  return os;
}
=======
#include "DATE.H"

Date::Date() {
  day = 1;
  month = 1;
  year = 1900;
}

Date::Date(int d, int m, int y) {
  day = d;
  month = m;
  year = y;
}

int Date::GetDay() const {
  return day;
}

void Date::SetDay(int d) {
  day = d;
}

int Date::GetMonth() const {
  return month;
}

void Date::SetMonth(int m) {
  month = m;
}

int Date::GetYear() const {
  return year;
}

void Date::SetYear(int y) {
  year = y;
}

istream & operator >>(istream & input, Date & D) {
  int d, m, y;
  if (input >> d >> m >> y) {
    D.SetDay(d);
    D.SetMonth(m);
    D.SetYear(y);
  }
  return input;
}

ostream & operator <<(ostream & os, const Date & D) {
  os << D.GetDay() << "/" << D.GetMonth() << "/" << D.GetYear();
  return os;
}
>>>>>>> 41f9e42 (Update from vscode)
