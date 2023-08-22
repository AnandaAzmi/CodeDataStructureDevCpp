#include <iostream>
using namespace std;

int main()
{
	double nim;
    int nuiz, nmid, nuas, nt,Mutu;
    double nilaiakhir;
    char NH;
	string nama,prodi, matkul;
    cout << "Aplikasi Nilai" << endl;
    cout << "-----------------------------" << endl;
    cout << "Nama            : ";
    cin >> nama;
    cout << "NIM             : ";
    cin >> nim;
    cout << "Prodi           : ";
    cin>>prodi;
    cout << "Mata Kuliah     : ";
    cin>> matkul;
    cout << "Nilai Quiz      : ";
    cin >> nuiz;
    cout << "Nilai Mid       : ";
    cin >> nmid;
    cout << "Nilai UAS       : ";
    cin >> nuas;
    cout << "Nilai Tugas     : ";
    cin >> nt;
    cout << "-----------------------------" << endl;
    nilaiakhir = 0.15 * nuiz + 0.25 * nmid + 0.30 * nt + 0.30 * nuas;
    cout << "Nilai Akhir     : " << nilaiakhir << endl;
	if ((nilaiakhir>=80) && (nilaiakhir<=100)){
		NH = 'A';
		Mutu = 4;
	}
	else if (nilaiakhir >=75){
		NH = 'B+';
		Mutu = 3.5;
	}
	else if (nilaiakhir >=70){
		NH = 'B';
		Mutu = 3;
	}
	else if (nilaiakhir>=65){
		NH = 'C+';
		Mutu = 2.5;
	}
	else if (nilaiakhir >=60){
		NH = 'C';
		Mutu = 2;
	}
	else if (nilaiakhir >= 55){
		NH = 'D+';
		Mutu = 1.5;
	}
	else if (nilaiakhir >=50){
		NH = 'D';
		Mutu = 1;
	}
	else{
		NH = 'E';
		Mutu = 0;
	}
	cout<<"NH		: "<<NH<<endl;
	cout<<"Mutu		: "<<Mutu<<endl;
    cout << "Terima Kasih";

    return 0;
}
