#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
    int nilai [10] = {34,87,45,56,32,63,51,25,90};
    int a,b;
    int temp;//Variabel temp digunakan untuk menyimpan nilai sementara saat proses pertukaran dalam Bubble Sort.
    cout<< "PROGRAM BUBBLE SORTING"<<endl;
    cout<< "========================="<<endl<<endl;
    cout << "Nilai Sebelum Diurutkan "<<endl;
    cout<< "========================="<<endl;
    for (a=0; a<10; a++) //Algoritma Bubble Sort membandingkan nilai nilai[b] dengan nilai[b - 1].
                        // Jika nilai[b] lebih kecil dari nilai[b - 1], maka nilai tersebut ditukar menggunakan variabel temp.
    {
        cout<< nilai[a]<<" ";
    }

    for (a=0; a<10; a++) //Variabel a digunakan sebagai indeks pertama dalam array nilai.
    {
        for (b=9; b>=a+1; b--)//Variabel b digunakan sebagai indeks kedua dalam array nilai.
        {
            if (nilai [b]<nilai [b-1])//Jika nilai nilai[b] lebih kecil dari nilai[b - 1], maka terjadi pertukaran nilai tersebut menggunakan variabel temp.
            {
                temp = nilai [b]; 
                nilai [b] = nilai [b-1];
                nilai [b-1] = temp;
            }
        }
    }
    cout<< endl<<endl;

    cout<< "Nilai Setelah Diurutkan "<<endl;
    cout<< "========================="<<endl;
    for (a=0; a<10; a++)
    {
        cout << nilai[a]<<" ";
    }
    getch ();
}
//Konsep: Bubble Sort membandingkan pasangan elemen berturut-turut dan menukar mereka jika urutannya salah.
// Selama setiap iterasi, elemen dengan nilai yang lebih besar "mengapung" ke bagian kanan array.

