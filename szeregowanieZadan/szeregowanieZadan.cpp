// szeregowanieZadan.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <string>

#include "jackson.h"
#include"shrage.h"

using namespace std;

int main()
{
	jackson zbior;
	zbior.wczytajZadania("zadania.txt");
	zbior.wyswietl();
	zbior.wykonaj();

	shrage zbior2;
	
	zbior2.wczytajZadania("SCHRAGE1.txt");
	zbior2.wyswietl();
	zbior2.wykonaj();

    return 0;
}

