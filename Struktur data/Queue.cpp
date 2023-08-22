#include <iostream>
#include <stdio.h>
#include <conio.h>
#define MAX 10 //maksimal antrian 10

using namespace std;

struct Queue //membuat struct untuk antrian
{
    int data [MAX]; //var untuk data dengan jumlah array sebesar max
    int head; // var untuk posisi head 
    int tail; // var untuk posisi tail
};

 Queue antrian ;// deklarasi var antrian

 void create () //fungsi membuat antrian
 {
    antrian.head= antrian.tail= -1; //dengan memberikan head dan tai = -1
 }

 int IsEmpty () //fungsi untuk memeriksa apakah antrian kosong atau tidak
 {
    if (antrian.tail == -1)//jika taill = -1
        return 1;//maka fungsi menghasilkan nilai 1, artinya antrian kosong
    else // jika tidak
        return 0; //fungsi akan menghasilkan nilai 0, artinya antrian sudah berisi
 }

 int IsFull ()// fungsi untuk memeriksa apakah antrian penuh
 {
    if (antrian.tail==MAX-1) // jika tail = max-1
        return 1;// maka fungsi menghasilkan nilai 1, artinya antrian penuh
    else
        return 0; //fungsi akan menghasilkan nilai 0, artinya antrian belum penuh
 }

 void Enqueue (int data) //fngsi untuk memasukan data ke dalam antrian
 {
    if (IsEmpty()==1){//jika antrian kosong
        antrian.head=antrian.tail=0; //maka posisi head dan tail dari -1 menjadi 0
        antrian.data[antrian.tail]=data; //data dimasukan ke dalam antrian, menempati posisi ke 0
        cout << "Data sudah masuk ke antrian"<<endl;
    }
    else 
    if (IsFull()==0){ //jika antrian sudha berisi dan belum penuh
        antrian.tail++;// maka posisi tail akan bertambah 1
        antrian.data[antrian.tail]=data; //data dimasukan ke dalam antrian
        cout << "Data sudah masuk antrian"<<endl;

    }
 }

int dequeue () //fungsi untuk menghapus data dari antrian
{
    int e = antrian.data[antrian.head]; //var e untuk data yang akan dihapus, data akan dihapus pada posisis head
    for (int i = antrian.head; i<=antrian.tail-1; i++) //perulangan untuk menggeser data dari belakang ke depan
    {
        antrian.data[i]= antrian.data[i+1]; //menggeser data dari belakang ke depan, karena posisi depan berkurang 1
    }
    antrian.tail--; //posisi tail akan berkurang 1
    return 0; //data dihapus
}

void clear()//fungsi untuk menghapus semua data dalam antrian
{
    antrian.head=antrian.tail=-1; //dengan memberi nilai head dan tail -1
    cout << "CLEAR"<<endl;
}

void tampil()//fungsi untuk menampilkan data dalam antrian
{
    if (IsEmpty()==0)//jika antrian tidak kosong
    {
        for (int i = antrian.head; i <= antrian.tail; i++)//perulangan dari data paling depan sampai data paling belakang
        {
            cout <<antrian.data[i]<<endl; //tampilkan data
        }
    }
    else cout << "data kosong!";
}

int main ()//program utama antrian
{
    int pil; //var untuk pilihan menu
    int data; //var data yang akan dimasukan ke dalam antrian
    create(); //memanggil fungsi create
    do //perulangan
    {
        cout <<endl;
        cout << "=================================="<<endl;
        cout << "PROGRAM QUEQUE"<< endl;
        cout << "=================================="<<endl;
        cout << "1. ENQUEUE "<<endl;
        cout << "2. DEQUEUE "<<endl;
        cout << "3. TAMPIL "<<endl;
        cout << "4. CLEAR "<<endl;
        cout << "5. EXIT "<<endl;
        cout << "Masukan Pilihan : ";cin>>pil;cout<<endl;
        switch (pil)
        {
        case 1:cout<<"Masukan Data  : "; cin >>data;
            Enqueue(data);
            break;

        case 2: dequeue();
            cout <<"Data telah dihapus"<<endl;
            break;
        case 3: tampil();
            break;
        case 4: clear();
            break;
        case 5: cout << endl<<"Thanks telah menggunakan program Queue";
            break;
        }
    }
    while (pil!=5);
    return 0;
}

