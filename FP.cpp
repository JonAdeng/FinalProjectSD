#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

//Struct
struct TokoPerabot{
    string Pelanggan;
    string Pesanan;
    

};


int main(){
    int interface;
    string exit;
    bool exiting = false;

    do{
        system("clear");
        cout << "Toko Inventaris Kantor"<<endl;
        cout << "1. List Barang Toko"<<endl;
        cout << "2. Pesan Barang"<<endl;
        cout << "3. Lihat Pesanan"<<endl;
        cout << "4. Antrian Pesanan"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Pilih menu (1-5): ";
        cin >> interface;
        
        switch (interface)
        {
        case 1:
            ListBarangToko();
            break;
        case 2:
            PesanBarang():
            break;
        case 3;
            LihatPesanan();
        case 4;
            AntrianPesanan();
        case 5;
            goto keluar;
        default:
            cout << "Menu yang ada pilih tidak tersedia"<<endl;
            break;
        }
        cout << endl;
        cout << "Apakah anda ingin keluar? [y/n] :  ";
        cin >> exit

        exiting = exit == "y" ? true : false;
    } while (!exiting);
    {
        return 0;   
    }
    
}