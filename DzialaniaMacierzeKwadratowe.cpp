#include <iostream>
#include <math.h>


using namespace std;

double Wyznacznik_maczierzy_kwadratowej(double tab[], int rozmiar);
double * Mnozenie_macierzy_kwadratowych(double tab0[], double tab1[], int rozmiar);
void Transponuj_Macierz_kwadratowa(double tab[], int rozmiar);

int main()
{
	int rozmiar;
	cout << "podaj rozmiar maciery kwadratowej:";
	cin >> rozmiar;

	//																	   x  y		   x	 y				
	//format wyczytawanie danych z rablicy np dla tablicy 5x3 z komowrki x[5][3]to x[(3*4)+(3-1)]
	//																	 x[0][3]to x[(3*0)+(3-1)]
	//Przyklad znumerowanie indeskow
	//0 1 2
	//3 4 5
	//6 7 8
	//9 10 11
	//12 13 14
	double* macierz0 = new double [rozmiar*rozmiar]; 
	double* macierz1 = new double [rozmiar*rozmiar];
	double* macierz2 ;

	cout << "Podaj elemtny pierwszej macierzy" << endl;
	for (int i = 0; i < rozmiar*rozmiar; i = i + rozmiar)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			cout<<(i/rozmiar)<<":"<<j<<" =";
			cin >> macierz0[(i) + (j)];//dzialanie glownej petki zapenia ze taki zapis jest poprawny 
		}

	}
	
	cout << "Podaj elemtny drugiej macierzy" << endl;
	for (int i = 0; i < rozmiar*rozmiar; i = i + rozmiar)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			cout << (i / rozmiar) << ":" << j << " =";
			cin >> macierz1[(i)+(j)];//dzialanie glownej petki zapenia ze taki zapis jest poprawny 
		}
	}
	

	cout << "wyznacznik mazierzy0=" << Wyznacznik_maczierzy_kwadratowej(macierz0, rozmiar) << endl;
	
	macierz2 = Mnozenie_macierzy_kwadratowych(macierz0,macierz1,rozmiar);
	
	cout << "macierz0 * macierz1" << endl;
	for (int i = 0; i < rozmiar*rozmiar; i = i + rozmiar)
	{
		for (int j = 0; j < rozmiar; j++)
		{
		cout<<macierz2[(i)+(j)]<<" ";
		}
		cout << endl;
	}
	
	cout << "macierz0 ztransponowana" << endl;
	Transponuj_Macierz_kwadratowa(macierz0, rozmiar);
	for (int i = 0; i < rozmiar*rozmiar; i = i + rozmiar)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			cout << macierz0[(i)+(j)] << " ";
		}
		cout << endl;
	}


	cout << "ztransponowana Ponownie" << endl;
	Transponuj_Macierz_kwadratowa(macierz0, rozmiar);
	for (int i = 0; i < rozmiar*rozmiar; i = i + rozmiar)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			cout << macierz0[(i)+(j)] << " ";
		}
		cout << endl;
	}

	delete []macierz1 ;
	delete []macierz0 ;
	delete []macierz2;
	return 0;
}

double Wyznacznik_maczierzy_kwadratowej(double tab[], int rozmiar)
{
	double wyznacznik=0;

	if (rozmiar >3)
	{
		double *tmp = new double[(rozmiar - 1)*(rozmiar - 1)];
		int licznik_tmp = 0;

			for (int j = 0; j < rozmiar; j++)
			{
				for (int k = rozmiar; k< rozmiar*rozmiar; k = k + rozmiar)//ten bloczek kodu słuzy za wprowadznie do tmp odpowiednych wartosci
				{
					for (int i = 0; i < rozmiar; i++)
					{
						if (i != j)
						{
							tmp[licznik_tmp] = tab[(k)+(i)];
							licznik_tmp++;
						}
					}
				}
					wyznacznik = wyznacznik +(pow(-1, (1 + (j + 1)))*(tab[0 + j] * Wyznacznik_maczierzy_kwadratowej(tmp, rozmiar - 1)));//ze wzory na wyznacznie wyznacznika 
					licznik_tmp = 0;
			}
		delete[]tmp;
		return wyznacznik;
	}
	else if (rozmiar == 3)
	{
		return((tab[0] * tab[4] * tab[8]) + (tab[1] * tab[5] * tab[6]) + (tab[2] * tab[3] * tab[7]) - ((tab[2] * tab[4] * tab[6]) + (tab[0] * tab[5] * tab[7]) + (tab[1] * tab[3] * tab[8])));
	}
	else if (rozmiar == 2)
	{
		return ((tab[0] * tab[3])-(tab[2] * tab[1]));
	}
	else if (rozmiar == 1)
	{
		return tab[0];
	}
	else
	{
		return NULL;
	}
}
//----------------------------------------------------------------------------------------------------------------
double * Mnozenie_macierzy_kwadratowych(double tab0[], double tab1[], int rozmiar)
{
	double *ans = new double[rozmiar*rozmiar];
	int tab1_wsk = 0;
	int tab0_wsk = 0;
	int ans_wsk = 0;

	for (int i = 0; i < rozmiar*rozmiar; i++)
	{
		ans[i] = 0;
	}

	for(int k=0;k<rozmiar;k++)
	{
	for (int j = 0;j < rozmiar; j++)
		{
			for (int i = 0; i < rozmiar; i++)
			{
				ans[ans_wsk] = ans[ans_wsk]+(tab0[tab0_wsk] * tab1[tab1_wsk]);
				tab1_wsk = tab1_wsk + rozmiar;
				tab0_wsk = tab0_wsk + 1;
			}
		tab1_wsk = tab1_wsk-((rozmiar * rozmiar) - 1);//ustawnienie na nastepna kolumne 
		tab0_wsk = tab0_wsk-rozmiar;//ustawia w nastepny wiersz 
		ans_wsk++;
		}
	tab0_wsk = tab0_wsk + rozmiar;
	tab1_wsk = 0;
	}

	return ans;
}
//----------------------------------------------------------------------------------------------------------------
void Transponuj_Macierz_kwadratowa(double tab0[], int rozmiar)
{
	double *tmp = new double[rozmiar*rozmiar];
	int tmp_wsk = 0;
	int tab0_wsk = 0;

	for (int i = 0; i < rozmiar*rozmiar; i++)
	{
		tmp[i] = tab0[i];
	}

	for(int j=0;j<rozmiar;j++)
	{ 
		for (int i = 0; i < rozmiar; i++)
		{
			tab0[tab0_wsk] = tmp[tmp_wsk];
			tmp_wsk = tmp_wsk + rozmiar;
			tab0_wsk++;
			
		}
		tmp_wsk = tmp_wsk - ((rozmiar * rozmiar) - 1);//ustawnienie na nastepna kolumne 
	}
	
	delete[]tmp;
}