#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	cout << "Menentukan Akar Akar Persamaan Kuadrat"<<endl;
	cout << "============================================="<<endl;
	float a, b, c;
	double X1, X2, D;
	cout << "Masukan Nilai a	: ";
	cin >>a;
	cout << "Masukan Nilai b	: ";
	cin >> b;
	cout << "Masukan Nilai c	: ";
	cin >> c; 
	cout<< endl;
	D = b*b-4*a*c;
	cout <<"Nilai Diskriminan	= "<<D<<endl;
	if (D>=0){
		X1 = (-b + sqrt (D))/(2*a);
		X2 = (-b - sqrt (D))/(2*a);
		cout <<"X1			= "<<X1<<endl;
		cout <<"X2			= "<<X2<<endl;
	}
	else {
		cout <<"Bilangan Imajiner";
	}
	return 0;
}
