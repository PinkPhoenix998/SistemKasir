#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

	char nama[20], alamat[11], hp[11];
	int hb1, hb2, hb3, d;
	int bb1, bb2, bb3; 
	
	int jb, thsd, tb;
	
	
	cout<<"Masukan Nama = ";
		gets(nama);
	cout<<"Masukan Alamat = ";
		gets(alamat);
	cout<<"Masukan No. HP = ";
		gets(hp);
	
	cout<<"Harga barang 1 = Rp.";
		cin>>hb1;
	cout<<"Banyak barang 1 = ";
		cin>>bb1;
	cout<<"Harga barang 2 = Rp.";
		cin>>hb2;
	cout<<"Banyak barang 2 = ";
		cin>>bb2;
	cout<<"Harga barang 3 = Rp.";
		cin>>hb3;
	cout<<"Banyak barang 3 = ";
		cin>>bb3;	
		
	jb = bb1 + bb2 + bb3;	
	thsd = (hb1 * bb1) + (hb2 * bb2) + (hb3 * bb3);
	
	cout<<"====================================="<<endl;
	cout<<"Nama = "<<nama<<endl;
	cout<<"Alamat = "<<alamat<<endl;
	cout<<"No. Hp = "<<hp<<endl;
	cout<<"Harga barang 1 = "<< hb1	<<endl;
	cout<<"Banyak barang 1 = "<< bb1	<<endl;
	cout<<"Harga barang 2 = "<<hb2		<<endl;
	cout<<"Banyak barang 2 = "<< bb2 <<endl;
	cout<<"Harga barang 3 = "<< hb3 <<endl;
	cout<<"Banyak barang 3 = "<< bb3 <<endl;
	cout<<"================================"<< endl;		
	cout<<"Jumlah barang = "<< jb <<endl;
	cout<<"Total harga sebelum diskon = Rp."<< thsd <<endl;
	
	if(thsd <= 500000)
	{
		tb = thsd-(thsd*0.10); 
		cout<<"Diskon = 10%"<<endl;
	}	
	
	if(thsd >= 500000 && thsd <= 1000000)
	{
		tb = thsd-(thsd*0.15); 
		cout<<"Diskon = 15%"<<endl;
	}
	
	else if(thsd >= 1000000)
	{
		tb = thsd-(thsd*0.20); 
		cout<<"Diskon = 20%"<<endl;
	}
	
	cout<<"Total Bayar = Rp."<< tb <<endl;
	
	
}