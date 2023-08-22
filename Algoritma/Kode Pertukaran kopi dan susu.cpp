#include <iostream>
using namespace std;

int main()
{
	cout << "Menukarkan isi gelas"<< endl;
	string ga,gb,gc;
	cout << "Masukan (Kopi/Susu) ke Gelas A : ";cin>>ga;
	cout << "Masukan (Kopi/Susu) ke Gelas B : ";cin>>gb;cout<<endl;
	cout << "Ditukarkan Menjadi :"<<endl;
	gc = ga;
	ga = gb;
	gb = gc;
	
	cout << "Gelas A	: "<<ga;
	cout <<endl;
	cout << "Gelas B	: "<<gb;
	return 0;
}


