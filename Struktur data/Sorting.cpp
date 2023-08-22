#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
    int nilai [10] = {34,87,45,56,32,63,51,25,90};
    int a,b;
    int temp;
    cout<< "PROGRAM BUBBLE SORTING"<<endl;
    cout<< "========================="<<endl<<endl;
    cout << "Nilai Sebelum Diurutkan "<<endl;
    cout<< "========================="<<endl;
    for (a=0; a<10; a++)
    {
        cout<< nilai[a]<<" ";
    }

    for (a=0; a<10; a++)
    {
        for (b=9; b>=a+1; b--)
        {
            if (nilai [b]<nilai [b-1])
            {
                temp = nilai [b];
                nilai [b] = nilai [b-1];
                nilai [b-1] = temp;
            }
        }
    }
    cout<< endl<<endl;

    cout<< "Nilai Setelah Diurutkan "<<endl;
    cout<< "========================="<<endl;
    for (a=0; a<10; a++)
    {
        cout << nilai[a]<<" ";
    }
    getch ();
}

