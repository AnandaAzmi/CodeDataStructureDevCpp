#include <iostream>
#include <conio.h>
using namespace std;

main ()
{
	cout << "Program penjumlahan nilai Matriks\n";
	cout << "=================================\n";
	cout << "Oleh : Ananda Syafakhatul Azmi\n"<<"TMD 1A\n"<<"(2207431024)\n";
	int ma[3][4], mb[3][4], mc[3][4];
	int a, b;

	cout << " Masukkan Elemen Matrik A\n";
	for(a=0; a<3; a++)
	{
		for (b=0; b<4; b++)
		{
		 cout << " Nilai A [" << a << "][" << b << "] : "; cin >> ma[a][b];
		}
		cout << endl;
	}
	
	cout << " Masukkan Elemen Matriks B\n";
	for(a=0; a<3; a++)
	{
		for (b=0; b<4; b++)
		{
		 cout << " Nilai B [" << a << "][" << b << "] : "; cin >> mb[a][b];
		}
		cout << endl;
	}
	
	cout << " Matriks A\n" << "------------\n";
	for(a=0; a<3; a++)
	{
		for (b=0; b<4; b++)
		{
		 cout << " " << ma[a][b] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	
	cout << " Matriks B\n" << "------------\n";
	for(a=0; a<3; a++)
	{
		for (b=0; b<4; b++)
		{
		 cout << " " << mb[a][b] << " ";
		}
		cout << endl;
	}
	
	for(a=0; a<3; a++)
	{
		for (b=0; b<4; b++)
		{
		  mc[a][b]= ma[a][b] + mb[a][b];
		}
	}
		cout << endl;
	
	cout << " Hasil\n" << "------------\n";
	for(a=0; a<3; a++)
	{
		for (b=0; b<4; b++)
		{
		  cout << " " << mc[a][b] << " ";
		}
		cout << endl;
	}
	
	
}
