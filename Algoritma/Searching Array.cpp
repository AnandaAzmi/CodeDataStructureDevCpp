#include <iostream>
using namespace std;

int main (){
	int n, angka [50];

	int dtcari, hcari;
	cout << "Sequental Search\n";
	cout << "===============================\n";
	cout << "Masukan jumlah data : ";
	cin >> n;
	cout << "Masukan Data : \n";
	cout <<endl;
	for (int a=0; a<n; a++){
		cout << "Index ke-"<<a<<" : ";
		cin>>angka[a];cout<<endl;
	}
	cout <<endl;
	cout << "Data yang Dicari : ";
	cin >>dtcari;cout<<endl;
	for (int b = 0; b<n; b++){
		if (dtcari == angka [b]){
			hcari++;
		}
	}
	if (hcari==0){
		cout << "Data Tidak Ditemukan"<<endl;
	}
	else{
		cout << "Data "<<dtcari<< " Ditemukan di : "<<endl;
		for (int c = 0; c< n; c++){
			if (dtcari == angka [c]){
				cout << "Index ke- "<<c<<endl;
			}
		}
	}
}
