#include <iostream>
using namespace std;

float potega(float liczba,int potega);
int main() 
{
	float liczba;
	int n;
	float wynik;

	cout<<"podaj liczbe:";
	cin>>liczba;
	cout<<"podaj potege:";
	cin>>n;
//-------------------------------
	cout<<potega(liczba,n);

		 return 0;
}


float potega(float liczba,int potega)
{
float wynik=1;
if(potega==0)
{
return wynik;
}

else if(potega<0)
{
	potega=potega*-1;
	liczba=1/liczba;
}

for(int i=0;i<potega;i++)
	{
	wynik=wynik*liczba;
	cout<<wynik<<"="<<wynik<<"*"<<potega<<endl;
	}
return wynik;

}
