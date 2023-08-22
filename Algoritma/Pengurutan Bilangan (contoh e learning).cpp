#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int nilai [10] = {56,78,58, 80, 45, 90, 85, 60, 64, 35};
	int a, b;
	int temp;
	
	cout << "Nilai Sebelum Diurutkan"<<endl;
	cout << "========================\n";
	for (a=0; a<10; a++)
	{
		cout << nilai [a]<<" ";
	}
	
	for (a=0; a<10; a++)
	{
		for (b=9; b>=a+1; b--)
		{
			if (nilai[b] < nilai [b-1])
			{
				temp = nilai [b];
				nilai [b] = nilai [b-1];
				nilai [b-1] = temp;
			}
		}
	}
	cout <<endl<<endl;
	cout << "Nilai Setelah Diurutkan\n";
	cout << "========================\n";
	for (a=0; a<10; a++)
	{
		cout << nilai [a]<< " ";
	}
	getch ();
}
