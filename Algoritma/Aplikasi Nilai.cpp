#include <iostream>

using namespace std;

int main(){
	
    double nim;
    int nuiz, nmid, nuas, nt;
    string nama, prodi, matkul;
    double nilaiAkhir;

    cout << "Aplikasi Nilai" << endl;
    cout << "-----------------------------" << endl;
    cout << "NIM             : ";
    cin >> nim;
    cout << "Nama            : ";
    cin>> nama;
    cout << "Prodi           : ";
    cin>> prodi;
    cout << "Mata Kuliah     : ";
    cin >> matkul;
    cout << "Nilai Quiz      : ";
    cin >> nuiz;
    cout << "Nilai Mid       : ";
    cin >> nmid;
    cout << "Nilai UAS       : ";
    cin >> nuas;
    cout << "Nilai Tugas     : ";
    cin >> nt;
    cout << "-----------------------------" << endl;
    nilaiAkhir = 0.15 * nuiz + 0.25 * nmid + 0.30 * nt + 0.30 * nuas;
    cout << "Nilai Akhir     : " << nilaiAkhir << endl;

    if (nilaiAkhir >= 60)
        cout << "LULUS" << endl;
    else
        cout << "GAGAL" << endl;

    cout << "Terima Kasih";

    return 0;
}
