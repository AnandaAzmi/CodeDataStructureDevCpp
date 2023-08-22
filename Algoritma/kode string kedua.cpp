#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
	cout << "Aplikasi Mahasiswa TMD " << endl << "==========================================="<<endl;
	char jurusan [50];
	char nama [50]="Ananda Syafakhatul Azmi";
	char prodi [50] = "Tenik Multimedia Digital";
	char karnam[10];
	char karprod [10];
	int jumlah_karakternam, jumlah_karakterprod;
	strcpy (jurusan, "Teknik informatika dan komputer");
	cout << "Selamat datang di jurusan "<<jurusan<<endl;
	
	jumlah_karakternam = strlen(nama);
	cout << "Nama	: "<<nama<<endl;
	strupr (nama);
	cout << "NAMA (KAPITAL)	: "<< nama << endl;
	strlwr (nama);
	cout << "nama (Huruf kecil)	: "<<nama<<endl;
	strrev (nama);
	cout << "Nama (Terbalik)	: "<<nama<<endl;
	cout << "Jumlah Karakter nama : "<<jumlah_karakternam<<endl<<endl;
	
	jumlah_karakterprod = strlen (prodi);
	cout << "Program Studi	: "<<prodi<<endl;
	cout << "Jumlah Karakter Prodi	: "<<jumlah_karakterprod<<endl<<endl;
	cout << "Masukan jumlah karakter nama	: ";
	cin >> karnam;
	cout << "Masukan jumlah karakter prodi	: ";
	cin >> karprod;
	strcmp (karnam, karprod);
	
		if ((jumlah_karakternam == 0)&& (jumlah_karakterprod == 0)){
			cout << "Jumlah karakter nama sama dengan jumlah karakter prodi";
		}
		else if (jumlah_karakternam<jumlah_karakterprod){
			cout << "Jumlah karakter nama lebih kecil dari jumlah karakter prodi";
		}
		else{
			cout << "Jumlah karakter nama lebih besar dari jumlah karakter prodi";
		}
		
	cout << endl<<endl;
	cout << "Quisioner"<<endl;
	char hobi [50] = "Apa hobi anda? ";
	cout << hobi <<endl;
	char jh [50] = " Belajar, Bermain game, nonton";
	cout << "Jawaban	: "<<jh<<endl;
	strcat (hobi,jh);
	cout << hobi << endl;
	
	return 0;
	
}
