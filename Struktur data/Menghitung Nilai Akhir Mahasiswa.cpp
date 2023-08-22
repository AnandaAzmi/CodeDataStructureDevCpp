#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;

float na, nt, nk, nm,nu;
struct identitas {
    string nama, jurusan, prodi;
    long double nim;
};

struct nilai {
    float ntugas, nkuis, nuts, nuas, nakhir;
    char grade;
};

float nilai_akhir (float nt, float nk, float nm, float nu){
    na= (0.30 * nt) + (0.1 * nk) + (0.3 * nm) + (0.3 * nu);
    return na;
};

char grade (float na, char g){
    if ((na>85) && (na <= 100)){
        g = 'A';
    }
    else if ((na>70) && (na <= 85)){
        g = 'B';
    }
    else if ((na>55) && (na <= 70)){
        g = 'C';
    }
    else if ((na>40) && (na <= 55)){
        g = 'D';
    }
    else {
        g = 'E';
    }
   return g;
};

int main (){
    identitas I[50];
    nilai n[50];
    int p;
    cout << "APLIKASI MENGHITUNG NILAI MAHASISWA\n";
    cout << "Oleh Ananda Syafakhatul Azmi\n";
    cout << "======================================/n";
    cout << endl;
    cout << "Masukan Jumlah Mahasiswa : ";cin >> p;
    cout << endl;
    for (int i =1; i<= p; i++){
        cin.ignore();
        cout << "Mahasiswa ke- "<<i;cout <<endl;
        cout << "---------------------------------\n";
        cout << "Masukan Nama       : ";getline(cin, I[i].nama);
        cout << "Masukan Nim        : "; cin >> I[i].nim;
        cin.ignore();
        cout << "Masukan Jurusan    : ";getline (cin,I[i].jurusan);
        cout << "Masukan Prodi      : ";getline (cin,I[i].prodi);
        cout << endl;
        cout << "Masukan Nilai Tugas    : ";cin>> n[i].ntugas;
        cout << "Masukan Nilai Kuis     : "; cin >> n[i].nkuis;
        cout << "Masukan Nilai UTS      : ";cin >> n[i].nuts;
        cout << "Masukan Nilai UAS      : "; cin >> n[i].nuas;
        cout << endl;
        cin.ignore();
    };
    
    cout << endl; cout<< endl;

    for (int i = 1; i<=p; i++){
        cout << endl;
        cout << "Mahasiswa ke- "<<i;cout << endl;
        cout << "---------------------------------\n";
        cout << "Nama       : "<<I[i].nama;cout <<endl;
        cout << "Nim        : "<<I[i].nim;cout <<endl;
        cout << "Jurusan    : "<<I[i].jurusan;cout <<endl;
        cout << "Prodi      : "<<I[i].prodi;cout <<endl;
        cout << endl;
        cout << "Nilai Tugas    : "<< n[i].ntugas;cout <<endl;
        cout << "Nilai Kuis     : "<<n[i].nkuis;cout <<endl;
        cout << "Nilai UTS      : "<<n[i].nuts;cout <<endl;
        cout << "Nilai UAS      : "<<n[i].nuas;cout <<endl;
        cout << "---------------------------------\n";
        n[i].nakhir= nilai_akhir(n[i].ntugas,n[i].nkuis,n[i].nuts,n[i].nuas);
        cout << "Nilai Akhir    : "<<n[i].nakhir;cout << endl;
        n[i].grade= grade(n[i].nakhir,n[i].grade);
        cout << "Grade          : "<<n[i].grade;cout << endl;
    };

return 0;

}