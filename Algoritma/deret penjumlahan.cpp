#include <iostream>
using namespace std;

int main ()
{
	int hasil,i;
	hasil = 0;
	for (i=10; i>=2;){
		hasil = hasil + i;
		cout <<i;
		i= i-2;
		if (i >= 2)
		{
			cout<<"+";
		}
	}
	cout <<" = "<< hasil;
	return 0;
}
