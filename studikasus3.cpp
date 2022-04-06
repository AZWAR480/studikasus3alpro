#include <iostream>

using namespace std;


int porsi,kode,harga,total,bayar,duit,ongkir,akhir,kembalian;
float jarak;





int main(){
	cout<<"======Menu Rumah Makanan====="<<endl;
	cout<<"============================="<<endl;
	cout<<"|1.AYAM GEPREK    Rp.21.000 |"<<endl;
	cout<<"|2.AYAM GORENG    Rp.17.000 |"<<endl;
	cout<<"|3.UDANG GORENG   Rp.19.000 |"<<endl;
	cout<<"|4.CUMI GORENG    Rp.20.000 |"<<endl;
	cout<<"|5.AYAM BAKAR     Rp.25.000 |"<<endl;
	cout<<"============================="<<endl;
	
	milih:
	cout<<"Masukkan kode Makanan untuk memesan = ";
	cin>>kode;
	
	while (kode==0)	
	{
		cout<<"pilihan anda (1/2/3/4/5/6)";
		goto milih;
	}
	
	if(kode==1)
	{
		cout<<"* AYAM GEPREK  = 21.000"<<endl;
		cout<<"* Jumlah Porsi = ";
		cin>>porsi;
		harga=21000;
		total=harga*porsi;
		cout<<"Total Harga = Rp"<<total<<endl;
	}
	else if (kode==2)
	{
		cout<<"* AYAM GORENG  = 17.000"<<endl;
		cout<<"* Jumlah Porsi = ";
		cin>>porsi;
		harga=17000;
		total=harga*porsi;
		cout<<"Total Harga = Rp"<<total<<endl;;
	}
	else if (kode==3)
	{
		cout<<"* UDANG GORENG  = 19.000"<<endl;
		cout<<"* Jumlah Porsi = ";
		cin>>porsi;
		harga=19000;
		total=harga*porsi;
		cout<<"Total Harga = Rp"<<total<<endl;;
	}else if (kode==4)
	{
		cout<<"* CUMI GORENG  = 20.000"<<endl;
		cout<<"* Jumlah Porsi = ";
		cin>>porsi;
		harga=20000;
		total=harga*porsi;
		cout<<"Total Harga = Rp."<<total<<endl;;
	}else if (kode==5)
	{
		cout<<"* AYAM BAKAR  = 25.000"<<endl;
		cout<<"* Jumlah Porsi = ";
		cin>>porsi;
		harga=25000;
		total=harga*porsi;
		cout<<"Total Harga = Rp."<<total<<endl;;
	}
	bayar = bayar + total;
	
	cout<<"=====Delivery Order====="<<endl;
	cout<<" Masukkan jarak rumah anda (KM) : ";
	cin>>jarak;
	cout<<" Harga                        = Rp."<<bayar<<endl;
	
	if(jarak < 3){
		ongkir = bayar + 15000;
		cout<<"A nda di kenakan Biaya Ongkir = Rp.15000"<<endl;
	}
	else if(jarak >= 3){
		ongkir = bayar + 25000;
		cout<<" Anda di kenakan Biaya Ongkir = Rp.25000"<<endl;
	}
	akhir=ongkir;
	kembalian=duit-akhir;
	
	cout<<" Total Harga                  = Rp."<<akhir<<endl;
	cout<<" Masukan Pembayaran           = Rp.";
	cin>>duit;
	cout<<"Cash Back              = Rp."<<kembalian<<",-";
	
}
