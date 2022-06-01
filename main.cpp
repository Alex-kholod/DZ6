#include"panel.h";

int main()
{
	int *mas = new int[10];
	double* arr = new double[10];
	Complex* mas1 = new Complex[10];

	fill_complex(mas1, 10);
	Print(mas1, 10);
	sort_puz(mas1, 10);
	Print(mas1, 10);

	
	fill_area(mas, 10);
	print(mas, 10);
	sort_puz(mas, 10);
	print(mas, 10);
	sort_vstavka(mas, 10);
	print(mas, 10);
	sort_selection(mas, 10);
	print(mas, 10);
	fill_area(arr, 10);
	sort_puz(arr, 10);
	print(arr, 10);
	sort_vstavka(arr, 10);
	print(arr, 10);
	sort_selection(arr, 10);
	print(arr, 10);
	return 0;
}