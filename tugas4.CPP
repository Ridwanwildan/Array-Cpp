#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip.h>

main( )
{
char jenispotong[10];
int i;
int hargasatuan;
int banyakjenis;
int qty[100];
int jumlahharga[10];
int jumlahbayar = 0;
long totalbayar;
float pajak;

cout<<"FRIED CHICKEN SEMRAWUT \n \n";
cout<<"Kode   Jenis     Harga   "<<endl;
cout<<"-------------------------"<<endl;
cout<<"D      Dada      Rp. 7000"<<endl;
cout<<"P      Paha      Rp. 6000"<<endl;
cout<<"S      Sayap     Rp. 5000"<<endl;
cout<<"-------------------------"<<endl;
cout<<"Banyak Jenis : ";
cin>>banyakjenis;
cout<<endl;

for (i = 1; i <= banyakjenis; i++)
{
cout<<"Jenis Ke - "<<i<<endl;
cout<<"Jenis Potong [D/P/S] : ";
cin>>jenispotong[i];
cout<<"Qty : ";
cin>>qty[i];
cout<<endl;
}

clrscr();

cout<<endl;
cout<<"\n \n FRIED CHICKEN SEMRAWUT"<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<" No.  Jenis   Harga       Banyak    Jumlah"<<endl;
cout<<"              Satuan      Beli      Harga "<<endl;
cout<<"-----------------------------------------------"<<endl;

for (i=1; i <= banyakjenis; i++)
{
cout<<" ";
cout<<setiosflags(ios::left)<<setw(5)<<i;
cout<<setiosflags(ios::left)<<setw(8);

if (jenispotong[i] == 'D' || jenispotong[i] == 'd')
{
cout<<"Dada";
cout<<setw(13)<<setiosflags(ios::left);
hargasatuan = 7000;
cout<<"7000";
}
else if (jenispotong[i] == 'P' || jenispotong[i] == 'p')
{
cout<<"Paha";
cout<<setw(13)<<setiosflags(ios::left);
hargasatuan = 6000;
cout<<"6000";
}
else if (jenispotong[i] == 'S' || jenispotong[i] == 's')
{
cout<<"Sayap";
cout<<setw(13)<<setiosflags(ios::left);
hargasatuan = 5000;
cout<<"5000";
}
else
{
cout<<"Salah Kode";
cout<<setw(13)<<setiosflags(ios::left);
hargasatuan = 0;
cout<<"0";
}
cout<<setiosflags(ios::left)<<setw(9)<<qty[i];
jumlahharga[i] = qty[i] * hargasatuan;
cout<<"Rp "<<jumlahharga[i]<<endl ;
jumlahbayar = jumlahbayar + jumlahharga[i];
}

cout<<"-----------------------------------------------"<<endl;
cout<<setiosflags(ios::left)<<setw(20)<<" ";
cout<<"Jumlah Bayar    Rp   ";
cout<<jumlahbayar<<endl;
cout<<setiosflags(ios::left)<<setw(20)<<" ";
pajak = (jumlahbayar * 10) / 100;
cout<<"Pajak 10%       Rp   ";
cout<<pajak<<endl;
cout<<setiosflags(ios::left)<<setw(20)<<" ";
totalbayar = jumlahbayar+pajak;
cout<<"Toyal Bayar     Rp   ";
cout<<totalbayar<<endl;
getch();
}