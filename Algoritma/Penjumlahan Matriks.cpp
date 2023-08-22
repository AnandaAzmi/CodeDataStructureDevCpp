#include <iostream>
using namespace std;

int main ()
{
	cout << "Program Penjumlahan Matrix"<<endl;
	cout << "==================================="<<endl;
	cout << "Masukan Elemen Matrix A"<<endl;
	int nilaiA, nilaiB, a, b, hasil;
	cout << "Nilai A [0][0]	= ";
		cin >> nilaiA;
	cout << "Nilai A [0][1]	= ";
		cin >> nilaiA;
	cout << "Nilai A [0][2]	= ";
		cin >> nilaiA;
	cout << "Nilai A [0][3]	= ";
		cin >> nilaiA;
		cout << endl;
		
	cout << "Nilai A [1][0]	= ";
		cin >> nilaiA;
	cout << "Nilai A [1][1]	= ";
		cin >> nilaiA;
	cout << "Nilai A [1][2]	= ";
		cin >> nilaiA;
	cout << "Nilai A [1][3]	= ";
		cin >> nilaiA;
		cout << endl;
		
	cout << "Nilai A [2][0]	= ";
		cin >> nilaiA;	
	cout << "Nilai A [2][1]	= ";
		cin >> nilaiA;
	cout << "Nilai A [2][2]	= ";
		cin >> nilaiA;
	cout << "Nilai A [2][3]	= ";
		cin >> nilaiA;
	cout<< endl;
	
	cout << "Nilai B [0][0]	= ";
		cin >> nilaiB;
	cout << "Nilai B [0][1]	= ";
		cin >> nilaiB;
	cout << "Nilai B [0][2]	= ";
		cin >> nilaiB;
	cout << "Nilai B [0][3]	= ";
		cin >> nilaiB;
	cout << endl;
	
	cout << "Nilai B [1][0]	= ";
		cin >> nilaiB;
	cout << "Nilai B [1][0]	= ";
		cin >> nilaiB;
	cout << "Nilai B [1][0]	= ";
		cin >> nilaiB;
	cout << "Nilai B [1][0]	= ";
		cin >> nilaiB;
	cout << endl;
	
	cout << "Nilai B [2][0]	= ";
		cin >> nilaiB;
	cout << "Nilai B [2][1]	= ";
		cin >> nilaiB;
	cout << "Nilai B [2][2]	= ";
		cin >> nilaiB;
	cout << "Nilai B [2][3]	= ";
		cin >> nilaiB;
		cout << endl;
	
	cout << "Matriks A"<<endl;
	cout << "-----------"<<endl;
	for (a=0; a<3; a++){
		for (b=0; b<4; b++){
			hasil = nilaiA + nilaiB;
			cout << hasil;
		}
		cout << endl;
	}
	return 0;
}
