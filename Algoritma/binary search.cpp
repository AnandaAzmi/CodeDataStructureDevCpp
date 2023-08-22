#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int search;
int n, data [50];

void selection_sort()
{
      int temp, min, i, j;

      for(i=0; i<n;i++)
      {
            min = i;
            for(j = i+1; j<n; j++)
            {
                  if(data[j]<data[min])
                  {
                        min=j;
                  }
            }
            temp = data[i];
            data[i]  = data[min];
            data[min] = temp;
      }
}

void binarysearch()
{
      //searching
      int awal, akhir, tengah, b_flag = 0;
      awal = 0;
      akhir = n;
      while (b_flag == 0 && awal<=akhir)
      {
            tengah = (awal + akhir)/2;
            if(data[tengah] == search)
            {
                  b_flag = 1;
                  break;
            }
            else if(data[tengah]<search)
                  awal = tengah + 1;
            else
                  akhir = tengah -1;
      }

        if(b_flag == 1)
            cout<<"\nData ditemukan pada index ke- "<<tengah<<endl;
      else
            cout<<"\nData tidak ditemukan\n";
}

int main()
{
      cout<<"\t   'BINARY SEARCH'"<<endl;
      cout<<"\t====================="<<endl;
      cout << "Masukan jumlah data : ";
	  	cin >> n;
      cout<<"\nData  : "<<endl;
      //Masukan data awal
      for(int x = 0; x<n; x++){
            cout<<"index ke -"<<x<< " : ";
			cin >>data [x];
      cout<<endl;}

      cout<<"\nMasukkan data yang ingin dicari : ";
      cin>>search;
      cout<<"\nData setelah diurutkan : "<<endl;
      //urutkan data dengan selection sort
      selection_sort();
      //tampilkan data setelah diurutkan
      for(int x = 0; x<n; x++)
            cout<<"index ke -"<<x<< " : "<<data[x]<<endl;
    
      cout<<endl;
       
      binarysearch();

      _getche();
      return 0;

 }
