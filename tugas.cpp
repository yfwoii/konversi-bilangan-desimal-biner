#include <iostream>
#include <string>
using namespace std;

int main() {
    int decimalNumber;

    // Masukkan bilangan desimal dari pengguna
    cout << "Masukkan bilangan desimal: ";
    cin >> decimalNumber;

    // Handle kasus khusus bilangan desimal nol
    if (decimalNumber == 0) {
        cout << "Hasil konversi ke biner: 0" << endl;
        return 0;
    }

    // Buat string untuk menyimpan hasil biner
    string binary = "";

    // Konversi desimal ke biner dengan mengulanginya
    while (decimalNumber > 0) {
        // Ambil sisa pembagian (1 atau 0) dan tambahkan ke awal string
        binary = to_string(decimalNumber % 2) + binary;

        // Bagi bilangan desimal dengan 2 untuk melanjutkan proses
        decimalNumber /= 2;
    }

    // Tampilkan hasilnya
    cout << "Hasil konversi ke biner: " << binary << endl;

    return 0;
}