#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int pilihan, bangunDatar, bangunRuang;
    double sisi, panjang, lebar, alas, tinggi;

    do {
        system("cls");

        cout << "Menghitung Bangun Datar dan Ruang :\n";
        cout << "===================================\n";
        cout << "1. Bangun Datar\n";
        cout << "2. Bangun Ruang\n";
        cout << "3. Keluar\n";
        cout << "Pilihan : "; cin >> pilihan;

        switch (pilihan) {
            case 1:
                do {
                    system("cls");

                    cout << "Menghitung Bangun Datar\n";
                    cout << "-----------------------\n";
                    cout << "1. Persegi\n";
                    cout << "2. Persegi panjang\n";
                    cout << "3. Segitiga\n";
                    cout << "4. Lingkaran\n";
                    cout << "5. Kembali ke Menu Awal\n";
                    cout << "Pilih : "; cin >> bangunDatar;

                    switch (bangunDatar) {
                        case 1:
                            cout << "\nPersegi :\n";
                            cout << "---------\n";
                            cout << "input sisi   = "; cin >> sisi;
                            cout << "Luas         = " << (sisi * sisi) << "\n";
                            cout << "Keliling     = " << (4 * sisi) << "\n";
                            break;
                        case 2:
                            cout << "\nPersegi panjang :\n";
                            cout << "-----------------\n";
                            cout << "input panjang = "; cin >> panjang;
                            cout << "input lebar   = "; cin >> lebar;
                            cout << "Luas          = " << (panjang * lebar) << "\n";
                            cout << "Keliling      = " << (2 * (panjang + lebar)) << "\n";
                            break;
                        case 3:
                            cout << "\nSegitiga :\n";
                            cout << "----------\n";
                            cout << "input alas   = "; cin >> alas;
                            cout << "input tinggi = "; cin >> tinggi;
                            cout << "Luas         = " << (0.5 * alas * tinggi) << "\n";
                            break;
                        case 4:
                            cout << "\nLingkaran :\n";
                            cout << "-----------\n";
                            cout << "input r      = "; cin >> sisi;
                            cout << "Luas         = " << (3.14 * sisi * sisi) << "\n";
                            cout << "Keliling     = " << (2 * 3.14 * sisi) << "\n";
                            break;
                        case 5:
                            cout << "Kembali ke Menu Awal\n";
                            break;
                        default:
                            cout << "-----------------------\n";
                            cout << "Pilihan tidak ada di menu!\n";
                            break;
                    }

                    if (bangunDatar != 5) {
                        cout << "\ntekan sembarang tombol untuk mengulangi....\n";
                        getch();
                    }
                } while (bangunDatar != 5);
                break;

            case 2:
                do {
                    system("cls");

                    cout << "Menghitung Bangun Ruang\n";
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~\n";
                    cout << "1. Kubus\n";
                    cout << "2. Balok\n";
                    cout << "3. Tabung\n";
                    cout << "4. Bola\n";
                    cout << "5. Kembali ke Menu Awal\n";
                    cout << "Pilih : "; cin >> bangunRuang;

                    switch (bangunRuang) {
                        case 1:
                            cout << "\nKubus :\n";
                            cout << "~~~~~~~\n";
                            cout << "input sisi   = "; cin >> sisi;
                            cout << "Luas         = " << (6 * (sisi * sisi)) << "\n";
                            cout << "Volume       = " << (sisi * sisi * sisi) << "\n";
                            break;
                        case 2:
                            cout << "\nBalok :\n";
                            cout << "~~~~~~~\n";
                            cout << "input panjang = "; cin >> panjang; 
                            cout << "input lebar   = "; cin >> lebar;
                            cout << "input tinggi  = "; cin >> tinggi;
                            cout << "Luas          = " << (2 * (panjang * lebar + panjang * tinggi + lebar * tinggi)) << "\n";
                            cout << "Volume        = " << (panjang * lebar * tinggi) << "\n";
                            break;
                        case 3:
                            cout << "\nTabung :\n";
                            cout << "~~~~~~~~\n";
                            cout << "input r      = "; cin >> sisi;
                            cout << "input tinggi = "; cin >> tinggi;
                            cout << "Luas         = " << (2 * 3.14 * sisi * (sisi + tinggi)) << "\n";
                            cout << "Volume       = " << (3.14 * sisi * sisi * tinggi) << "\n";
                            break;
                        case 4:
                            cout << "\nBola :\n";
                            cout << "~~~~~~\n";
                            cout << "input r      = "; cin >> sisi;
                            cout << "Luas         = " << (4 * 3.14 * sisi * sisi) << "\n";
                            cout << "Volume       = " << ((4.0 / 3.0) * 3.14 * sisi * sisi * sisi) << "\n";
                            break;
                        case 5:
                            cout << "Kembali ke Menu Awal\n";
                            break;
                        default:
                            cout << "~~~~~~~~~~~~~~~~~~~~~~~\n";
                            cout << "Pilihan tidak ada di menu!\n";
                            break;
                    }

                    if (bangunRuang != 5) {
                        cout << "\ntekan sembarang tombol untuk mengulangi....\n";
                        getch();
                    }
                } while (bangunRuang != 5);
                break;

            case 3:
                cout << "\nTerimakasih....\n";
                break;

            default:
                cout << "===================================\n";
                cout << "Pilihan tidak ada di menu!\n";
                break;
        }

        if (pilihan != 3) {
            cout << "\ntekan sembarang tombol untuk mengulangi....\n";
            getch();
        }

    } while (pilihan != 3);

    return 0;
}