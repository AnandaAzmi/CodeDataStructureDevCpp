#include <iostream>
#include <string>
using namespace std;

float TA, b,pp,pl,d,D,c;
double gaji_lembur (double A){		//fungsi menghitung gaji lembur A = jam lembur 
	b=A*50;	
	return (b);
}
float pajak_pokok (float B){		//fungsi menghitung pajak pokok B =gaji pokok
	pp = 0.10 * B;
	return (pp);
}
float pajak_lembur (float C){		//fungsi pajak lembur 
	pl = 0.05* C;
	return (pl);
}
float total_pajak (float pp, float pl){ //fungsi menghitung total pajak = pajak pokok + pajak lembur
	D = pp + pl;
	return (D);
}
float total_pemasukan (float b, float B,float F) //fungsi menghitung total pemasukan = gaji lembur + gaji pokok + Tunjangan
{
	d = b+B+F;
	return d;
}
float gaji_bersih (float d,float D){ //fungsi meghitung gaji bersih = total pemasukan - total pajak
	c= d - D;
	return c;
}
double anggaran (float gaka[], int jumkar){ //fungsi menghitung jumlah keseluruhan gaji yang dihitung, TA = total anggrana, gaka = gaji karyawan, jumkar = jumlah karyawan
	TA = 0;
	for (int i = 1; i<= jumkar; i++){
		TA = TA + gaka [i];
	}
	return (TA);}


