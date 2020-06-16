#pragma once
#include <iostream>
#include <string>
using namespace std;
class Osoba
{
public:
	string imie;
	string nazwisko;
	int wiek;
	friend ostream& operator<<(ostream& wyjscie, const Osoba &s);
};
