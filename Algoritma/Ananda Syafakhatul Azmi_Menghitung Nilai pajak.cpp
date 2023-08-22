#include <iostream>
using namespace std;

double ha, hp, jml;
double np, hsp;
double harga_makanan (double X, double Y)
{
	double E;
	E = X*Y;
	return E;
}
double pajak (double E)
{
	double B;
	B = E * 0.1;
	return B;
}
double hargastl_pajak (double E, double B)
{
	double G; 
	G = E + B;
	return G;
}

int main ()
{
	cout << "Menghitung pajak pembelian makanan\n";
	cout << "=====================================\n"<<endl;
	cout << "Harga Makanan		: ";
	cin >> ha;
	cout << "Jumlah			: ";
	cin >> jml;
	hp = harga_makanan (ha,jml);
	cout << "Total			: "<<hp<<endl;
	np = pajak (hp);
	cout << "Pajak 			: "<<np<<endl;
	hsp = hargastl_pajak (hp,np);
	cout << "Jumlah			: "<< hsp <<endl;
}
