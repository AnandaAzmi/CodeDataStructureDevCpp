#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int angka = 0;
	do
	{
		angka ++;
		if (angka % 2 == 0)
			cout << angka << " ";
	}
	while (angka < 50);
	getch;
}
