#include <iostream>
using namespace std;

int angka;
void A (char bin, int angka){
 for (int i = 0; i<angka;i++)
	cout << bin;}

void B (char tag, int angka){
for (int j=0; j<angka; j++)
	cout << tag;}
int main ()
{
	cout << "Membuat Fungsi ganjil (#) genap (*) \n";
	cout << "Masukan Angka	: ";
	cin >> angka;
	if (angka%2 == 0){
		A('*', angka);
	}
	else {
		B ('#',angka);	
	}
	return 0;
}
