#include <iostream>
using namespace std;

int main ()
{
	cout << "Menghitung Biaya Kursus"<<endl;
	char nama [50], alamat [100], KP;
	double BK, LK, BP, total;
	cout << "Nama	: ";gets(nama);
	cout << "Alamat	: ";gets(alamat);cout <<endl;
	cout << "Kode Paket (A, B, C, atau D)	: ";
	cin >> KP;cout<<endl;
	switch (KP){
		case 'A':
			BK = 1500000;
			LK = 6;
			break;
		case 'B':
			BK = 1000000;
			LK = 4;
			break;
		case 'C':
			BK = 750000;
			LK = 2;
			break;
		case 'D':
			BK = 500000;
			LK = 1;
			break;
		default :
			BK = 0;
			LK = 0;
	}
	BP = 100000;
	total = BK+BP;
	cout << "Biaya Pendaftaran	: Rp "<<BP<<endl;
	cout << "Biaya Kursus		: Rp "<<BK<<endl;
	cout << "Lama Kursus		: "<<LK << " bulan"<<endl;
	cout << "Total Biaya		: Rp "<<total<<endl;
	
	return 0;
	
}
