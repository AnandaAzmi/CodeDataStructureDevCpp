#include <iostream>
using namespace std;

int main ()
{
	int Y, Z, HY, total;
	cout << " Masukan Jumlah baris : ";
	cin>>Y;
	total = 0;
	for (Y=Y; Y>0; Y--){
		HY = 0;
		for(Z=1; Z<=Y; Z++){
			cout << Z;
			HY = HY + Z;
			if  (Z<Y){
				cout << "+";
			}
		}
		cout << " = "<< HY;
		cout << endl;
		total = total + HY;
	}
			cout << "Total = "<<total<<endl;

	return 0;
}
