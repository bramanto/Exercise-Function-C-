/*
	Nama Mahasiswa 	: Bramanto
	Pokok Bahasan	: Procedure & Function
	Date Modified	: Saturday,  27 May 2014 04.11 PM
*/

#include "conio.h"
#include "iostream.h"
void line(int g)
{
	if(g>0)
	{
		cout <<"-";
		line(g-1);
	}
}
void starleft()
{
	int i, j, star;
	clrscr();
	cout <<"Masukkan Nilai : ";
	cin >> star;
	cout<<endl;
	for(i=1;i<=star;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=star;i>0;i--)
	{
		for(j=(i-1);j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"\nRasi Bintang Segitiga Dengan Function Rata Kiri.";
	getch();
}
void starright()
{
	int star,x,y,z;
	clrscr();
	cout << "Masukkan Nilai : ";
	cin >> star;
	cout << endl;
	for(z=star;z>0;z--)
	{
		for(x=z-1;x>0;x--)
		{
			cout<<" ";
		}
		for(y=(star-(z-1));y>0;y--)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	for(z=0;z<star;z++)
	{
		for(x=0;x<(z+1);x++)
		{
			cout<<" ";
		}
		for(y=0;y<(star-(z+1));y++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"\nRasi Bintang Segitiga Dengan Function Rata Kanan.";
	getch();
}
void starbottom()
{
	int s,t,star;
	clrscr();
	cout <<"Masukkan Nilai : ";
	cin >> star;
	for(s=0;s<star;s++)
	{
	 for(t=(star-1);t>s;t--)
	 {
		cout <<" ";
	 }
	 for(t=0;t<=s;t++)
	 {
		cout <<"*";
	 }
	 for(t=0;t<s;t++)
	 {
		cout <<"*";
	 }
	 cout << endl;
	}
	cout<<"\nRasi Bintang Segitiga Dengan Function Rata Bawah.";
	getch();
}
void startop()
{
	int i,j,star;
	clrscr();
	cout <<"Masukkan Nilai : ";
	cin >> star;
	cout<<endl;
	for(i=0;i<star;i++)
	{
		 for(j=0;j<i;j++)
	 {
		cout<<" ";
	 }
	 for(j=(star-1);j>=i;j--)
	 {
		cout<<"*";
	 }
	 for(j=(star-1);j>i;j--)
	 {
		cout<<"*";
	 }
	 cout<<endl;
	}
	cout<<"\nRasi Bintang Segitiga Dengan Function Rata Atas.";
	getch();
}
void main()
{
	char menu;
	menu:
	clrscr();
	line(41);
	cout <<"\n  PROGRAM DINAMIS RASI BINTANG SEGITIGA \n";
	line(41);
	cout <<"\n\n MENU PILIHAN\n";
	line(14);
	cout <<"\n[1] Rasi Bintang Rata Kiri";
	cout <<"\n[2] Rasi Bintang Rata Kanan";
	cout <<"\n[3] Rasi Bintang Rata Bawah";
	cout <<"\n[4] Rasi Bintang Rata Atas";
	cout <<"\n[5] Keluar Program";
	cout <<"\n\nMasukkan Pilihan Anda [1..5] : ";
	cin >> menu;

	if(menu=='1')
	{
		starleft();
		goto menu;
	}
	else if(menu=='2')
	{
		starright();
		goto menu;
	}
	else if(menu=='3')
	{
		starbottom();
		goto menu;
	}
	else if(menu=='4')
	{
		startop();
		goto menu;
	}else if(menu=='5')
	{
		clrscr();
		cout<<"\t\t Terima Kasih, Anda Telah Keluar Program.";
		getch();
	}else{goto menu;}
}