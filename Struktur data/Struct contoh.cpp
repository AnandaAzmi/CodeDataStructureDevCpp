#include <iostream>
#include <conio.h>
#include<stdio.h>
using namespace std;

struct mahasiswa{
    int nim;
    string nama;
    string prodi;
    float ipk;
};

int main ()
{
    int p;
    mahasiswa mhs[20];
    cout<< "Masukan jumlah mahasiswa    : ";cin >> p;

    cout << "Data Mahasiswa"<<endl;
    cout << "================"<<endl;
    cout <<endl;
    for (int i = 1; i <=p; i++){
    cout << "Masukan NIM    : ";cin >> mhs[i].nim;
    cout << "Masukan Nama   : ";cin >>mhs[i].nama;
    cout << "Masukan Prodi  : "; cin>> mhs[i].prodi;
    cout << "Masukan IPK    : "; cin >> mhs[i].ipk;
    cout << endl;
    };
    for (int i = 1; i<=p;i++){
    cout<<"====================================="<<endl;
    cout << "NIM Anda   : "<<mhs[i].nim<< endl;
    cout << "Nama Anda  : "<<mhs[i].nama<<endl;
    cout << "Prodi Anda : "<<mhs[i].prodi<<endl;
    cout << "IPK Anda  : "<<mhs[i].ipk<<endl;
    cout << "======================================"<<endl;
    };

    getch ();
}
