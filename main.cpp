#include <iostream>
using namespace std;

struct Buku
{
    string judul;
    string penulis;
    int tahunTerbit;
    double harga;
};

void menu();
void dataBuku();

int main()
{
    menu();
    return 0;
}

void menu()
{
    cout << "~~~~~~~~~~~~~ MENU ~~~~~~~~~~~~~" << endl;
    cout << "1. Cari Buku" << endl;
    cout << "2. Daftar Buku" << endl;
    cout << "3. Peminjaman Buku" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "Pilih Menu : ";
    int pilihan;
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << "Cari Buku" << endl;
        break;
    case 2:
        dataBuku();
        break;
    case 3:
        cout << "Peminjaman Buku" << endl;
        break;
    }
}

void dataBuku()
{
    Buku buku[5];

    buku[0].judul = "Buku A";
    buku[0].penulis = "Penulis A";
    buku[0].tahunTerbit = 2020;
    buku[0].harga = 10000;

    buku[1].judul = "Buku B";
    buku[1].penulis = "Penulis B";
    buku[1].tahunTerbit = 2021;
    buku[1].harga = 20000;

    buku[2].judul = "Buku C";
    buku[2].penulis = "Penulis C";
    buku[2].tahunTerbit = 2022;
    buku[2].harga = 30000;

    buku[3].judul = "Buku D";
    buku[3].penulis = "Penulis D";
    buku[3].tahunTerbit = 2023;
    buku[3].harga = 40000;

    buku[4].judul = "Buku E";
    buku[4].penulis = "Penulis E";
    buku[4].tahunTerbit = 2024;
    buku[4].harga = 50000;

    for (int i = 0; i < 5; i++)
    {
        cout << "Judul Buku : " << buku[i].judul << endl;
        cout << "Penulis : " << buku[i].penulis << endl;
        cout << "Tahun Terbit : " << buku[i].tahunTerbit << endl;
        cout << "Harga : " << buku[i].harga << endl;
        cout << "=============================" << endl;
    }

    cout << "Tekan apapun untuk kembali ke menu utama...";
    char kembali;
    cin >> kembali;
    menu();
}
