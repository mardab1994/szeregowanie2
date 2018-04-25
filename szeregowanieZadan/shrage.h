#pragma once
#include <vector>
#include<string>
#include<iostream>
#include <fstream>
#include"zadanieRPQ.h"
#include"kolejkaPriorytetowa.h"

using namespace std;

class shrage
{
private:
	int n;
	ifstream plik;
	kolejkaPriorytetowa N;
	vector<zadanieRPQ>permutacjaPi;
	void sortuj();
	int max(int a, int b);
public:
	shrage();
	~shrage();

	void wczytajZadania(string path);
	void wyswietl();
	void wykonaj();

	zadanieRPQ front();
};

