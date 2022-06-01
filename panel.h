#ifndef PANEL_H
#define PANEL_H

#include <iostream>;
#include <ctime>;
#include <iomanip>;
using namespace std;

template <typename T>
void fill_area(T* mas, unsigned size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 10;
	}
	//print(mas, size);
}

template <typename T>
void sort_puz(T* mas, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (mas[j] > mas[j + 1])
			{
				T temp = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = temp;
				//swap(mas[j], mas[j + 1]);
			}
		}
	}
	//print(mas, size);
}

template <typename T>
void sort_vstavka(T* arr, unsigned size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
		{
			T temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			//swap(arr[j - 1], arr[j]);
		}
	}
	/*print(arr, size);*/
}

template <typename T>
void sort_selection(T* arr , unsigned size)
{
	int min = 0;
	T buf = 0;
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
	
}

template <typename T>
void print(T* mas, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(10) << mas[i];
	}
	cout << endl;
}

class Complex
{
private:
	double re = 0;
	double im = 0;
public:
	Complex(int a , int b)
	{
		this->im = a;
		this->re = b;
	}
	Complex(double a = 0, double b = 0)
	{
		this->im = a;
		this->re = b;
	}
	double GetIM()
	{
		return im;
	}
	double GetRE()
	{
		return re;
	}
	void SetIM(double im)
	{
		this->im = im;
	}
	void SetRE(double re)
	{
		this->re = re;
	}
	double absolute();
	bool operator >(Complex);
	~Complex() {}
};

void fill_complex(Complex* a, unsigned size);
void Print(Complex *a, unsigned size);

#endif