#include <iostream>
#include <math.h>
using namespace std;

float penjumlahan (float a, float b){
	return a+b;
}
float pengurangan (float a, float b){
	return a-b;
}
float pembagian (float a, float b){
	return a/b;
}
float perkalian (float a, float b){
	return a*b;
}
float pangkat (float a, float b){
	return pow (a,b);
}
float akar (float a){
	return sqrt (a) ;
}
int main (){
float a,b;
int pilih;
cout << "Kalkulator C++ Menggunakan Fungsi\n";
cout << "=====================================\n";
cout << " Pilih Operasi \n 1. (+) Penjumlahan \n 2. (-) Pengurangan \n 3. (:) Pembagian \n 4. (*) Perkalian \n 5. (^) Pangkat \n 6. (akar) \n Pilihan : ";
cin >> pilih;
cout << endl;
		
		cout<<"Masukan bilangan pertama : ";
		cin>>a;
		
if (pilih !=6){

		cout<<"Masukan bilangan kedua   : ";
		cin>>b;
		cout<<endl;

	}

		switch(pilih){
			case 1 : cout<<a<<" + "<<b<<" = "<<penjumlahan(a,b); break;
			case 2 : cout<<a<<" - "<<b<<" = "<< pengurangan (a,b); break;
			case 3 : cout<<a<<" : "<<b<<" = "<<pembagian(a,b); break;
			case 4 : cout<<a<<" * "<<b<<" = "<<perkalian(a,b); break;
			case 5 : cout<<a<<" ^ "<<b<<" = "<<pangkat (a,b); break;
			case 6 : cout<<"akar "<<a<<" = "<<akar (a); break;
		}
	return 0;

}



