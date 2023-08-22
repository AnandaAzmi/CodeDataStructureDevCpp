#include <iostream>
#include <string>
using namespace std;

const int gajiPerJam = 6000;
int jk, gm;

struct pegawai{
    string nama,alamat;
    double NIP;
    string jabatan;
    int jamKerja;
    int gajiHarian, gajiMingguan;
};

int gaji_mingguan (int jk){
    if (jk <= 40) {
        gm = jk * gajiPerJam;
    } else {
        gm = 40 * gajiPerJam + ((jk - 40) * gajiPerJam * 3);
    }
    return gm;
}

int main() {

    int p;
    pegawai A[20];

    cout <<"WELCOME BACK TO MY CODING ASSIGNMENT\n";
    cout << "======================================\n";
    cout << "KALKULASI GAJI PEGAWAI\n";
    cout << "oleh Ananda Syafakhatul Azmi\n";
    cout <<endl;

    cout << "Jumlah Karyawan : ";
    cin >> p;
    cout << endl;
    
    for (int i=1; i<=p; i++){
    cout << "Nama Pegawai ke- "<<i<< " : ";cin>>A[i].nama;
    cout << "NIP        : "; cin >> A[i].NIP;
    cout << "Jabatan    : "; cin >> A[i].jabatan;
    cout << "Alamat     : "; cin >> A[i].alamat;
    cout << "jumlah jam kerja per minggu: ";
    cin >> A[i].jamKerja;

    A[i].gajiMingguan= gaji_mingguan (A[i].jamKerja);
    cout << "Gaji harian pegawai adalah: " << A[i].gajiMingguan / 5 << endl;
    cout << endl;
    }
    cout<< endl;
    return 0;
}