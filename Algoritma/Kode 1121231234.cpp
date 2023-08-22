#include <iostream>
using namespace std;

int main ()
{
	int Y, Z;
	for (Y=1; Y<=5; Y++){
		for(Z=1; Z<=Y; Z++){
			cout << Z << " ";
		}
		cout << endl;
	}
	return 0;
}
