#pragma once
#include <vector>
#include<string>
#include<iostream>
#include <fstream>
#include"zadanie.h"

using namespace std;

class zbiorZadan
{
private:
	int n;
	ifstream plik;
	vector<zadanie> listaZadan;
	vector<int>terminyZakonczenia;
	void sortuj();

public:
	zbiorZadan();
	~zbiorZadan();
	void wczytajZadania(string path);
	void wyswietl();
	void wykonaj();

};

