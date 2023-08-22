#include <iostream>
using namespace std;
int angka, Hasil;
int fac (int n)
{
	if (n==0){
		return 1;}
	else
		return (n*fac (n-1));
}
int main ()
{
	cout << "Menghitung Factorial"<<endl;
	cout << "=============================\n";
	cout << "Masukan Angka	: ";
	cin>> angka;
	Hasil = fac (angka);
	cout << "Hasil		: "<<Hasil<<endl;
	return 0;
}
