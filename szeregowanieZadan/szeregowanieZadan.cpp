// szeregowanieZadan.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include "zbiorZadan.h"
#include <string>

using namespace std;

int main()
{
	zbiorZadan zbior;
	zbior.wczytajZadania("zadania.txt");
	zbior.wyswietl();
	zbior.wykonaj();

    return 0;
}

