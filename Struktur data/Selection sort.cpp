#include <iostream>

using namespace std;

void selectionSort(int array[], int length) {
    for (int i = 0; i < length - 1; i++) {// Iterasi melalui array, length merepresentasikan panjang arraynya
        int minIndex = i; // Menginisialisasi indeks elemen terkecil

        // Mencari indeks elemen terkecil yang belum diurutkan
        for (int j = i + 1; j < length; j++) {
            if (array[j] < array[minIndex]) {// Membandingkan elemen dengan elemen terkecil
                minIndex = j; // Memperbarui indeks elemen terkecil
            }
        }

        // Tukar elemen terkecil dengan elemen pertama yang belum diurutkan
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
}

void displayArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout <<endl;
}

int main() {
    int array[] = {64, 25, 12, 22, 11}; 
    int length = sizeof(array) / sizeof(array[0]);  // Panjang array
    cout << "PROGRAM SELECTION SORTING"<<endl;
    cout << "========================="<<endl<<endl;
    cout << "Array sebelum diurutkan: ";
    displayArray(array, length);

    selectionSort(array, length);  // Mengurutkan array menggunakan Selection Sort

    cout << "Array setelah diurutkan: ";
    displayArray(array, length); // Menampilkan array setelah diurutkan

    return 0;
}

//Konsep: Selection Sort membagi array menjadi dua bagian, 
//yaitu bagian yang sudah diurutkan dan bagian yang belum diurutkan.
// Pada setiap iterasi, elemen terkecil dari bagian yang belum diurutkan dipilih dan ditukar dengan elemen pertama dari bagian yang belum diurutkan.
//inisialisasi nilai pertama sebagai nilai terkecil, selanjutnya dibandingkan