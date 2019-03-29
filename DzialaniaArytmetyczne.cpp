#include <iostream>


using namespace std;
double suma(double a,double b);
double roznica(double a, double b);
double iloczyn(double a, double b);
double iloraz(double a, double b);
int main()
{
	double a, b;
	char dzial;

	cout << "podaj a,b" << endl;
	cin >> a;
	cin >> b;

	cout << "wybierz dzialanie" << endl;
	cout << "1-suma a+b" << endl;
	cout << "2-roznica a-b" << endl;
	cout << "3-iloczyn a*b" << endl;
	cout << "4-iloraz a/b" << endl;
	cin >> dzial;


	
	
	if (dzial=='1')
	{
		cout << suma(a, b) << endl;
	}
	else if (dzial == '2')
	{
		cout << roznica(a, b) << endl;
	}
	else if (dzial == '3')
	{
		cout << iloczyn(a, b) << endl;
	}
	else if (dzial == '4')
	{
		cout << iloraz(a, b) << endl;
	}
	else
	{
		cout << "nie ma takiej opcji" << endl;
	}



	return 0;
}
double suma(double a, double b)
{
	return a + b;
}
double roznica(double a, double b)
{
	return a - b;
}
double iloczyn(double a, double b)
{
	return a * b;
}
double iloraz(double a, double b)
{
	if (b == 0)
	{
		cout << "dzielenie przez zero operacja nie mozliwa"<<endl;
		return NULL;
	}
	return a / b;
}