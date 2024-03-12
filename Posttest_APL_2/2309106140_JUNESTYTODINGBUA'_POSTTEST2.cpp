#include <iostream>
using namespace std;

int main() {
    string bunga[10];
    int harga[10];
    int login = 0;

    while (login < 3) { 
        cout << " (Masukkan Nama): ";
        string nama_user;
        cin >> nama_user;
        cout << "(Masukkan Nim): ";
        int nim_user;
        cin >> nim_user;

        if (nama_user == "Junesty" && nim_user == 140) { 
            cout << "Login berhasil!\n";
            break; 
        } else {
            cout << "Login gagal. Silakan coba lagi.\n";
            login++;
            if (login >= 3) {
                cout << "Anda telah mencapai batas maksimum percobaan login. Program berhenti.\n";
                return 0;
            }
        }
    }

    int pilihan;
    while (true) { 
       
        cout << "\nSelamat Datang di Toko Bunga!\n";
        cout << "1. Tambah Bunga\n";
        cout << "2. Hapus Bunga\n";
        cout << "3. Ubah Bunga\n";
        cout << "4. Lihat Jenis Bunga yang Tersedia\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";

        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan Nama Bunga: ";
                cin >> bunga[0];
                cout << "Masukkan Harga Bunga: ";
                cin >> harga[0];
                cout << "Bunga Berhasil Ditambahkan!\n";
                break;

            case 2:
                cout << "Masukkan Nama Bunga Yang Ingin dihapus: ";
                cin >> bunga[0];
                cout << "Masukkan Harga Bunga Yang Ingin dihapus: ";
                cin >> harga[0];
                cout << "Bunga Berhasil dihapus!\n";
                break;

            case 3:
                cout << "Masukkan Nama Bunga Yang Ingin diubah: ";
                cin >> bunga[0];
                cout << "Masukkan Harga Bunga Yang Ingin diubah: ";
                cin >> harga[0];
                cout << "Masukkan Nama Bunga Baru: ";
                cin >> bunga[0];
                cout << "Masukkan Harga Bunga Baru: ";
                cin >> harga[0];
                cout << "Bunga Berhasil Diubah!\n";
                break;

            case 4:
                for (int i = 0; i < 10; i++) {
                    cout << "Nama Bunga: " << bunga[i] << "\n";
                    cout << "Harga Bunga: " << harga[i] << "\n";
                }
                break;

            case 5:
                cout << "Sampai Jumpa!\n";
                return 0; 
                break;

            default:
                cout << "Pilihan tidak valid!\n";
                break;
        }
    }

    return 0;
}
