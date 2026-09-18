<<<<<<< HEAD
#include "REGIST.H"

Registration::Registration() {
  studentId = 0;
  semester = 0;
  count = 0;
}

int Registration::GetCredits() const {
  int sum = 0;
  for (int i = 0; i < count; i++) {
    sum += results[i].GetUnit().GetCredits();
  }
  return sum;
}

int Registration::GetCount() const {
  return count;
}

long Registration::GetStudentId() const {
  return studentId;
}

void Registration::SetStudentId(long id) {
  studentId = id;
}

int Registration::GetSemester() const {
  return semester;
}

void Registration::SetSemester(int sem) {
  semester = sem;
}

Result Registration::GetResult(int index) const {
  if (index >= 0 && index < MaxUnit) {
    return results[index];
  }
  return Result();
}

void Registration::SetResult(int index, const Result& res) {
  if (index >= 0 && index < MaxUnit) {
    results[index] = res;
    if (index >= count) {
      count = index + 1;
    }
  }
}

istream & operator >>(istream & input, Registration & R) {
  long id;
  int sem, cnt;

  if (input >> id >> sem >> cnt) {
    R.SetStudentId(id);
    R.SetSemester(sem);

    for (int i = 0; i < cnt; i++) {
      Result res;
      input >> res;
      R.SetResult(i, res);
    }
  }
  return input;
}

ostream & operator <<(ostream & os, const Registration & R) {
  os << "Student ID: " << R.GetStudentId() << '\n'
     << "Semester:   " << R.GetSemester() << "\n\n";

  for (int i = 0; i < R.GetCount(); i++) {
    os << R.GetResult(i);
  }
  return os;
}
=======
#include "REGIST.H"

Registration::Registration() {
  studentId = 0;
  semester = 0;
  count = 0;
}

int Registration::GetCredits() const {
  int sum = 0;
  for (int i = 0; i < count; i++) {
    sum += results[i].GetUnit().GetCredits();
  }
  return sum;
}

int Registration::GetCount() const {
  return count;
}

long Registration::GetStudentId() const {
  return studentId;
}

void Registration::SetStudentId(long id) {
  studentId = id;
}

int Registration::GetSemester() const {
  return semester;
}

void Registration::SetSemester(int sem) {
  semester = sem;
}

Result Registration::GetResult(int index) const {
  if (index >= 0 && index < MaxUnit) {
    return results[index];
  }
  return Result();
}

void Registration::SetResult(int index, const Result& res) {
  if (index >= 0 && index < MaxUnit) {
    results[index] = res;
    if (index >= count) {
      count = index + 1;
    }
  }
}

istream & operator >>(istream & input, Registration & R) {
  long id;
  int sem, cnt;

  if (input >> id >> sem >> cnt) {
    R.SetStudentId(id);
    R.SetSemester(sem);

    for (int i = 0; i < cnt; i++) {
      Result res;
      input >> res;
      R.SetResult(i, res);
    }
  }
  return input;
}

ostream & operator <<(ostream & os, const Registration & R) {
  os << "Student ID: " << R.GetStudentId() << '\n'
     << "Semester:   " << R.GetSemester() << "\n\n";

  for (int i = 0; i < R.GetCount(); i++) {
    os << R.GetResult(i);
  }
  return os;
}
>>>>>>> 41f9e42 (Update from vscode)
