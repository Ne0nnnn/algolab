#include <iostream>
using namespace std;

bool rowne(int a,int b);

int main() 
{
	bool z=true;
	int a,b;
	cout<<"podaj a:";
	cin>>a;
	cout<<"podaj b:";
	cin>>b;

	while(z)
	{

	z=rowne(a,b);

	if(a>b)
		{
		a=a-b;
		}
	else
		{
		b=b-a;
		}
	}

	cout<<"odpowiedz:"<<a<<endl;

	 return 0;
}

bool rowne(int  a,int b)
{
if(a==b)
return true;
else
return false;
}
