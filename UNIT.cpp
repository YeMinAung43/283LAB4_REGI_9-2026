<<<<<<< HEAD
#include "UNIT.H"

UNIT::UNIT() {
  unitId = "";
  name = "";
  section = '\0';
  credits = 0;
}

UNIT::UNIT(const string& id, const string& nam, char sect, int cred) {
  unitId = id;
  name = nam;
  section = sect;
  credits = cred;
}

string UNIT::GetUnitId() const {
  return unitId;
}

void UNIT::SetUnitId(const string& id) {
  unitId = id;
}

string UNIT::GetName() const {
  return name;
}

void UNIT::SetName(const string& nam) {
  name = nam;
}

char UNIT::GetSection() const {
  return section;
}

void UNIT::SetSection(char sect) {
  section = sect;
}

int UNIT::GetCredits() const {
  return credits;
}

void UNIT::SetCredits(int cred) {
  credits = cred;
}

istream & operator >>(istream & input, UNIT & U) {
  string id, nam;
  char sect;
  int cred;

  if (input >> id >> nam >> sect >> cred) {
    U.SetUnitId(id);
    U.SetName(nam);
    U.SetSection(sect);
    U.SetCredits(cred);
  }
  return input;
}

ostream & operator <<(ostream & os, const UNIT & U) {
  os << "\tUnit ID:   " << U.GetUnitId() << '\n'
     << "\tUnit Name: " << U.GetName() << '\n'
     << "\tSection:   " << U.GetSection() << '\n'
     << "\tCredits:   " << U.GetCredits() << '\n';
  return os;
}
=======
#include "UNIT.H"

UNIT::UNIT() {
  unitId = "";
  name = "";
  section = '\0';
  credits = 0;
}

UNIT::UNIT(const string& id, const string& nam, char sect, int cred) {
  unitId = id;
  name = nam;
  section = sect;
  credits = cred;
}

string UNIT::GetUnitId() const {
  return unitId;
}

void UNIT::SetUnitId(const string& id) {
  unitId = id;
}

string UNIT::GetName() const {
  return name;
}

void UNIT::SetName(const string& nam) {
  name = nam;
}

char UNIT::GetSection() const {
  return section;
}

void UNIT::SetSection(char sect) {
  section = sect;
}

int UNIT::GetCredits() const {
  return credits;
}

void UNIT::SetCredits(int cred) {
  credits = cred;
}

istream & operator >>(istream & input, UNIT & U) {
  string id, nam;
  char sect;
  int cred;

  if (input >> id >> nam >> sect >> cred) {
    U.SetUnitId(id);
    U.SetName(nam);
    U.SetSection(sect);
    U.SetCredits(cred);
  }
  return input;
}

ostream & operator <<(ostream & os, const UNIT & U) {
  os << "\tUnit ID:   " << U.GetUnitId() << '\n'
     << "\tUnit Name: " << U.GetName() << '\n'
     << "\tSection:   " << U.GetSection() << '\n'
     << "\tCredits:   " << U.GetCredits() << '\n';
  return os;
}
>>>>>>> 41f9e42 (Update from vscode)
