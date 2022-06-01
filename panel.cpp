#include "panel.h";

double Complex::absolute()
{
	return sqrt(GetRE() * GetRE() + GetIM() * GetIM());
}

void fill_complex(Complex *a,unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		a[i].SetIM(rand()%10);
		a[i].SetRE(rand() % 10);
	}
}

void Print(Complex* a, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i].GetIM() >= 0) cout << a[i].GetRE() << "+" << a[i].GetIM() << "i" << endl;
		else cout << a[i].GetRE() << a[i].GetIM() << "i" << endl;
	}
	cout << endl;
	
}

bool Complex::operator>(Complex a)
{
	if (absolute() > a.absolute()) return true;
	return false;
}
