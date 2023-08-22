#include <iostream>
using namespace std;

// Definisi kelas 'Hewan'
class Hewan {
private:
    string nama;
    string jenis;
    int usia;

public:
    // Konstruktor untuk menginisialisasi objek
    Hewan(string nama, string jenis, int usia) {
        this->nama = nama;
        this->jenis = jenis;
        this->usia = usia;
    }

    // Metode untuk memperbarui usia hewan
    void perbarui_usia(int tahun) {
        this->usia += tahun;
    }

    // Metode untuk menampilkan informasi hewan
    void tampilkan_info() {
        cout << "Nama: " << nama << ", Jenis: " << jenis << ", Usia: " << usia << " tahun" << endl;
    }
};

int main() {
    // Membuat objek 'kucing' dan 'anjing' dari kelas 'Hewan'
    Hewan kucing("Fluffy", "Kucing", 2);
    Hewan anjing("Buddy", "Anjing", 3);

    // Menampilkan informasi awal hewan
    kucing.tampilkan_info();
    anjing.tampilkan_info();

    // Memperbarui usia hewan
    kucing.perbarui_usia(1);
    anjing.perbarui_usia(2);

    // Menampilkan informasi hewan setelah diupdate usia
    kucing.tampilkan_info();
    anjing.tampilkan_info();

    return 0;
}
