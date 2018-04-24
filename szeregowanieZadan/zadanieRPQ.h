#pragma once
class zadanieRPQ
{
private:
	int r;//termin dostepnosci zadania
	int p;//czas obslugi zadania
	int q;//termin dostarczenia-oddania zadania
public:
	zadanieRPQ(int R, int P, int Q);
	~zadanieRPQ();

	int getR();
	int getP();
	int getQ();
};

