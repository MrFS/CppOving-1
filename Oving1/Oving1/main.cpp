//----------------------------------------------------------------------------
//
// finnMoms.cpp
//
// Console program som beregner moms
// Skriv inn beløp med moms, det printes to resultater, ett hvor beløpet u/moms, ett kun moms.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	const double moms = 25.0;

	double medMoms;
	cout << "Skriv beløpet med moms: ";
	cin >> medMoms;

	double utenMoms = medMoms / (100.0 + moms) * 100.0;
	double momsBeloep = medMoms - utenMoms;

	cout << "Uten moms er beløpet: " << utenMoms << " kroner." << endl;
	cout << "Det vil si at momsen er: " << momsBeloep << " kroner." << endl;
	system("pause");
	return 0;

} // main