#include <iostream>
#include <iomanip>
using namespace std;

void bil(int A[], int N)
{ 
	for (int i=0; i<N; i++){ 
		cout<<"Masukkan elemen ke-"<<i+1<<':';
		cin>>A[i];
	}
}
int nb (int A[], int N)
	{
		int max_num;
		max_num = A [0];
		for (int i=0; i<N; i++){
			if (A[i] > max_num){
				max_num = A[i];
			}
		}
		return max_num;
	}
int nk (int A[], int N)
{
	int min_num;
	min_num = A [0];
	for (int i=0; i<N; i ++)
	{
		if (A[i]<min_num){
			min_num =A[i];
		}
	}
	return min_num;
}

void cetak (int A[], int N)
{
	int no =1;
	for (int i= 0; i<N; i++)
	{
		cout << left << setw(10)<< no++<< left << setw (10)<<A[i]<<endl;
	}
}
int main()
{ 
	int n[100];
	int s;
	cout<<"Masukkan banyak elemen = ";
	cin>>s;
	bil(n,s);
	cout << endl;
	cout << "No"<< cetak (n,s)<< "Array"<< cetak (n,s)<<endl;
	cout << "Bilangan Terbesar	: "<<nb (n,s)<<endl;
	cout << "Bilangan Terkecil	: "<< nk (n,s)<<endl;
	return 0;
}
