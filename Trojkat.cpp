#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, c,p;

	cout << "podaj a,b,c"<<endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if((a+b)>c)
	{
		if ((a + c) > b)
		{
			if ((b + c) > a)
			{
				p = ((a + b + c) / 2);
				cout << "taki tojkat moze powstac i bedzie miec" << endl;
				cout << "obwod rowny:" << a + b + c << endl;
				cout << "a jego pole jest rowne:" << sqrt(p*(p - a)*(p - b)*(p - c));
			}

		}
	}
	else
	{
		cout << "taki trojkat nie moze powstac" << endl;
	}

	return 0;
}
