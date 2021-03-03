#include <iostream>
#include <string.h>
using namespace std;
main()
{
int Si, Rusuk, Hasil, P, L, T, r ;
char pilihan, ulang;

 do{

 
cout<<"TUGAS PEMOGRAMAN TERSTRUKTUR"<<endl;
cout<<"=======KELOMPOK_8======="<<endl;
cout<<"========================="<<endl;
cout<<"NAMA ANGGOTA KELOMPOK"<<endl;
cout<<"1. ALDI FRANSISKO"<<endl;
cout<<"2. ONGKI"<<endl;
cout<<"========================="<<endl;
    cout<<"\n MENGHITUNG VOLUME BANGUN RUANG \n"
             <<"1. VOLUME KUBUS \n"
             <<"2. VOLUME BOLA \n"
             <<"3. VOLUME LIMAS SEGI \n"
             <<"Masukan pilihanmu (1..3) : ";
cin>>pilihan;
cout<<"==========================="<<endl;
 
 switch(pilihan)
 {
 
case '1':
cout<<"VOLUME KUBUS"<<endl;
cout<<"Masukan Panjang Sisi : ";
cin>>Si;
Hasil = Si * Si * Si ;
cout<<"HASIL PERHITUNGAN VOLUME : "<<Hasil<<endl <<endl;   
cout<<"Tetap Semangat dan Sukses Selalu";
break;
  
case '2':
 cout<<"VOLUME BOLA"<<endl;
cout<<"Masukan Panjang Rusuk : ";
cin>>r;
Hasil = 4*3.14*r*r*r/3 ;
cout<<"HASIL PERHITUNGAN VOLUME : "<<Hasil<<endl <<endl;   
cout<<"Tetap Semangat dan Sukses Selalu";
break;
 
case '3':
cout<<"VOLUME LIMAS SEGI 4"<<endl;
cout<<"Masukan Panjang  : ";
cin>>P;
cout<<"Masukan Lebar  : ";
cin>>L ;
cout<<"Masukan Tinggi  : ";
cin>>T;
Hasil = P*L*T*1/3 ;
cout<<"HASIL PERHITUNGAN VOLUME : "<<Hasil<<endl <<endl;
cout<<"Tetap Semangat dan Sukses Selalu";
break;
default :
    	
    cout<<"Pilihan anda tidak ada di sistem"<<endl;
    
    }
    
    cout<<"\nKembali ke menu utama ? (y/n) "; 
	cin>>ulang; //untuk      kembali ke dalam blok do-while

    }
    
	while(ulang == 'y' || ulang == 'Y'); 

 
   }
   
 
