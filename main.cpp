#include <list>
#include <iostream>
#include <string>
#include "Osoba.h"
#include "ListaTab.h"
using namespace std;
int main() {
	Osoba osoba1 = { "Jan","Kowalski",22 };
	Osoba osoba2 = { "Adam","Nowak",22 };
	Osoba osoba3 = { "Stefan","Batory",22 };

	ListaTab<Osoba> listaMC;
	listaMC.Insert(osoba1, 0);
	listaMC.Insert(osoba2, 1);
	listaMC.Insert(osoba3, 2);
	listaMC.print();
	

	system("pause");
	return 0;
}