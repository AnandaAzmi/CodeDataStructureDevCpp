#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	char kodebarang;
	double HB;
	cout << "tulis kodebar :";
	cin >>kodebarang;
	switch (kodebarang){
		case 'A':
		HB = 10000;
		break;
		case 'B':
		HB = 8000;
		break;
	}
	getch();
	cout << "Harga barang	: "<<HB<<endl;
}
