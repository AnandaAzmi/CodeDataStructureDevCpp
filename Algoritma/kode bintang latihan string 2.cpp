#include <iostream>
using namespace std;

int main ()
{
	int X, Y, Z;
	X= 5;
	for (Y=1; Y<=X; Y++){
		for(Z=1; Z<=Y; Z++){
			cout << " * ";
		}
		cout << endl;
	}
	for (Y=4; Y>0; Y--){
		for (Z=1; Z<=Y; Z++){
			cout << " * ";
		}
		cout << endl;
	}
	return 0;
		
	}

