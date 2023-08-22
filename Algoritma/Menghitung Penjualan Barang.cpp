#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char kodebarang;
    int jumlah, penjualan, total;
    double HB, potongan;
    string namabarang;

    cout << "Aplikasi Penjualan Barang" << endl;
    cout << "-----------------------------" << endl;
    cout << "Kode Barang (Tulis 1 Abjad)       : ";
    cin >> kodebarang;
    cout << "Nama Barang        : ";
    cin >> namabarang;
    cout << "Jumlah             : ";
    cin >> jumlah;
	switch (kodebarang){
		case 'A':
		HB = 10000;
		break;
		case 'B':
		HB = 8000;
		break;
		case 'C':
		HB = 6000;
		break;
		case 'D':
		HB = 4000;
		break;
		default :
		HB = 0;
		break;
	}
    cout << "-----------------------------" << endl;
    penjualan = HB * jumlah;
    
    if (penjualan >= 100000){
		potongan = penjualan * 0.1;}
	else {
    	potongan = 0;
 	}
    
    total= penjualan - potongan;
    cout << "Harga Barang		: Rp "<<HB<<endl<<"Penjualan		: Rp "<<penjualan<<endl;
    cout << "Potongan		: Rp "<<potongan<< endl;
    cout << "Total penjualan    	: Rp " << total << endl;
    cout << "Terima Kasih";

    return 0;
}


