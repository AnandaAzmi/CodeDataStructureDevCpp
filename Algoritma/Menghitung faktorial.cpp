#include <iostream>
using namespace std;

int main ()
{
	int hasil,i;
	hasil = 1;
	for (i=1; i<=10; i++){
		hasil = hasil * i;
		cout <<i;
		if (i<10)
		{
			cout<<"*";
		}
	}
	cout <<" = "<< hasil;
	return 0;
}
