#include <iostream>
using namespace std;

int main (){
	int angka [] = {5,7,2,11,23,80,78,9,6,7,34,56,13,26,87,45,34};
	int length = sizeof(angka)/sizeof(*angka);
	int  temp, dtcari, hcari;
	int kiri, kanan, tengah;
	bool ketemu = false;
	int a, y;
	cout << "Searching Data\n";
	cout << "===============================\n";
	cout << "Data yang Tersedia : \n";
	for (a=0; a<length; a++){
		for (y=length; y>= a+1; y--)
		{
			if (angka [y]<angka[y-1])
			{
				temp = angka [y];
				angka [y] = angka [y-1];
				angka [y-1] = temp;
			}
		}
	}
	cout <<endl;

	for (int a=0; a<=length; a++){
		cout << "Index ke-"<<a<<" : "<<angka[a]<<endl;
	}

	cout << endl;
	cout << "Data yang Dicari : ";
	cin >>dtcari;
	cout<<endl;

	kiri =0;
	kanan = length -1;
	
	while (kiri <= kanan){
		tengah = (kiri + kanan)/2;
		if (dtcari == angka [tengah]){
			ketemu = true;
			break;
		}
		else if (dtcari <angka [tengah]){
			kanan = tengah -1 ;
		}
		else
		{
			kiri = tengah+1;
		}
	}
	if (ketemu == true){
		cout << "Data "<<dtcari<< " Ditemukan di : "<<endl;
		for (int c = 0; c<=length; c++){
			if (dtcari == angka [c]){
				cout << "Index ke- "<<c<<endl;
			}
		}
	}
	else{
		cout << "Data Tidak Ditemukan";
	}
	return 0;
}
