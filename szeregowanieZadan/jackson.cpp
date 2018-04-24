#include "stdafx.h"
#include "jackson.h"
#include"zadanie.h"

#include <vector>
#include<string>
#include<iostream>
#include <fstream>

using namespace std;

jackson::jackson()
{
}

jackson::~jackson()
{
}

void jackson::wczytajZadania(string path)
{
	plik.open(path);
	if (!plik.good())
	{
		cout << "blad pliku";
	}
	else
	{
		cout << "otwarto plik" <<endl<< endl;
		plik >> n;
		int r;
		int p;
		while (plik.good())
		{
			plik >> r;
			plik >> p;
			zadanie z1(r, p);
			listaZadan.push_back(z1);
			sortuj();
		}
	}
}

void jackson::wyswietl()
{
	cout << "n=" << n << endl;
	for (int i = 0; i < listaZadan.size() ; i++)
	{
		listaZadan.at(i).wyswietl();
	}
}

void jackson::sortuj()
{
	int i, j;
	bool swapped;
	for (i = 0; i < this->listaZadan.size() - 1; i++)
	{
		swapped = false;
		for (j = 0; j < this->listaZadan.size() - i - 1; j++)
		{
			if (this->listaZadan.at(j).getR() > this->listaZadan.at(j + 1).getR())
			{
				zadanie z1 = this->listaZadan.at(j);
				this->listaZadan.at(j) = this->listaZadan.at(j + 1);
				this->listaZadan.at(j + 1) = z1;
				swapped = true;
			}
		}
		if (swapped == false)break;
	}
}

void jackson::wykonaj()
{
	int Cmax = 0;
	int C = 0;
	int czas = 0;
	for (int i = 0; i < listaZadan.size(); i++)
	{
		if (i == 0)
		{
			C = listaZadan.at(i).getR() + listaZadan.at(i).getP();
			terminyZakonczenia.push_back(C);
		}
		else
		{
			if ((listaZadan.at(i).getR() - terminyZakonczenia.at(i - 1)) < 0)
			{
				C = terminyZakonczenia.at(i - 1) + listaZadan.at(i).getP();
				terminyZakonczenia.push_back(C);
			}
			else
			{
				C = terminyZakonczenia.at(i - 1) + (listaZadan.at(i).getR() - terminyZakonczenia.at(i - 1)) + listaZadan.at(i).getP();
				terminyZakonczenia.push_back(C);
			}
		}
	}

	cout << "Cmax=" << terminyZakonczenia.at(terminyZakonczenia.size()-1) << endl;
}