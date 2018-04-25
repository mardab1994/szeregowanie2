#pragma once
#include<string>
#include <vector>
#include "zadanieRPQ.h"

using namespace std;

class kolejkaPriorytetowa
{
private:
	vector <zadanieRPQ> tablica;

	zadanieRPQ isEmpty();
	void moveElements();

public:
	kolejkaPriorytetowa();
	~kolejkaPriorytetowa();

	void enqueueR(int r, int p, int q);
	void enqueueQ(int r, int p, int q);

	zadanieRPQ dequeue();
	zadanieRPQ front();
	int size();
	bool isQueueEmpty();
	void show();

	void sortR();
	void sortQ();
};
