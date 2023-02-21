# import library
from kelas import Mahasiswa

class Main:
    llist = []  # list
    while True:
        # tampilan menu
        print("-----------------")
        print("Masukan Perintah!")
        print("-----------------")
        print("1. Tambah Mahasiswa")
        print("2. Tampilkan Daftar Mahasiswa")
        print("3. Keluar\n")
        print("Pilih menu:")
        n = int(input())

        if n == 1:  # tambah data mahasiswa
            NIK = input("Masukan NIK:\n")
            nama = input("Masukan Nama:\n")
            gender = input("Masukan Jenis Kelamin:\n")
            asal = input("Masukan Asal Universitas:\n")
            email = input("Masukan Email:\n")
            NIM = input("Masukan NIM\n")
            prodi = input("Masukan Program Studi\n")
            fakultas = input("Masukkan Fakultas\n")

            #mengset atribut
            temp = Mahasiswa()
            temp.setNIK(NIK)
            temp.setNama(nama)
            temp.setGender(gender)
            temp.setAsal(asal)
            temp.setEmail(email)
            temp.setNIM(NIM)
            temp.setProdi(prodi)
            temp.setFakultas(fakultas)

            llist.append(temp)

        
        elif n == 2:  # Menampilkan daftar mahasiswa
            print("Daftar Mahasiswa:")
            
            for i, data in enumerate(llist):
                print("========================")
                print("NIK: " f"{data.getNIK()}")
                print("Nama: " f"{data.getNama()}")
                print("Jenis Kelamin: " f"{data.getGender()}")
                print("Asal Universitas: " f"{data.getAsal()}")
                print("Email: " f"{data.getEmail()}")
                print("NIM: " f"{data.getNIM()}")
                print("Program Studi: " f"{data.getProdi()}")
                print("Fakultas: " f"{data.getFakultas()}")
                print("========================\n")

        elif n == 3:  # keluar dari program
            print("Terima Kasih, Sampai jumpa kembali")
            break

        else:  # perintah tidak valid dengan menu
            print("Perintah tidak valid")
