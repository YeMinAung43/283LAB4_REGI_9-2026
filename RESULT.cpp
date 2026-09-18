<<<<<<< HEAD
#include "RESULT.H"

Result::Result() {
  mark = 0.0f;
}

Result::Result(const UNIT& u, float m, const Date& d) {
  unit = u;
  mark = m;
  date = d;
}

UNIT Result::GetUnit() const {
  return unit;
}

void Result::SetUnit(const UNIT& u) {
  unit = u;
}

float Result::GetMark() const {
  return mark;
}

void Result::SetMark(float m) {
  mark = m;
}

Date Result::GetDate() const {
  return date;
}

void Result::SetDate(const Date& d) {
  date = d;
}

istream & operator >>(istream & input, Result & R) {
  UNIT u;
  float m;
  Date d;

  if (input >> u >> m >> d) {
    R.SetUnit(u);
    R.SetMark(m);
    R.SetDate(d);
  }
  return input;
}

ostream & operator <<(ostream & os, const Result & R) {
  os << R.GetUnit()
     << "\tMarks:     " << R.GetMark() << '\n'
     << "\tDate:      " << R.GetDate() << "\n\n";
  return os;
}
=======
#include "RESULT.H"

Result::Result() {
  mark = 0.0f;
}

Result::Result(const UNIT& u, float m, const Date& d) {
  unit = u;
  mark = m;
  date = d;
}

UNIT Result::GetUnit() const {
  return unit;
}

void Result::SetUnit(const UNIT& u) {
  unit = u;
}

float Result::GetMark() const {
  return mark;
}

void Result::SetMark(float m) {
  mark = m;
}

Date Result::GetDate() const {
  return date;
}

void Result::SetDate(const Date& d) {
  date = d;
}

istream & operator >>(istream & input, Result & R) {
  UNIT u;
  float m;
  Date d;

  if (input >> u >> m >> d) {
    R.SetUnit(u);
    R.SetMark(m);
    R.SetDate(d);
  }
  return input;
}

ostream & operator <<(ostream & os, const Result & R) {
  os << R.GetUnit()
     << "\tMarks:     " << R.GetMark() << '\n'
     << "\tDate:      " << R.GetDate() << "\n\n";
  return os;
}
>>>>>>> 41f9e42 (Update from vscode)
