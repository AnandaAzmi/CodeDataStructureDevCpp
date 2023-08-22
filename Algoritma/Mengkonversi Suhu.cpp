#include <iostream>

using namespace std;

int main(){
	cout << "Mengkonversi Suhu"<<endl;
	cout << "================================="<<endl;
    double celcius;
    cout << "Tulis suhu dalam Celcius: ";
    cin >> celcius;
    cout << endl;
    double fahrenheit = 9 * celcius / 5 + 32;
    double reamur = 4 * celcius / 5;
    cout << "Fahrenheit: " << fahrenheit<<endl;
	cout << "Reamur: " << reamur;
    return 0;
}
