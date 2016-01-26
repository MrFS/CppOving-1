#include <iostream>
#include <conio.h>
#include "mainsnitt.h"

using namespace std;

#define FART 97
#define TID 98

int main()
{

	cout << "Trykk 'a' på tastaturet for Oppgave 1 - Snitthastighet" << endl << "Trykk 'b' på tastaturet for Oppgave 2 - Tid" << endl;
	int c = 0;
	while (1)
	{

		//c = 0;

		switch ((c = _getch())) {

		case FART:
			cout << "FART" << endl;

			int hastighet;
			int tid;

			cout << "Skriv inn hastighet, i km/t: ";

			cin >> hastighet;

			cout << "Skriv inn hvor lang tid du brukte, i timer: ";

			cin >> tid;


			cout << "Din snitthastighet er: " << snitt(hastighet, tid) << " km/t" << endl;

			cout << endl;

			cout << "Trykk 'a' på tastaturet for Oppgave 1 - Snitthastighet" << endl << "Trykk 'b' på tastaturet for Oppgave 2 - Tid" << endl;

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

			cout << endl;

			cout << endl;

			cout << "Trykk 'a' på tastaturet for Oppgave 1 - Snitthastighet" << endl << "Trykk 'b' på tastaturet for Oppgave 2 - Tid" << endl;

			cout << endl;

			break;

		}
	}
}