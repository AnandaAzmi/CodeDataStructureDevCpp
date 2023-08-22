#include <iostream>

using namespace std;

int main(){
	cout <<"Mengkonversi jam menit ke detik"<<endl;
	cout << "==============================="<<endl;
    int jam, menit;
    cout << "Masukan lama jam	: ";
    cin >> jam;
    cout << "Masukan lama menit	: ";
    cin >> menit;
    int result = (jam * 3600) + (menit * 60);
    cout << "Hasil Konversi		: " << result << " detik.";
    return 0;
}
