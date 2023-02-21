// import library
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
// standar namespace
using namespace std;

// deklarasi kelas Human
class Human
{
    // private atribut
private:
    string NIK;
    string nama;
    string gender;

public:
    // konstruktor
    Human()
    {
        this->NIK = "";
        this->nama = "";
        this->gender = "";
    }

    // setter dan getter
    void setNIK(string NIK)
    {
        this->NIK = NIK;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setGender(string gender)
    {
        this->gender = gender;
    }

    string getNIK()
    {
        return this->NIK;
    }

    string getNama()
    {
        return this->nama;
    }

    string getGender()
    {
        return this->gender;
    }

    // destruktor
    ~Human()
    {
    }
};

// deklarasi kelas sivitas turunan human
class Sivitasakademik : public Human
{
    // private atribut
private:
    string asal;
    string email;

public:
    // konstruktor
    Sivitasakademik()
    {
        this->asal = "";
        this->email = "";
    }

    // setter dan getter
    void setAsal(string asal)
    {
        this->asal = asal;
    }

    void setEmail(string email)
    {
        this->email = email;
    }

    string getAsal()
    {
        return this->asal;
    }

    string getEmail()
    {
        return this->email;
    }

    // destruktor
    ~Sivitasakademik()
    {
    }
};

// deklarasi kelas mahasiswa turunan sivitas
class Mahasiswa : public Sivitasakademik
{
    // private atribut
private:
    string NIM;
    string prodi;
    string fakultas;

public:
    // konstruktor
    Mahasiswa()
    {
        this->NIM = "";
        this->prodi = "";
        this->fakultas = "";
    }

    // setter dan getter
    void setNIM(string NIM)
    {
        this->NIM = NIM;
    }

    void setProdi(string prodi)
    {
        this->prodi = prodi;
    }

    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }

    string getNIM()
    {
        return this->NIM;
    }

    string getProdi()
    {
        return this->prodi;
    }

    string getFakultas()
    {
        return this->fakultas;
    }

    // destruktor
    ~Mahasiswa()
    {
    }
};