#ifndef PANEL_H
#define PANEL_H

#include <iostream>;
#include <ctime>;
#include <iomanip>;
using namespace std;

void fill_area(int*, unsigned);
void fill_area(double*, unsigned);
void sort_puz(int*, unsigned);
void sort_puz(double*, unsigned);
void sort_vstavka(int* , unsigned size);
void sort_vstavka(double* , unsigned size);
void sort_selection(int* , unsigned size);
void sort_selection(double*, unsigned size);
void print(int*, unsigned);
void print(double*, unsigned);

int sum(int , int );
double sum(double , double );
int difference(int, int);
double difference(double, double);
int multiplication(int, int);
double multiplication(double, double);
int division(int, int);
double division(double, double);

class Complex
{
private:
	double re = 0;
	double im = 0;
public:
	Complex(int a, int b)
	{
		this->im = a;
		this->re = b;
	}
	Complex(double a, double b)
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
	Complex sum(Complex a);
	Complex difference(Complex a);
	Complex multip(Complex a);
	Complex division(Complex a);
	~Complex() {}
};
double absolute(Complex a);

#endif