#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int losowa = rand() % 15;

	int licznik=0;

	int zmienna;


	for (;;)
	{
		licznik++;
		cout << "zgadnij liczbe od 1 do 15 :";
		cin >> zmienna;
		if (zmienna == losowa)
		{
			cout << "zgadles za " << licznik << " podejsciem" << endl;
				break;
		}
		else if (zmienna > losowa)
		{
			cout << "zgadywana liczba jest mniesza od podanej" << endl;
		}
		else if (zmienna < losowa)
		{
			cout << "zgadywana liczba jest wieksza od podanej " << endl;
		}

	}
	return 0;
}
