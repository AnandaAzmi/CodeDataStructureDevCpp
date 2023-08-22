#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct TNode {
    int data;
    TNode *next;
    TNode *prev; // Menambahkan pointer prev untuk double linked list
};

TNode *head, *tail;

void init(){
    head = NULL;
    tail = NULL;
};

int isEmpty (){
    if (tail == NULL)
        return 1;
    else return 0;
};

void insertdepan (int databaru){
    TNode *baru;
    baru =new TNode;
    baru ->data= databaru;
    baru ->next=NULL;
    baru ->prev=NULL; // Set prev menjadi NULL
    if (isEmpty()==1){
        head = tail= baru;
        tail->next=NULL;
        tail->prev=NULL; // Set prev menjadi NULL
    }
    else {
        baru ->next = head;
        head->prev = baru; // Set prev dari head menjadi baru
        head=baru;
    }
    cout << "Data Masuk\n";
};

void insertbelakang(int databaru){
    TNode *baru;
    baru = new TNode;
    baru->data=databaru;
    baru ->next=NULL;
    baru ->prev=NULL; // Set prev menjadi NULL
    if(isEmpty()==1){
        head=baru;
        tail=baru;
        tail ->next=NULL;
        tail ->prev=NULL; // Set prev menjadi NULL
    }
    else{
        tail ->next=baru;
        baru ->prev=tail; // Set prev dari baru menjadi tail
        tail=baru;
    }
    cout << "Data Masuk\n";
};

void tampil (){
    TNode *bantu;
    bantu = head;
    if (isEmpty()==0){
        while (bantu!=NULL)
        {
            cout << bantu->data<<" ";
            bantu = bantu ->next;
        }
    }
    else
        cout << "Masih Kosong\n";
};

void hapusdepan()
{
    TNode *hapus;
    int d;
    if (isEmpty()==0){
        if (head!=tail){
            hapus = head;
            d= hapus->data;
            head =head->next;
            head->prev = NULL; // Set prev dari head menjadi NULL
            delete hapus;
        }
        else {
            d= tail ->data;
            head= tail=NULL;
        }
        cout << d << " Terhapus\n";
    }
    else cout << "Masih Kosong\n";
};

void hapusbelakang()
{
    TNode *bantu,*hapus;
    int d;
    if (isEmpty()==0){
        bantu =tail; // Menggunakan tail sebagai bantu
        if (head!=tail){
            tail = tail ->prev; // Set tail menjadi prev dari tail
            tail -> next = NULL; // Set next dari tail menjadi NULL
            hapus = bantu;
            d= hapus->data;
            delete hapus;
        }
        else {
            d= tail ->data;
            head= tail=NULL;
        }

        cout << d << " Terhapus\n";
    }
    else cout << "Masih Kosong\n";
};

void clear (){
    TNode *bantu, *hapus;
    bantu = head;
    while (bantu!= NULL){
        hapus = bantu;
        bantu = bantu ->next;
        delete hapus;
    }
    head = NULL;
    printf ("CLEAR");
};

int main ()
{
    int pil, databaru;
    do
    {
        system("cls");
        cout << endl<<endl;
        cout<<"==============================\n";
        cout<<" PROGRAM DOUBLE LINKED LIST  = \n";
        cout<<"==============================\n";
        cout<<"= 1. Insert Data Depan       ="<<endl;
        cout<<"= 2. Insert Data Belakang    ="<<endl;
        cout<<"= 3. Hapus Data Depan        ="<<endl;
        cout<<"= 4. Hapus Data Belakang     ="<<endl;
        cout<<"= 5. Tampil Data             ="<<endl;
        cout<<"= 6. Clear                   ="<<endl;
        cout<<"= 7. Exit                    ="<<endl;
        cout << "============================"<<endl;
        cout<<"Masukan Pilihan : ";
        cin>>pil;
        switch(pil){
        case 1 :
            cout << "Masukkan Data : ";
            cin >> databaru;
            insertdepan(databaru);
            break;
        case 2 :
            cout << "Masukkan Data : ";
            cin >> databaru;
            insertbelakang(databaru);
            break;
        case 3 :
            hapusdepan();
            break;
        case 4 :
            hapusbelakang();
            break;
        case 5 :
            cout << "Tampilan Data : ";
            tampil();
            cout << endl;
            break;
        case 6 :
            clear();
            break;
        case 7 :
            cout << "Terima Kasih!" << endl;
            break;
        default :
            cout << "Pilihan Salah" << endl;
}
    system("pause");
}
    while(pil!=7);
    }