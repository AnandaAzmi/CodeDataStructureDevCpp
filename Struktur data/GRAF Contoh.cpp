#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct  tipeS //deklarasi struct
{
    struct tipeS *left;
    int info;
    struct tipeS *right;
    
};
 typedef struct tipeS simpul;
 simpul *p,*first, *last,*pvertex,*pedge,*Q,*R,*S; //pointer yang digunakan untukk membentuk graf
 simpul *PointS[10]; //array dari pointer 'tipeS' yang berfungsi untuk menyimpan pointer ke setiap simpul (vertex)

 int main ()
 {
    int A [10][10] = {{0,5,0,2,0,1,8,0,0,0},           //matriks 2D
                    {6,0,3,0,0,2,8,0,0,0},
                    {0,0,0,0,9,9,0,0,0,20},
                    {0,0,12,0,7,1,0,0,0,0},
                    {0,14,0,0,0,0,8,0,0,0},
                    {0,12,11,0,0,0,8,0,0,0},
                    {5,7,0,0,9,7,8,0,0,0},
                    {0,9,11,0,23,0,0,0,0,0},
                    {0,12,6,0,0,0,0,0,7,0},
                    {0,5,0,0,0,5,0,0,0,9}};
    int NmS [10]= {1,2,3,4,5,6,7,8,9,10}; //NmS adalah array yang menyimpan nama (nomor) setiap simpul(vertex)
    int i,j; //variabel loop untuk iterasi
    i=0; j=0;

    //membuat simpul pertama
    p=new simpul;//membuat simpul baru
    p-> info =NmS[0]; //p diisi dengan info dari NmS[0]
    first =p; //diatur untuk menunjuk ke simpul p
    last = p;
    p-> left=NULL; //pointer left dan right pada simpul p diatur NULL
    p->right = NULL;
    PointS[0] =p; //pointer p disimpan dalam array PointS untuk mereferensikan simpul pertama
    cout<<p->info; //cetakk info dari simpul pertama
    cout << "alamat : "<<PointS[0]<<endl;

    //simpul vertex yang berikutnya
    for (i=1;i<=9;i++) //iterasi sebanyak 9 kali(kenapa tidak 10?karena yang pertama sudah diawal/sblumnya)
    {
        p=new simpul; //buat simpul baru
        p-> info = NmS[i]; //isi dengan info dari NmS[i]
        last->left=p; //pointer left pada simpul last diatur untuk menunjuk ke simpul baru p
        last= last->left; //memperbarui pointer last agar menunjuk ke simpul vertex terahir
        p->left=NULL; //pointer left  pada simpul p diatur manjadi NULL
        PointS[i]=p; //pointer p disimpan dalam array PointS
        cout << p->info; //info dari simpul baru dicetak
        cout << "alamat : "<<PointS[i]<<endl;
    };
    //simpul edge untuk semua vertex
    cout <<endl;
    Q= first; //pointer Q diatur untuk menunjuk ke simpul vertex yang sedang diproses
    for (i=0;i<=9;i++) //iterasi sebanyak 10 kali untuk setiap simpul dalam graf
    { 
        R=Q; 
        cout << "Vertex "<<Q->info;
        cout << endl;
        for (j=0;j<=9;j++)
        {
            if (A[i][j] !=0) //jika bobot tidak sama dengan nol
            {
                p=new simpul; // membuat simpul baru
                p->info = A[i][j]; //mengisi info dengan nilai bobot A[i][j]
                R-> right =p; //menghubungkan simpul edge p ke simpul sebelumnya R melalui pointer right
                p-> left =PointS[j]; //menghubungkan simpul edge p ke simpul tujuan PointS[j] melalui pointer left
                cout << " Berhubungan dengan : "<<p->left->info;
                cout << " bobot : "<<p->info;
                p->right =NULL; //Mengatur pointer right pada simpul sebelumnya R menjadi simpul edge p untuk mempersiapkan pembentukan
                                // simpul edge berikutnya.
                R=p;
                cout << endl;
            }
        }
        cout << endl;
        Q = Q->left;

    }
        return 0;
 }

// Info = bobot dalam array