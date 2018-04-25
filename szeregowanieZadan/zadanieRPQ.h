#pragma once
class zadanieRPQ
{
private:
	int r;//termin dostepnosci zadania
	int p;//czas obslugi zadania
	int q;//termin dostarczenia-oddania zadania
public:
	zadanieRPQ(int R, int P, int Q);
	zadanieRPQ();
	~zadanieRPQ();

	int getR();//termin dostepnosci
	int getP();//czas obslugi
	int getQ();//termin dostarczenia/oddania zadania
	
	void decR();//dekrementuje R
	void decP();//dekrementuje P
	void decQ();//dekrementuje Q

	void wyswietl();
};

