//Saya Rasyid Andriansyah NIM 2101963 mengerjakan Latihan 2 Praktikum mata kuliah DPBO 
//untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
//import library
import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

class Human{
    //private atribut
    private String NIK;
    private String nama;
    private String gender;
    
    //konstruktor
    public Human() {
        this.NIK = "";
        this.nama = "";
        this.gender= "";
    }

    public Human(String NIK, String nama, String gender) {
        this.NIK = NIK;
        this.nama = nama;
        this.gender = gender;
    }

    //setter dan getter
    public void setNIK(String NIK) {
        this.NIK = NIK;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getNIK() {
        return this.NIK;
    }

    public String getNama() {
        return this.nama;
    }

    public String getGender() {
        return this.gender;
    }

}

class Sivitasakademik extends Human// turunan dari Human
{
    //private atribut
    private String asal;
    private String email;

    //konstruktor
    public Sivitasakademik() {
        this.asal = "";
        this.email = "";
        
    }

    public Sivitasakademik(String asal, String email) {
        this.asal = asal;
        this.email = email;
    }

     //setter dan getter
    public void setAsal(String asal) {
        this.asal = asal;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getAsal() {
        return this.asal;
    }

    public String getEmail() {
        return this.email;
    }

}

class Mahasiswa extends Sivitasakademik//turunan dari Sivitas akademik
{
    //private atribut
    private String NIM;
    private String prodi;
    private String fakultas;

    //konstruktor
    public Mahasiswa() {
        this.NIM = "";
        this.prodi = "";
        this.fakultas = "";
    }


    public Mahasiswa(String NIM, String prodi, String fakultas) {
        this.NIM = NIM;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    //setter dan getter
    public void setNIM(String NIM) {
        this.NIM = NIM;
    }

    public void setProdi(String prodi) {
        this.prodi = prodi;
    }

    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    public String getNIM() {
        return this.NIM;
    }

    public String getProdi() {
        return this.prodi;
    }

    public String getFakultas() {
        return this.fakultas;
    }

}

class Main {
    public static void main(String[] args) {
        List<Mahasiswa> llist = new ArrayList<Mahasiswa>();//membuat list
        int n = 0;
        //variabel atribut
        String NIK;
        String nama;
        String gender;
        String asal;
        String email;
        String NIM;
        String prodi; 
        String fakultas;

        do {
        Mahasiswa temp = new Mahasiswa();
        //tampilan menu
        System.out.println("Masukan Perintah!");
        System.out.println("1. Tambah data");
        System.out.println("2. Tampil data");
        System.out.println("3. Keluar\n");
        //masukan
        Scanner input = new Scanner(System.in);
        n = input.nextInt();

        if (n == 1) // jika masukan == 1 maka tambah data mahasiswa 
        {
            System.out.println("Masukan NIK");
            NIK = input.next();
            System.out.println("Masukan Nama");
            nama = input.next();
            System.out.println("Masukan Jenis Kelamin");
            gender = input.next();
            System.out.println("Masukan Asal Universitas");
            asal = input.next();
            System.out.println("Masukan Email Edu");
            email = input.next();
            System.out.println("Masukan NIM");
            NIM = input.next();
            System.out.println("Masukan Program Studi");
            prodi = input.next();
            System.out.println("Masukkan Fakultas");
            fakultas = input.next();

            // mengset atribut
            temp.setNIK(NIK);
            temp.setNama(nama);
            temp.setGender(gender);
            temp.setAsal(asal);
            temp.setEmail(email);
            temp.setNIM(NIM);
            temp.setProdi(prodi);
            temp.setFakultas(fakultas);

            llist.add(temp);
        }else if (n == 2) // jika masukan == 2 maka akan menampilkan daftar mahasiswa
            {
                System.out.println("Daftar Mahasiswa:");
                
                for (Mahasiswa mhs : llist) {
                    System.out.println("NIK: " + mhs.getNIK());
                    System.out.println("Nama: " + mhs.getNama());
                    System.out.println("Jenis Kelamin: " + mhs.getGender());
                    System.out.println("Asal Universitas: " + mhs.getAsal());
                    System.out.println("Email: " + mhs.getEmail());
                    System.out.println("NIM: " + mhs.getNIM());
                    System.out.println("Program Studi: " + mhs.getProdi());
                    System.out.println("Fakultas: " + mhs.getFakultas() + "\n");
                }
            }else if(n > 3) // jika masukan tidak sesuai dengan menu yg disediakan maka invalid
            {
                System.out.println("Perintah Tidak Valid"); 
            }
            
        } while (n != 3); // menu exit, program akan berhenti
        System.out.println("Terima Kasih, Sampai jumpa kembali");
    }
}