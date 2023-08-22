#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct mahasiswa
{
    int nim [10];
    char nama [25];
    char prodi [30];
    float ipk;
};

main (){
    mahasiswa mhs;
    cout<< "Masukan NIM : ";cin >> mhs.nim;
    cout << "Masukan Nama   : ";gets (mhs.nama);
    cout << "Masukan Prodi  : ";gets(mhs.prodi);
    cout<< "Masukan IPK : ";cin >> mhs.ipk;
    cout << endl;
    cout<< "NIM : "<< mhs.nim;cout<<endl;
    cout << "Nama   : "<<mhs.nama;cout<<endl;
    cout << "Prodi  : "<<mhs.prodi;cout<<endl;
    cout << "Prodi  : "<<mhs.ipk;cout<<endl;
return 0;
}