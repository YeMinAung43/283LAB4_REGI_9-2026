/**
 * @file UNIT.H
 * @brief Header file for the UNIT class using std::string.
 * @author Ye Min Aung
 * @date 2026-09-09
 */

#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string>

using namespace std;

/**
 * @class UNIT
 * @brief Stores unit information including unit ID, name, section, and credits.
 */
class UNIT {
public:
  UNIT();
  UNIT(const string& id, const string& nam, char sect, int cred);

  string GetUnitId() const;
  void SetUnitId(const string& id);

  string GetName() const;
  void SetName(const string& nam);

  char GetSection() const;
  void SetSection(char sect);

  int GetCredits() const;
  void SetCredits(int cred);

private:
  string unitId;  ///< Unit identifier code
  string name;    ///< Unit title name
  char section;   ///< Section letter designation
  int credits;    ///< Credit points awarded
};

// NO friend keyword
ostream & operator <<(ostream & os, const UNIT & U);
istream & operator >>(istream & input, UNIT & U);

#endif // UNIT_H
