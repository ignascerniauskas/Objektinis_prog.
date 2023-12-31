#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <ctime>


using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::vector;
using std::fixed;
using std::setprecision;
using std::setw;
using std::left;

struct studentas {
  string vard, pav;
  vector <int> paz;
  int egz;
  float vidGalutinis;
  float medGalutinis;
};

void duomenuIvedimas(vector<studentas>& grupe);
float apskaiciuotiVidurki(const studentas& stud);
float apskaiciuotiMediana(const studentas& stud);
void rezultatuIsvendimasEkrane(vector<studentas>& grupe, bool naudotividurki);
void generuotiPazymius(studentas& stud);
void generuotiPazymius1(studentas& stud, int nd_sk);
void generuotiEgzamina(studentas& stud);
