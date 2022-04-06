#include <iostream>
#include <string>
using namespace std;

int porsi[10], kode[10], loop, harga, total=0, bayar, duit, ongkir, akhir, kembalian, Atotal, Aongkir, dtotal, dongkir;
float jarak;
string nama[10];

int main(){
    int i=0;
    do{
        system("cls");
        cout<<"======Menu Rumah Makanan====="<<endl;
        cout<<"============================="<<endl;
        cout<<"|1.AYAM GEPREK    Rp.21.000 |"<<endl;
        cout<<"|2.AYAM GORENG    Rp.17.000 |"<<endl;
        cout<<"|3.UDANG GORENG   Rp.19.000 |"<<endl;
        cout<<"|4.CUMI GORENG    Rp.20.000 |"<<endl;
        cout<<"|5.AYAM BAKAR     Rp.25.000 |"<<endl;
        cout<<"============================="<<endl;
        cout<<"Makanan yang dipesan : ";cin>>loop;kode[i]=loop;
        if(loop!=0){
            cout<<"Jumlah Porsi         : ";cin>>porsi[i];
            i++;
        }
    }while(loop!=0);
	
    for (int j=0; j<i; j++){
        if(kode[j]==1){
            nama[j]="Ayam Geprek   Rp. 21.000";
            harga=21000;
            total=harga*porsi[j]+total;}
        else if (kode[j]==2){
            nama[j]="Ayam Goreng   Rp. 17.000";
            harga=17000;
            total=harga*porsi[j]+total;}
        else if (kode[j]==3){
            nama[j]="Udang Goreng   Rp. 19.000";
            harga=19000;
            total=harga*porsi[j]+total;}
        else if (kode[j]==4){
            nama[j]="Cumi Goreng    Rp. 20.000";
            harga=20000;
            total=harga*porsi[j]+total;}
        else if (kode[j]==5){
            nama[j]="Ayam Bakar     Rp. 25.000";
            harga=25000;
            total=harga*porsi[j]+total;}
    }
	
	cout<<endl<<"=====Delivery Order====="<<endl;
	cout<<" Masukkan jarak rumah anda (KM) : ";
	cin>>jarak;
	
	if(jarak < 3){
		ongkir = 15000;
		cout<<"Anda di kenakan Biaya Ongkir  = Rp.15000"<<endl;}
	else if(jarak >= 3){
		ongkir = 25000;
		cout<<"Anda di kenakan Biaya Ongkir  = Rp.25000"<<endl;
	}
	
    if(total > 50000 && total < 150000){
        dongkir=5000;
        Aongkir=ongkir-5000;
        Atotal=total-(0.15*total);
        dtotal=0.15*total;
    }
    else if(total > 150000){
        dongkir=8000;
        Aongkir=ongkir-8000;
        Atotal=total-(0.35*total);
        dtotal=0.35*total;
    }
	
    akhir=Aongkir+Atotal;
	cout<<" Total Harga                  = Rp."<<akhir<<endl;
	cout<<" Masukan Pembayaran           = Rp.";
	cin>>duit;
    kembalian=duit-total;

    cout<<"+-----------------------------------------------+"<<endl;
    cout<<"|                    Rumah Makan                |"<<endl;
    cout<<"+-----------------------------------------------+"<<endl;
    for(int j=0; j<i; j++){
        cout<<"| "<<j+1<<". "<<nama[j]<<" "<<porsi[j]<<" porsi           |"<<endl;
    }
    cout<<"+-----------------------------------------------+"<<endl;
    cout<<"| Ongkir                                        |"<<endl;
    cout<<"|  - Ongkir                  = Rp. "<<ongkir<<"        |"<<endl;
    cout<<"|  - Potongan Ongkir         = Rp. "<<dongkir<<"         |"<<endl;
    cout<<"|  - Total Ongkir            = Rp. "<<Aongkir<<"        |"<<endl;
    cout<<"| Harga                                         |"<<endl;
    cout<<"| - Harga                    = Rp. "<<total<<"        |"<<endl;
    cout<<"| - Potongan Harga           = Rp. "<<dtotal<<"        |"<<endl;
    cout<<"| - Total Harga              = Rp. "<<Atotal<<"        |"<<endl;
    cout<<"| Sub Total                  = Rp. "<<akhir<<"        |"<<endl;
    cout<<"| Pembayaran                 = Rp. "<<duit<<"        |"<<endl;
    cout<<"| Kembalian			= Rp. "<<kembalian<<"		|"<<endl;
    cout<<"+-----------------------------------------------+"<<endl;  
}
