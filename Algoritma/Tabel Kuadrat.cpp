#include <iostream>
using namespace std;

int main ()
{
	cout << "Menghitung Kuadrat 1 - 10"<<endl;
	cout << "==============================="<<endl;
	int X, X2, X3;
	cout << "X	";
	cout << "X^2	";
	cout << "X^3	"<<endl;
	cout << "===============================";
	for (X=1, X2 = 1; X<=10, X2<=100;X++){
		X = X; 
		X2 = X*X; 
		X3 = X*X*X;
		cout << endl;
		cout << X <<"	";
		cout << X2 << "	";
		cout << X3 << "	"<<endl;
	}
	
	return 0;
	
}
