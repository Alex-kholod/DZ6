#include "panel.h";

void fill_area(int* mas, unsigned size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 10;
	}
	print(mas, size);
}
void fill_area(double* mas, unsigned size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		mas[i] = (double)(rand()) / RAND_MAX;
	}
	print(mas, size);
}

void sort_puz(int* mas, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (mas[j] > mas[j + 1])
			{
				swap(mas[j], mas[j + 1]);
			}
		}
	}
	print(mas, size);
}
void sort_puz(double* mas, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (mas[j] > mas[j + 1])
			{
				swap(mas[j], mas[j + 1]);
			}
		}
	}
	print(mas, size);
}

void sort_vstavka(int* arr, unsigned size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
		{
			swap(arr[j - 1], arr[j]);
		}		
	}
	print(arr, size);
}
void sort_vstavka(double* arr, unsigned size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
		{
			swap(arr[j - 1], arr[j]);
		}
	}
	print(arr, size);
}

void sort_selection(int* arr, unsigned size)
{
	int min = 0;
	int buf = 0;
	for (int i = 0; i < size; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			min = (arr[j] < arr[min]) ? j : min;
		}
		if (i != min)
		{
			buf = arr[i];
			arr[i] = arr[min];
			arr[min] = buf;
		}
	}
	print(arr, size);
}

void sort_selection(double* arr, unsigned size)
{
	int min = 0;
	double buf = 0;
	for (int i = 0; i < size; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			min = (arr[j] < arr[min]) ? j : min;
		}
		if (i != min)
		{
			buf = arr[i];
			arr[i] = arr[min];
			arr[min] = buf;
		}
	}
	print(arr, size);
}

void print(int* mas, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(10) << mas[i];
		//cout << mas[i] << setw(10);
	}
	cout << endl;
}
void print(double* mas, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(10) << mas[i];
		//cout << mas[i] << setw(10);
	}
	cout << endl;
}

int sum(int a, int b)
{
	return a + b;
}

double sum(double a, double b)
{
	return a + b;
}

int difference(int a, int b)
{
	return a - b;
}

double difference(double a, double b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

double multiplication(double a, double b)
{
	return a * b;
}

int division(int a, int b)
{
	if (b == 0)
	{
		cout << "Деление на ноль!" << endl;
		return 0;
	}
	return a / b;
}

double division(double a, double b)
{
	if (b == 0)
	{
		cout << "Деление на ноль!" << endl;
		return 0;
	}
	return a / b;
}

//double absolute(Complex a)
//{
//	return sqrt(a.re * a.re + a.im * a.im);
//}

Complex Complex::sum(Complex a)
{
	double x = this->GetRE() + a.GetRE();
	double y = this->GetIM() + a.GetIM();
	Complex z(x, y);
	return z;
}
Complex Complex::difference(Complex a)
{
	double x = this->GetRE() - a.GetRE();
	double y = this->GetIM() - a.GetIM();
	Complex z(x, y);
	return z;
}

Complex Complex::multip(Complex a)
{
	double x = this->GetRE() * a.GetRE() - this->GetIM() * a.GetIM();
	double y = this->GetRE() * a.GetIM() + this->GetIM() * a.GetRE();
	Complex z(x,y);
	return z;
}
Complex Complex::division(Complex a)
{
	double x = this->GetRE() * a.GetRE() - this->GetRE() * a.GetIM() + a.GetRE() * this->GetIM() + this->GetIM() * a.GetIM();
	double y = a.GetRE() * a.GetRE() - a.GetRE() * a.GetIM() + a.GetRE() * a.GetIM() + a.GetIM() * a.GetIM();
	Complex z(x, y);
	return z;
}