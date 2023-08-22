#include <iostream>

using namespace std;

int main(){
	cout << "Menghirung Luas Lingkaran"<<endl;
	cout << "============================="<<endl;
    double r;
    cout << "Tulis jari-jari = "; 
    cin >> r;
    double hasil = r * r * 3.14;
    cout << "Luas lingkaran = " << hasil << " satuan luas.";
    return 0;
}
