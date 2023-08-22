#include <iostream>
using namespace std;

int fibo (int x)
{
	if (x==1)
		return 0;
	else if (x==2)
		return 1;
	else
		return fibo (x-2)+fibo (x-1);
}

int main ()
{
	int a,i;
	cout << "Masukan banyak deret	: "; cin >> a;
	cout << "Deret Fibonacci "<<endl;
	for (i =1; i<=a; i++)
	{
		cout << fibo (i);
		cout << endl;
	}
	return 0;
}
