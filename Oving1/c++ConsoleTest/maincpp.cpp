//ø = ›
//å = †
//æ = ‘

#include <iostream>
#include <conio.h>
#include "mainsnitt.h"

using namespace std;

#define FART 97
#define TID 98

int main()
{

	cout << "Trykk 'a' p† tastaturet for Oppgave 1 - Snitthastighet" << endl << "Trykk 'b' p† tastaturet for Oppgave 2 - Tid" << endl;
	int c = 0;
	while (1)
	{

		//c = 0;

		switch ((c = _getch())) {

		case FART:
			cout << "FART" << endl;

			double hastighet;
			double tid;

			cout << "Skriv inn hastighet, i km/t: ";

			cin >> hastighet;

			if (cin.good() && hastighet >= 0 && hastighet <= 999)
			{
				cout << "Skriv inn hvor lang tid du brukte, i timer: ";

				cin >> tid;

				if (cin.good() && tid >= 0.001 && tid <= 999)
				{
					cout << "Din snitthastighet er: " << snitt(hastighet, tid) << " km/t" << endl;

					cout << endl;
				}
				else
				{
					cout << "Kun GYLDIGE numeriske verdier" << endl;

					cout << endl;
				}
			}
			else
			{
				cout << "Kun GYLDIGE numeriske verdier" << endl;

				cout << endl;
			}
		
			cout << "Trykk 'a' p† tastaturet for Oppgave 1 - Snitthastighet" << endl << "Trykk 'b' p† tastaturet for Oppgave 2 - Tid" << endl;

			cout << endl;

			break;
		case TID:
			cout << "TID" << endl;

			int hours;
			int minutes;
			int seconds;

			int time = 0;

			cout << "Skriv inn tid, i sekunder: ";
			cin >> time;
			cout << endl;

			if (cin.good() && time >= 1 && time <= 9999999)
			{
				hours = static_cast<int>(time / 3600);

				time = time - hours * 3600;

				minutes = static_cast<int>(time / 60);

				time = time - minutes * 60;

				seconds = time;

				cout << "Din tid fra sekunder til formatet HH:MM:SS : " << hours;
				if (minutes < 10)
					cout << ":0" << minutes;
				else
					cout << ":" << minutes;

				if (seconds < 10)
					cout << ":0" << seconds;
				else
					cout << ":" << seconds;
			}
			else
			{
				cout << "Kun GYLDIGE numeriske verdier" << endl;
			}

			cout << endl;

			cout << endl;

			cout << "Trykk 'a' p† tastaturet for Oppgave 1 - Snitthastighet" << endl << "Trykk 'b' p† tastaturet for Oppgave 2 - Tid" << endl;

			cout << endl;

			break;

		}
	}
}