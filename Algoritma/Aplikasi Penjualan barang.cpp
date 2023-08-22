#include <iostream>
using namespace std;

int main(){
    int kodebarang, hargabarang, jumlah, penjualan, total;
    double diskon;
    string namabarang;

    cout << "Aplikasi Penjualan Barang" << endl;
    cout << "-----------------------------" << endl;
    cout << "Kode Barang        : ";
    cin >> kodebarang;
    cout << "Nama Barang        : ";
    cin >> namabarang;
    cout << "Harga Barang       : ";
    cin >> hargabarang;
    cout << "Jumlah             : ";
    cin >> jumlah;

    cout << "-----------------------------" << endl;
    penjualan = hargabarang * jumlah;
    cout << "Penjualan          : Rp" << penjualan << endl;
    
    if (penjualan > 500000){
        diskon = 0.1;
        cout << "Diskon             : 10%" << endl;}
    else {
        diskon = 0;
        cout << "-" << endl;}
    
    total = penjualan - (penjualan * diskon);
    cout << "Total penjualan    : Rp" << total << endl;
    cout << "Terima Kasih";

    return 0;
}


