#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    char c[4];
    int i ;
    for (i=0;i<4;i++)
    {
        printf ("Address of c[%d]=%x\n",i,&c[i]); //%d untuk menampilkan data alamat
        //%x untuk format hexadecimal
    }
    getch();
}