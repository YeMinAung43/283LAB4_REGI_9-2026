<<<<<<< HEAD
#include "REGIST.H"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream infile("rinput.txt");
  if (!infile) return -1;

  Registration R;
  infile >> R;

  ofstream ofile("routput.txt");
  ofile << R
        << "Number of courses = " << R.GetCount() << '\n'
        << "Total credits     = " << R.GetCredits() << '\n';

  return 0;
}
=======
#include "REGIST.H"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream infile("rinput.txt");
  if (!infile) return -1;

  Registration R;
  infile >> R;

  ofstream ofile("routput.txt");
  ofile << R
        << "Number of courses = " << R.GetCount() << '\n'
        << "Total credits     = " << R.GetCredits() << '\n';

  return 0;
}
>>>>>>> 41f9e42 (Update from vscode)
