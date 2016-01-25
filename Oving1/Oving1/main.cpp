//----------------------------------------------------------------------------
//
// finnMoms.cpp
//
// Console program som beregner moms
// Skriv inn bel�p med moms, det printes to resultater, ett hvor bel�pet u/moms, ett kun moms.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	const double moms = 25.0;

	double medMoms;
	cout << "Skriv bel�pet med moms: ";
	cin >> medMoms;

	double utenMoms = medMoms / (100.0 + moms) * 100.0;
	double momsBeloep = medMoms - utenMoms;

	cout << "Uten moms er bel�pet: " << utenMoms << " kroner." << endl;
	cout << "Det vil si at momsen er: " << momsBeloep << " kroner." << endl;
	system("pause");
	return 0;

} // main