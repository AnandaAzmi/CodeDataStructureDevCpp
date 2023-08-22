#include <iostream>
#include <string>
using namespace std;

string nama [20];
int JK ,JL;
long double UL,GM,GH;


int jam_lembur (int JK){
    JL=JK-40;
    return JL;
}

double uang_lembur (double JL){
    UL = 3*6000*JL;
    return UL;
}

double gaji_mingguan (double UL){
    GM = UL + (40 * 6000);
    return GM;
}
double gaji_harian (double GM){
    GH = GM / 5;
    return GH;
}
int main (){
    int p;
    int JK[20],jl[20];
    long double ul [20],gm[20],gh [20];
    cout <<"WELCOME BACK TO MY CODING ASSIGNMENT\n";
    cout << "======================================\n";
    cout << "KALKULASI GAJI PEGAWAI\n";
    cout << "Jumlah Pegawai : ";
    cin >> p;
    for (int i=1; i<=p; i++){
        cout << "Input Nama pegawai no-"<<i<<"	: "; cin >> nama[i];
        cout << "Jumlah Jam Kerja : "; cin >>JK[i];

        jl[i]=jam_lembur (JK[i]);
        ul[i]=uang_lembur (jl[i]);
        gm[i]=gaji_mingguan (ul[i]);
        gh [i]=gaji_harian (gm[i]);

        cout << "KALKULASI GAJI\n";
        cout<< "------------------\n";
        cout << "Jam Lembur : "<<jl[i];
        cout << "Uang Lembur : "<<ul[i];
        cout << "Gaji Mingguan : "<<gm[i];
        cout << "gaji harian : "<<gh[i];
    }
}
//Algoritma
//string nama [20]
//int JK [20], JL [20]
//long double UL [20],GM [20],GH [20]
//
//Fungsi
//int jam_lembur (int JK)
//JL = JK -40

//double uang_lembur (double JL)
//UL=3*6000*JL
//double gaji_mingguan (double UL)
//GM = UL + (40 * 6000)

//double gaji_harian (double GM)
//GH = GM/5

//input jumlah pegawai (p)
//for (int i=1; i<=p; i++)
//cout << "Input Nama pegawai no-"<<i<<"	: ";
//cin >> nama[i];
//Input Jumlah jam kerja/minggu(JK) :
//if JK >40 maka
//jl[i]=jam_Lembur (JK[i])
//ul[i]=uang_lembur (jl[i])
//gm[i]=gaji_mingguan (ul[i])
//gh [i]=gaji_harian (gm[i])
//output Uang lembur = ul[i]
//output Gaji mingguan  =  gm[i]
//output gaji harian =gh[i]
//else 
//Gaji mingguan = gm [i]
//output Gaji harian = gh[i] 

 