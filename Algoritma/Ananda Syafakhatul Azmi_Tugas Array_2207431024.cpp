#include <iostream>
using namespace std;

int main (){
	long nim[5], nilai[5];
	string nama [5];
	int i, j,k, tertinggi, terendah;
	cout << "Masukan Data Mahasiswa"<<endl;
	cout << "================================="<<endl;
	for (i=0; i<5; i++)
	{
		cout << "Masukan NIM 	ke- "<<i << " 	= "; cin >> nim[i];
		cout << "Masukan Nama 	ke- "<<i << " 	= "; cin >> nama [i];
		cout << "Masukan Nilai 	ke- "<<i <<" 	= "; cin >> nilai [i]; cout<<endl;
	}
	cout <<endl;
	cout << "Daftar Nilai Mahasiswa"<<endl;
	cout << "===================================="<<endl;
	cout << "--------------------------------------------------------------"<<endl;
	cout << "No		";
	cout << "NIM			";
	cout << "Nama		";
	cout << "Nilai		"<<endl;
	cout << "--------------------------------------------------------------"<<endl;
	for (j=0; j<5; j++){
		cout << j << " 	";
		cout << nim [j]<<" 			";
		cout << nama [j]<<" 			";
		cout << nilai [j]<<" 		"<<endl;
	}
	cout << "--------------------------------------------------------------"<<endl;
	cout <<endl;
	tertinggi = nilai [0];
	terendah = nilai [0];
	for (k=0; k<5; k++){
		if (nilai[k]>tertinggi){
			tertinggi = nilai[k];
		}
		if (nilai[k]<terendah){
			terendah = nilai[k];
		}
	}
	cout << "Nilai Tertinggi		: "<<tertinggi<<endl;
	cout << "Nilai Terendah 		: "<< terendah <<endl;

	return 0;
}