int main ()
{
	string nama[20]; string NAMA[20]; //array
	int jk,JK; 
	int gol[20], nomor[20]; //array
	int jamker[20]; //array
	float gp [20], gl[20], tp [20], pgp [20],pl[20],totp[20],totg[20],gb[20]; //array
	int jamlem [20]; //array
	int b,c; 
	long dtcari;
	long hcari;
	char lanjut,pilihan;
	cout << "KALKULASI GAJI KARYAWAN UNIVERSITAS 123 \n";
	cout << "==========================================\n";
	cout << "Oleh. Ananda Syafakhatul Azmi (2207431024)\n";
	cout << endl;																							
	cout << "Daftar Karyawan\n"<<"--------------------------------------------------\n";					
	cout << "Jumlah Karyawan	: ";																		
	cin >> JK;																								
	for (int i=1; i<=JK ; i++){
		cout << "Input Nama Karyawan ke-"<<i<<"	: "; //array input nama karyawan ke- (mulai dari angka 1)
		cin >> NAMA[i];
	}
	cout << endl;
	cout << "DAFTAR NAMA KARYAWAN\n"<<"===================================\n"<<endl;
	cout << "Nomor Pegawai	| Nama "<<endl;
	for (int i=1; i<=JK ; i++){
		cout << 1223570+i<<" "<<"	| "<< NAMA [i]; //array cetak nomor pegawai dan nama yg tadi sudah diinput
		cout <<endl;
	}
	cout << endl;

	cout << "Cari Nomor Pegawai : "; 
	cin >>dtcari;cout<<endl; 
	for (int b = 0; b<=JK; b++){ 
		if (dtcari == 1223570+b){ 
			hcari++; //jika datanya ketemu maka hasil carinya kita ++, maksudnya ketika hasil carinya tidak sama dengan 0 maka dianggap datanya ketemu
		}
	}
	if (hcari==0){
		cout << "Nomor Pegawai Tidak Ditemukan"<<endl; //ketika hcari=0 maka data tidak ada yang ditemukan sama sekali
	}
	else{
		cout << "Nomor Pegawai "<<dtcari<< " Ditemukan pada : "<<endl;
		for (int c = 1; c<= JK; c++){
			if (dtcari == 1223570+c){
				cout << "Karyawan ke-"<<c<<"  Atas Nama "<< NAMA[c]<<" "<<endl;
			}
		}
	}
	cout <<endl;
	cout << "Lanjut Menghitung Gaji Karyawan atau Pencarian ulang? (C/R) : "; //pemilihan untuk pencarian ulang
	cin>>lanjut;cout<<endl;
	
if (lanjut == 'C'){
	cout << "Masukan jumlah karyawan	: ";
	cin >> jk;
	cout << endl;
	for (int i= 1; i<=jk; i++ ){
		cout << "Karyawan Ke- "<<i<<endl<<"--------------------------------------------------"<<endl;
		cout << "Nama			: ";
		cin >> nama [i];
		cout << "Nomor Pegawai		: ";
		cin >> nomor [i];
		cout << "Golongan (1,2,3 atau 4)	: ";
		cin >> gol[i];
		cout <<endl;
		cout << "Keterangan : Jam Kerja Normal per bulan 176 jam.\n";
		cout << "Jumlah Jam Kerja (termasuk lembur) : ";
		cin >> jamker[i];
		cout << "--------------------------------------------------"<<endl;
		switch (gol[i]){		//pemilihan untuk menentukan gaji pegawau dan tunjangan berdasarkan golongan
			case 1 :
				gp[i]= 4000;
				tp[i]= 2000;
				break;
			case 2 :
				gp [i]= 4500;
				tp [i]= 2500;
				break;
			case 3 :
				gp [i]= 5000;
				tp [i]= 3000;
				break;
			case 4 :
				gp [i]= 6000;
				tp [i]= 3500;
				break;
			default :
				gp [i]= 0;
				tp [i]= 0;
				break;
		}
		if (jamker [i]>176){ //jam kerja per bulan normalnya 176
			jamlem [i]=jamker [i]-176; //menghitung jam lembur (ada anggaran tersendiri)
		}
		else {
			jamlem [i]=0;
		}
		gl [i]= gaji_lembur(jamlem[i]); //menghitung gaji lembur berdasarkan jam lembur yg sudah dihitung diatas
		totg [i]= total_pemasukan (gl[i],gp [i],tp[i]) ;
		pgp [i] = pajak_pokok (gp[i]);
		pl [i]= pajak_lembur (gl [i]);
		totp [i] =total_pajak (pgp [i], pl [i]);
		gb [i]= gaji_bersih(totg[i],totp[i]);
	
		cout << endl;
		}
	
	cout << "DATA GAJI PEGAWAI UNIVERSITAS 123\n";
	cout << "========================================\n"<<endl;
	for (int i= 1; i<=jk; i++ ){ //akan berulang sampai jumlah karyawan yang diinputkan diawal (Cetak slip gaji)
	cout << "SLIP GAJI KARYAWAN\n";
	cout << "========================================\n"<<endl;
	cout << "Nama			: "<< nama [i]<<endl;
	cout << "Nomor Pegawai		: "<< nomor [i]<<endl;
	cout << "Golongan		: "<<gol[i]<<endl;
	cout << "========================================\n";
	cout << "PEMASUKAN\n";
	cout << "Gaji Pokok		: "<<gp [i]<<"	USD"<<endl;
	cout<<"Gaji Lembur		: "<<gl[i]<<"	USD"<<endl;
	cout<<"Tunjangan		: "<<tp[i]<<"	USD"<<endl;
	cout <<"_____________________________________+\n";
	cout <<"Total Pemasukan		: "<<totg [i]<<"	USD"<<endl<<endl;
	cout << "PENGELUARAN\n";
	cout<<"Pajak Gaji Pokok	: "<<pgp[i]<<"	USD"<<endl;
	cout<<"Pajak Lembur		: "<<pl[i]<<"	USD"<<endl;
	cout <<"_____________________________________+\n";
	cout<<"Total Pajak		: "<<totp[i]<<"	USD"<<endl<<endl;
	
	cout<<"Gaji Diterima        	: "<<gb[i]<<" USD"<<endl;
	cout << "========================================\n"<<endl;
	cout<<endl<<endl;	
	}
	cout << "Lihat Total Pengeluaran Anggaran Perusahaan? (Y/T)	: ";
	cin >> pilihan;
	cout << endl;
	if (pilihan =='Y'){
	cout << "Total Pengeluaran Anggaran Untuk Gaji	: "<<anggaran (gb, jk )<< " USD"<<endl; //menghitung pengeluaran anggaran dari total semua yang sudah dihitung
	cout <<endl;
	}
	else {
	cout << "Terima Kasih :)"<<endl;
	}

}
else {
	cout << "Cari Nomor Pegawai : ";
	cin >>dtcari;cout<<endl;
	for (int b = 1; b<=JK; b++){
		if (dtcari == 1223570+b){
			hcari++;
		}
}
	if (hcari==0){
		cout << "Nomor Pegawai Tidak Ditemukan"<<endl;
	}
	else{
		cout << "Nomor Pegawai "<<dtcari<< " Ditemukan pada : "<<endl;
		for (int c = 1; c<= JK; c++){
			if (dtcari == 1223570+c){
				cout << "Karyawan ke- "<<c <<"Atas Nama	: "<< NAMA[c]<<" "<<endl;
			}
		}
	}
	cout <<endl;
		
}
return 0;
}
