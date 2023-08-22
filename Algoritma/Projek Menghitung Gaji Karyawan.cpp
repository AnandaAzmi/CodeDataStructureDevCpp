#include <iostream>
#include <string>
using namespace std;

float TA; 
double gaji_lembur (double A){
	return (A *50);
}
float pajak_pokok (float B){
	return (0.10 * B);
}
float pajak_lembur (float C){
	return (0.05* C);
}
float total_pajak (float D, float E){
	return (D+E);
}
float gaji_bersih (float B,float F, float C,float G){
	return ((B+F+C)-G);
}
double anggaran (float gaka[], int jumkar){		//fungsi untuk total anggaran
	TA = 0; //total anggaran
	for (int i = 1; i<= jumkar; i++){
		TA = TA + gaka [i];
	}
	return (TA);
}
int main ()
{
	string nama[20]; //array
	int jk; 
	int gol[20] ; //array
	int jamker[20];//array
	float gp [20], gl[20], tp [20], pgp [20],pl[20],totp[20],gb[20]; //array
	int jamlem [20]; //array
	
	cout << "KALKULASI GAJI KARYAWAN UNIVERSITAS 123 \n";
	cout << "==========================================\n";
	cout << "Oleh. Ananda Syafakhatul Azmi (2207431024)\n";
	cout << endl;
	cout << "Jumlah Karyawan Penerima Gaji	: ";
	cin >> jk;
	cout << endl;
	for (int i= 1; i<=jk; i++ ){ //looping berdasarkan jumlah karyawan yang diinputkan
		cout << "Karyawan Ke- "<<i<<endl<<"--------------------------------------------------"<<endl;
		cout << "Nama			: ";
		cin >> nama [i];
		cout << "Golongan (1,2 atau 3)	: ";
		cin >> gol[i];
		cout <<endl;
		cout << "Keterangan : Jam Kerja Normal per bulan 176 jam.\n";
		cout << "Jumlah Jam Kerja (termasuk lembur) : ";
		cin >> jamker[i];
		cout << "--------------------------------------------------"<<endl;
		switch (gol[i]){ //pemilihan gaji pokok dan tunjangan pengabdian
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
	
			default :
				gp [i]= 0;
				tp [i]= 0;
				break;
		}
		if (jamker [i]>176){ //menentukan jam kerja dan jam lembur
			jamlem [i]=jamker [i]-176;
		}
		else {
			jamlem [i]=0;
		}
		gl [i]= gaji_lembur(jamlem[i]);
		pgp [i] = pajak_pokok (gp[i]);
		pl [i]= pajak_lembur (gl [i]);
		totp [i] =total_pajak (pgp [i], pl [i]);
		gb [i]= gaji_bersih(gp [i],tp[i],gl[i],totp[i]);
		cout << endl;
		}
	
	cout << "PRINT DATA\n";
	cout << "===================================\n"<<endl;
	for (int i= 1; i<=jk; i++ ){ //looping cetak data berdasarkan jumlah karyawan
	cout << "Nama			: "<< nama [i]<<endl;
	cout << "Golongan		: "<<gol[i]<<endl;
	cout << "Gaji Pokok		: "<<gp [i]<<"	USD"<<endl;
	cout<<"Gaji Lembur		: "<<gl[i]<<"	USD"<<endl;
	cout<<"Pajak Gaji Pokok	: "<<pgp[i]<<"	USD"<<endl;
	cout<<"Pajak Lembur		: "<<pl[i]<<"	USD"<<endl;
	cout<<"Total Pajak		: "<<totp[i]<<"	USD"<<endl;
	cout<<"Tunjangan		: "<<tp[i]<<"	USD"<<endl;
	cout<<"Gaji Diterima        	: "<<gb[i]<<" USD"<<endl;
	cout<<endl<<endl;	
}

cout << "Total Pengeluaran Anggaran Untuk Gaji	: "<<anggaran (gb, jk )<< " USD"<<endl;
cout <<endl;

return 0;
}
