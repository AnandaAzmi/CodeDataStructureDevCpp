#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int *pc,c;
    c= 22;
    cout << "alamatt variabel c : "<<& c; cout << "\n";
    cout << "Nilai Variabel c : "<< c; cout << "\n\n";

    pc=&c;
    cout << "Alamat dari pointer pc : "<< pc; cout << "\n";
    cout << "Nilai dari pointer pc : "<<*pc; cout<< "\n\n";

    c=11;
    cout << "Alamat dari pointer pc : "<< pc ; cout <<"\n";
    cout << "Nilai dari pointer pc : "<< *pc ; cout << "\n\n";

    *pc=2;
     cout << "alamatt variabel c : "<<& c; cout << "\n";
     cout << "Nilai Variabel c : "<< c; cout << "\n\n";

    getch();
}