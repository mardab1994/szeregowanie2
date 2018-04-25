#include "stdafx.h"
#include "shrage.h"
#include"kolejkaPriorytetowa.h"

shrage::shrage()
{
}


shrage::~shrage()
{
}

void shrage::wczytajZadania(string path)
{
	plik.open(path);
	if (!plik.good())
	{
		cout << "blad pliku";
	}
	else
	{
		cout << "otwarto plik" << endl << endl;
		plik >> n;
		int r;
		int p;
		int q;

		while (plik.good())
		{
			plik >> r;
			plik >> p;
			plik >> q;
			N.enqueueR(r, p, q);
			N.sortR();
		}
	}
}


void shrage::sortuj()
{
	/*int i, j;
	bool swapped;
	for (i = 0; i < this->N.size() - 1; i++)
	{
		swapped = false;
		for (j = 0; j < this->N.size() - i - 1; j++)
		{
			if (this->N.at(j).getR() > this->N.at(j + 1).getR())
			{
				zadanieRPQ z1 = this->N.at(j);
				this->N.at(j) = this->N.at(j + 1);
				this->N.at(j + 1) = z1;
				swapped = true;
			}
		}
		if (swapped == false)break;
	}*/
}


void shrage::wyswietl()
{
	N.show();
}


void shrage::wykonaj()
{
	int t = 0;
	//int k = 0;
	int Cmax = 0;

	kolejkaPriorytetowa G;

	//do

	while ((G.size() != 0) || (N.size() != 0))
	{
		zadanieRPQ zz = N.front();
		while((N.size()!=0) && (zz.getR()<=t))
		{
			zz = N.front();
			cout << "z front ";
			zz.wyswietl();
			//if (zz.getR() <= t)
			{
				zadanieRPQ z = N.dequeue();
				G.enqueueQ(z.getR(), z.getP(), z.getQ());
			} 
			
		}
		//5:
		if (G.size() == 0)
		{
			zadanieRPQ z1= N.front();
			t = z1.getR();
			continue;
		}
		//7:
		zadanieRPQ e=G.dequeue();
		//8:
		//k += 1;
		permutacjaPi.push_back(e);
		t += e.getP();
		Cmax = max(Cmax,t+e.getQ());
	} //while ((G.size() != 0) || (N.size() != 0));

	cout << "Cmax=" << Cmax << endl;

}

int shrage::max(int a, int b)
{
	if (a > b)return a;
	return b;
}



zadanieRPQ shrage::front()
{
	return N.front();
	//z.wyswietl();
}






