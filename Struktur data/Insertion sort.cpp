#include <iostream>

using namespace std;

void insertionSort(int array[], int length) {
    for (int j = 1; j < length; ++j) {
        int key = array[j];  // Menyimpan nilai saat ini yang akan dimasukkan ke dalam sekuensi yang sudah terurut

        int i = j - 1;
        while (i >= 0 && array[i] > key) {
            array[i + 1] = array[i];  // Memindahkan elemen yang lebih besar ke kanan
            i--;
        }
        array[i + 1] = key;  // Memasukkan nilai key ke posisi yang tepat
    }
}

void displayArray(int array[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << array[i] << " ";
    }
    cout <<endl;
}

int main() {
    int array[] = {20,56,15,43,55};
    int length = sizeof(array) / sizeof(array[0]);
    cout << "PROGRAM INSERTION SORT"<<endl;
    cout<<"========================="<<endl;
    cout << "Array sebelum diurutkan: ";
    displayArray(array, length);

    insertionSort(array, length);

    cout << "Array setelah diurutkan: ";
    displayArray(array, length);

    return 0;
}

//Konsep: Insertion Sort membagi array menjadi dua bagian, 
//yaitu bagian yang sudah diurutkan dan bagian yang belum diurutkan. 
//Pada setiap iterasi, elemen dari bagian yang belum diurutkan dimasukkan ke posisi yang tepat dalam bagian yang sudah diurutkan.
