// szeregowanieZadan.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include "jackson.h"
#include <string>

using namespace std;

int main()
{
	jackson zbior;
	zbior.wczytajZadania("zadania.txt");
	zbior.wyswietl();
	zbior.wykonaj();

    return 0;
}

