#include <iostream>
#include <math.h>
using namespace std;

int Max_wart(int tab[],int rozmiar);
int Min_wart(int tab[],int rozmiar);
int Rozrzut_wart(int tab[],int rozmiar);
float Srednia_wart(int tab[],int rozmiar);
float Odchylenie_wart(int tab[],int rozmiar);
float Wariancje_wart(int tab[],int rozmiar);
int Elementy_podzlene_3_wart(int tab[],int rozmiar);
int Wartosc_n(int tab[],int n);


int main() 
{
	int zmienna;
	int test[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
       	for(;;)
{
	cout << "1.Max wartosc"<<endl;
	cout << "2.Min wartosc"<<endl;
	cout << "3.Rozrzut wartosci"<<endl;
	cout << "4.Srednia arytmetyczna wszystkich elementow"<<endl;
	cout << "5.Odchylenie standarwode"<<endl;
	cout << "6.Wariancje"<<endl;
	cout << "7.czy wystepuje elementy podzielne przez 3 wraz z ich liczba"<<endl;
	cout << "8.wartosc ntego elemtu"<<endl;
	cout << "9.Wyjdz"<<endl;
	cout << "podaj operacje:";
	cin>>zmienna;

	switch(zmienna) {
   case 1:
     cout<<endl <<Max_wart(test,20)<<endl;
      break;
   case 2 :
      cout<<endl <<Min_wart(test,20)<<endl;
      break; 
   case 3:
      Rozrzut_wart(test,20);
      break;
    case 4:
       cout<<endl<<Srednia_wart(test,20)<<endl;
      break;
    case 5:
      cout<<endl<< Odchylenie_wart(test,20)<<endl;
      break;
    case 6:
       cout<<endl<<Wariancje_wart(test,20)<<endl;
      break;
    case 7:
      cout<<endl<< Elementy_podzlene_3_wart(test,20)<<endl;
      break;
    case 8:
      cout<<"podaj n:";
      cin>>zmienna;
       cout<<Wartosc_n(test,zmienna)<<endl;
      break;
   case 9:
      return 0;
      break;
   default : 
     cout<<"podaj poprawna liczbe"<<endl ;
	}
}
}
//-----------------------------------------
int Max_wart(int tab[],int rozmiar)
{
int ret=tab[0];
for(int i=1;i<rozmiar;i++)
	{
	if(tab[i]>ret)
	ret=tab[i];
	}			
return ret;
}
//-----------------------------------------
int Min_wart(int tab[],int roamiar)
{
int ret=tab[0];
for(int i=1;i<roamiar;i++)
	{
	if(tab[i]<ret)
	ret=tab[i];
	}			
return ret;
}
//-----------------------------------------
int Rozrzut_wart(int tab[],int rozmiar)
{

int *tmp=new int [2*rozmiar];

for(int i=0;i<rozmiar;i++)
{
tmp[i]=tab[i];
tmp[i+rozmiar]=0;
}

for(int i=0;i<rozmiar;i++)
{
	for(int j=0;j<rozmiar;j++)
	{
		if(tmp[i]==tmp[j])
		{
		tmp[i+rozmiar]=tmp[i+rozmiar]+1;
		if(tmp[i+rozmiar]>tmp[j+rozmiar])
			{
			tmp[j+rozmiar]=-1;//sprawi to ze nie beda sie wysietlaly te same cyfry po kilka razy 
			}
		}
	}	
}


for(int i=0;i<rozmiar;i++)
{
	if(tmp[i+rozmiar!=-1])
	{
	cout<<tmp[i]<<" wystapilo ";
	cout<<tmp[i+rozmiar]<<endl;
	}
}

delete [] tmp;
return 0;	
}
//-----------------------------------------
float Srednia_wart(int tab[],int rozmiar)
{
int sum=0;
for (int i=0;i<rozmiar;i++)
	{
	sum+=tab[i];
	}	
return sum/rozmiar;
}
//-----------------------------------------
float Odchylenie_wart(int tab[],int rozmiar)	
{
float srednia=Srednia_wart(tab,rozmiar);

float odhyl_standard=1/(rozmiar-1);

float liczba=0;

for(int i=0;i<rozmiar;i++)
{
liczba+=pow(tab[i]-srednia,2);//obliczanie wariancji odchylenia standardowego
}

odhyl_standard=sqrt(odhyl_standard*liczba);


return odhyl_standard;
}
//-----------------------------------------
float Wariancje_wart(int tab[],int rozmiar)
{
float srednia=Srednia_wart(tab,rozmiar);

float liczba=0;

for(int i=0;i<rozmiar;i++)
{
liczba+=pow(tab[i]-srednia,2);
}

return liczba/rozmiar ;
}
//-----------------------------------------
int Elementy_podzlene_3_wart(int tab[],int rozmair)
{
int licznik;
for(int i=0;i<rozmair;i++)
{
if((tab[i]%3)==0)
licznik++;
}
return licznik ;
}
//-----------------------------------------
int Wartosc_n(int tab[],int n)
{
return tab[n];
}



