#include <iostream>

using namespace std;

int main(){
	cout << "Menentukan Bilangan Terbesar"<<endl;
	cout << "======================================="<<endl;
    int a, b;
    cout << "Masukkan bilangan pertama: " ;
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << endl;
    if (a > b)
    	cout << a << " adalah bilangan terbesar.";
    else if (a = b)
    	cout << "Kedua bilangan sama besar.";
    else
    	cout << b << " adalah bilangan terbesar.";
    return 0;
}
