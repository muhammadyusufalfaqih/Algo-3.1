#include <iostream>
#include <conio.h>
#include <stdio.h>

void main()
{
float bil1, bil2, bil3;

cout<<"masukan bilangan pertama : “;
cin>> bil1;
cout<<"masukan bilangan kedua   : “;
cin>> bil2;
cout<<"masukan bilangan ketiga  : “;
cin>> bil3;

if ((bil1>bil2) && (bil1>bil3))
{
cout<<"Jadi bilangan yang terbesar adalah bilangan pertama : “<<bil1;
}
else if ((bil2>bil1) && (bil2>bil3))
{
cout<<"Jadi bilangan yang terbesar adalah bilangan kedua   : “<<bil2;
}
else
{
cout<<"Jadi bilangan yang terbesar adalah bilangan ketiga  : “<<bil3;
}
getch();
}
