// import library
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
// standar namespace
using namespace std;

#include "kelas.cpp"

int main()
{
    list<Mahasiswa> llist; // linked list library
    int n = 0;             // variabel untuk pilih menu
    int i = 0;
    // atribut
    //variabel atribut
    string NIK;
    string nama;
    string gender;
    string asal;
    string email;
    string NIM;
    string prodi; 
    string fakultas;
    do
    {
        Mahasiswa temp; // tampungan
        // tampilan menu
        cout << "-----------------" << endl;
        cout << "Masukan Perintah!" << endl;
        cout << "-----------------" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Keluar" << '\n'
             << endl;
        cout << "Pilih Menu: "<< endl; 
        cin >> n;
        if (n == 1) // jika masukan == 1 maka tambah data mahasiswa
        {
            cout << "Masukan NIK:" << endl;
            cin >> NIK;
            cout << "Masukan Nama:" << endl;
            cin >> nama;
            cout << "Masukan Jenis Kelamin:" << endl;
            cin >> gender;
            cout << "Masukan Asal Universitas:" << endl;
            cin >> asal;
            cout << "Masukan Email Edu:" << endl;
            cin >> email;
            cout << "Masukan NIM:" << endl;
            cin >> NIM;
            cout << "Masukan Program Studi:" << endl;
            cin >> prodi;
            cout << "Masukkan Fakultas:" << endl;
            cin >> fakultas;

            // mengset atribut
            temp.setNIK(NIK);
            temp.setNama(nama);
            temp.setGender(gender);
            temp.setAsal(asal);
            temp.setEmail(email);
            temp.setNIM(NIM);
            temp.setProdi(prodi);
            temp.setFakultas(fakultas);

            llist.push_back(temp);
        }
        else if (n == 2) // jika masukan == 4 maka akan menampilkan daftar mahasiswa
        {

            cout << "Daftar Mahasiswa:" << endl;
            for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                cout << "========================"<< endl;
                cout << "NIK: " << it->getNIK() << endl;
                cout << "Nama: " << it->getNama() << endl;
                cout << "Jenis Kelamin: " << it->getGender() << endl;
                cout << "Asal Universitas: " << it->getAsal() << endl;
                cout << "Email: " << it->getEmail() << endl;
                cout << "NIM: " << it->getNIM() << endl;
                cout << "Program Studi: " << it->getProdi() << endl;
                cout << "Fakultas: " << it->getFakultas() << endl;
                cout << "========================\n"<< endl;
            }
        }
        else if (n > 3) // jika masukan tidak sesuai dengan menu yg disediakan maka invalid
        {
            cout << "Perintah Tidak Valid!" << endl;
        }
    } while (n != 3); // menu exit, program akan berhenti
    cout << "Terima Kasih, Sampai jumpa kembali" << endl;

    return 0;
}