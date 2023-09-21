#include <iostream>

using namespace std;

int main (){

    string nama, Nopresensi, NIM, nohp, alamat, prodi, kelas;
    int umur;
    float bb;
    cout << "Silahkan isi data anda dengan benar\n\n";

    cout << "Nama\t\t\t: ";
    getline(cin, nama);

    cout << "No Presensi\t\t: ";
    getline(cin, Nopresensi);

    cout << "NIM\t\t\t: ";
    getline (cin, NIM);

    cout << "No HP\t\t\t: ";
    getline (cin, nohp);

    cout << "Alamat\t\t\t: ";
    getline (cin, alamat);

    cout << "Prodi\t\t\t: ";
    getline (cin, prodi);

    cout << "kelas\t\t\t: ";
    getline (cin, kelas);

    cout << "Umur\t\t\t: ";
    cin >> umur;

    cout << "Berat badan\t\t: ";
    cin >> bb;

    cout << "\n\nBerikut hasil input data anda\n\n";

    cout << "Nama\t\t\t: ";
    cout << nama << endl;

    cout << "No Presensi\t\t: ";
    cout << Nopresensi << endl;

    cout << "NIM\t\t\t: ";
    cout << NIM << endl;

    cout << "No HP\t\t\t: ";
    cout << nohp << endl;

    cout << "Alamat\t\t\t: ";
    cout << alamat << endl;

    cout << "Prodi\t\t\t: ";
    cout << prodi << endl;

    cout << "kelas\t\t\t: ";
    cout << kelas << endl;

    cout << "Umur\t\t\t: ";
    cout << umur << " tahun" << endl;
 
    cout << "Berat badan\t\t: ";
    cout << bb << " kg" <<endl;
}