#include"panel.h";

int main()
{
	int *mas = new int[10];
	double* arr = new double[10];

	Complex a(5, 10);
	Complex b(10, 5);

	fill_area(mas, 10);
	fill_area(arr, 10);
	sort_puz(mas, 10);
	sort_puz(arr, 10);
	sort_vstavka(mas, 10);
	sort_vstavka(arr, 10);
	sort_selection(mas, 10);
	sort_selection(arr, 10);

	sum(10, 12);
	difference(10, 12);
	multiplication(5, 5);
	division(10, 5);

	a.sum(b);
	a.difference(b);
	a.division(b);
	a.multip(b);

	return 0;
}