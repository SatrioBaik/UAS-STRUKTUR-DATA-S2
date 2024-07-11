#include <iostream>
#include <string>
using namespace std;

// Deklarasi struktur Buku
struct Buku
{
    string judul;
    string penulis;
    int tahunTerbit;
    double harga;
};

// Deklarasi fungsi
void menu(Buku[], int);
void tampilkanDaftarBuku(Buku[], int);
void cariBuku(Buku[], int, string);

int main()
{
    const int MAX_BUKU = 5; // Jumlah maksimum buku dalam perpustakaan
    Buku perpustakaan[MAX_BUKU] = {
        {"Buku A", "Penulis A", 2020, 10000},
        {"Buku B", "Penulis B", 2021, 20000},
        {"Buku C", "Penulis C", 2022, 30000},
        {"Buku D", "Penulis D", 2023, 40000},
        {"Buku E", "Penulis E", 2024, 50000}};

    menu(perpustakaan, MAX_BUKU);

    return 0;
}

void menu(Buku buku[], int jumlahBuku)
{
    int pilihan;
    string judulCari;

    do
    {
        cout << "~~~~~~~~~~~~~ MENU ~~~~~~~~~~~~~" << endl;
        cout << "1. Daftar Buku" << endl;
        cout << "2. Cari Buku berdasarkan Judul" << endl;
        cout << "3. Jumlah Total Buku" << endl;
        cout << "4. Keluar" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Pilih Menu (1-4): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            tampilkanDaftarBuku(buku, jumlahBuku);
            break;
        case 2:
            cout << "Masukkan judul buku yang ingin dicari: ";
            cin.ignore();
            getline(cin, judulCari);
            cariBuku(buku, jumlahBuku, judulCari);
            break;
        case 3:
            cout << "Jumlah total buku dalam perpustakaan: " << jumlahBuku << endl;
            cout << "Tekan Enter untuk kembali ke menu...";
            cin.get();
            cin.get();
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            break;
        case 4:
            cout << "Terima kasih telah menggunakan aplikasi perpustakaan digital." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan pilih kembali." << endl;
            break;
        }
    } while (pilihan != 4);
}

void tampilkanDaftarBuku(Buku buku[], int jumlahBuku)
{
    cout << "===== DAFTAR BUKU =====" << endl;
    for (int i = 0; i < jumlahBuku; ++i)
    {
        cout << "Buku ke-" << i + 1 << endl;
        cout << "Judul   : " << buku[i].judul << endl;
        cout << "Penulis : " << buku[i].penulis << endl;
        cout << "Tahun   : " << buku[i].tahunTerbit << endl;
        cout << "Harga   : Rp " << buku[i].harga << endl;
        cout << "-----------------------" << endl;
    }

    // fungsi enter untuk kembali ke menu
    cout << "Tekan Enter untuk kembali ke menu...";
    cin.get();
    cin.get();
    cout << endl;
    cout << endl;
    cout << endl;
}

void cariBuku(Buku buku[], int jumlahBuku, string judulCari)
{
    bool ditemukan = false;

    for (int i = 0; i < jumlahBuku; ++i)
    {
        if (buku[i].judul == judulCari)
        {
            cout << "Buku ditemukan:" << endl;
            cout << "Judul   : " << buku[i].judul << endl;
            cout << "Penulis : " << buku[i].penulis << endl;
            cout << "Tahun   : " << buku[i].tahunTerbit << endl;
            cout << "Harga   : Rp " << buku[i].harga << endl;
            ditemukan = true;

            // fungsi enter untuk kembali ke menu
            cout << "Tekan Enter untuk kembali ke menu...";
            cin.get();
            cout << endl;
            cout << endl;
            cout << endl;
            break;
        }
    }

    if (!ditemukan)
    {
        cout << "Buku dengan judul '" << judulCari << "' tidak ditemukan." << endl;
    }
}
