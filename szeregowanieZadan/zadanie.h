#pragma once
#include<string>
#include<iostream>

using namespace std;
class zadanie
{
private:
	int r;	// termin dost�pno�ci zadania
	int p;	// czas obs�ugi zadania
	
public:
	zadanie();
	zadanie(int R, int P);
	~zadanie();

	int getR();
	int getP();
	void wyswietl();
};

