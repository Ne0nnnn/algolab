#include <iostream>
using namespace std;

int iteracyjnie(int liczba);
int rekurencyjnie(int liczba);

int main() 
{
	int liczba;

	cout<<"podaj silnie z ilu:";
	cin>>liczba;

	cout<<rekurencyjnie(liczba);
	 return 0;
}
int iteracyjnie(int liczba)
{
	int silnia=1;

	for(int i=2;i<=liczba;i++)
	{
	silnia=silnia*i;
	}
	return silnia;
}

int rekurencyjnie(int liczba)
{
if(liczba>1)
return (rekurencyjnie(liczba-1)*liczba);
else
return liczba;
}


