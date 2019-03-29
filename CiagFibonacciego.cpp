#include <iostream>


using namespace std;

int main()
{
	int fib[3]{1,1,2};
	int licznik = 0;
	int liczba ;
	int zm;

	cout << "podaj liczbe wyrazow ciagu fibonaciego:";
	cin >> liczba;
	cout << "---------" << endl;

	if (liczba > 1)
	{
		cout << 0 << endl;

		for (int i = 0; i < liczba; i++)
		{
			zm = licznik % 3;
			cout << fib[zm] << endl;
			if (zm == 0)
			{
				fib[zm] = fib[zm + 1] + fib[zm + 2];
			}
			else if(zm==1)
			{
				fib[zm] = fib[zm-1] + fib[zm + 1];
			}
			else if (zm == 2)
			{
				fib[zm] = fib[zm - 2] + fib[zm - 1];
			}

			licznik++;
		}
	}
	else if(liczba<=0)
	{
		cout << 0<<endl;
	}
	else if (liczba == 1)
	{
		cout << 1 << endl;
	}

	return 0;
}
