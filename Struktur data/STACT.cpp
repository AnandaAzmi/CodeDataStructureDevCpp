#include <iostream>
#define MAX_STACK 10 //deklarasi stack dapat menampung max 10 data

using namespace std;

struct STACK //deklarasi struct untuk stact
{
    int top; //variabel untuk menentukan posisi atas stack
    string data [10];// var untuk data yang akan disimpan dalam stack
};

STACK tumpuk; //deklarasi variabel stact

void inisialisasi () // fungsi persiapan
{
    tumpuk.top = -1;
}

int IsFull () //fungsi untuk memeriksa apakah stack penuh
{
    if (tumpuk.top == MAX_STACK-1)// jika top = max_stack - 1
    return 1;
    else // jika tidak
    return 0; 
}

int IsEmpty () // fungsi untuk memerikasi apakah stack kosong
{
    if (tumpuk.top == -1)//jika top = -1,
        return 1; // maka fungsi membalikan nilai 1, artinya stack dalam keadaan kosong
    else
        return 0;// maka fungsi membalikan nilai 0, artinya stack sudah berisi data
}

void Push (string d) //fungsi untukk memasukan data ke dalam stack
{
    tumpuk.top++; //setiap ada data masuk, maka posisi top akan bertambah 1
    tumpuk.data [tumpuk.top]= d; //menyimpan data dalam stack
}

void pop ()// fungsi untuk menghapus data dalam stack
{
    cout << "Elemen terahir stack sudah dihapus, yaitu : "<< tumpuk.data [tumpuk.top]<<endl;
    // menghapus data pada posisi atas
    tumpuk.top--; // posisi atas berkurang 1, karena 1 data telah terhapus
}

void clear ()// fungsi untuk menghapus semua data dalam stack (meriset stack)
{
    tumpuk.top = -1; // posisi top dijadikan -1, maka stack akan kosong
}

void tampilstack ()//fungsi untuk menampilakn data yang ada dalam stack
{
    for (int i = tumpuk.top; i>= 0; i--)
    {
        cout <<"Data    : "<< tumpuk.data [i]<<endl; //tampilkan data yang ada dalam stack
    }
}

int main ()
{
    int pil; // var untuk pilihan menu
    inisialisasi(); //memanggil fungsi inisialisasi
    string dt; //var untuk data yang akan dimasukan ke stack

    do {
        cout << endl;
        cout << "PILIHAN PROSES\n";
        cout << "[1] Masukan Data\n";
        cout << "[2] Hapus Data\n";
        cout << "[3] Tampil Isi Stack\n";
        cout << "[4] Mereset Stack\n";
        cout << "[5] keluar\n";
        cout << "Masukan Kode Pilihan : ";
        cin >> pil;
        cout << endl;

        switch (pil)
        {
            case 1 : 
            if (IsFull() != 1) //jika stack tidak penuh
            {
                cout << "Masukan Data   : ";
                cin >> dt ;
                Push(dt); //memanggil fungsi push
                cout << endl;
            }
            else 
                cout << "\n Sudah Penuh, push gagal\n"; // jika stack penuh maka tampil pesan 
            break;

            case 2 : if (IsEmpty() != 1) //jika stack tidak kosong
                pop (); //memanggil fungsi pop untuk menghapus stack
            else 
                cout << "\n Masih Kosong \n"; //jika stack kosong maka tampil pesan
            break;

            case 3 : if (IsEmpty() != 1)// jika stack tidak kosong
                tampilstack(); //maka tampilkan data stack 
            else
                cout << "\n Stack Kosong \n"; // jika stack kosong tampilkan pesan
            break;

            case 4 : clear (); // memanggil fungsi clear untuk menghapus semua data
                cout << "\n Stack udah di hapus \n";
            break;
        }
    }
    while (pil !=5);

return 0;    
}