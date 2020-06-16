#pragma once
#include <iostream>
#include <string>
using namespace std;
template<typename TYP> class ListaTab
{
	TYP T[100];
	int Last; //indeks ostatniego elementu listy
public:
	ListaTab() { Last = -1; }
	int End();
	int First();
	int Next(int P);
	int Previous(int P);
	int Locate(TYP X);
	TYP Retrieve(int P);
	bool Insert(TYP X, int P);
	bool Delete(int P);
	void print();
};
template<typename TYP> int ListaTab<TYP>::End()
{
	return Last + 1;
}
template<typename TYP> int ListaTab<TYP>::First()
{
	return 0;
}
template<typename TYP> int ListaTab<TYP>::Next(int P)
{
	if (P < End())
	{
		return P + 1;
	}
	else cout << "Podany indeks jest poza zakresem listy." << endl; return
		NULL;
}
template<typename TYP> int ListaTab<TYP>::Previous(int P)
{
	if ((P <= First()) || (P > End())) {
		cout << "Podany indeks jest pozazakresem listy." << endl;
		return NULL;
	}
	else return P - 1;
	}
	template<typename TYP> int ListaTab<TYP>::Locate(TYP X)
	{
		for (int i = 0; i < End(); i++)
			if (T[i] == X)return i;
		return End();
	}
	template<typename TYP> TYP ListaTab<TYP>::Retrieve(int P)
	{
		if (P >= First() && P <= End())
		{
			return T[P];
		}
		else return T[0];
	}
	template<typename TYP> bool ListaTab<TYP>::Insert(TYP X, int P)
	{
		if ((P < First()) || (P > End()))
			return false;
		if (P == End())
		{
			T[P] = X;
			Last = Last + 1;
			return true;
		}
		if (P < End())
		{
			for (int k = End(); k > P; k--)
			{
				T[k] = T[k - 1];
			}
			T[P] = X;
			Last = Last + 1;
			return true;
		}
		return false;
	}
	template<typename TYP> bool ListaTab<TYP>::Delete(int P)
	{
		while (P < End() - 1)
		{
			T[P] = T[P + 1];
			P++;
		}
		Last--;
		return false;
	}
	template<typename TYP> void ListaTab<TYP>::print()
	{
		int i = First();
		while (i != End())
		{
			cout << Retrieve(i);
			i = Next(i);
		}
		cout << endl;
	}