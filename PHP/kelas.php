<?php
//deklarasi kelas human
class Human
{
   //private atribut
   private $NIK;
   private $nama;
   private $gender;

   //konstruktor
   public function __construct()
   {

   }
   //setter dan getter
   public function setNIK($NIK) {
      $this->NIK = $NIK;
   }

   public function setNama($nama) {
      $this->nama = $nama;
   }

   public function setGender($gender) {
      $this->gender = $gender;
   }
   public function getNIK() {
      return $this->NIK;
   }

   public function getNama() {
      return $this->nama;
   }

   public function getGender() {
      return $this->gender;
   }

   //destruktor
   public function __destruct()
   {

   }
}

//deklarasi kelas sivitas turunan human
class Sivitasakademik extends Human
{
   //private atribut
   private $asal;
   private $email;

   //konstruktor
   public function __construct()
   {

   }

   //setter dan getter
   public function setAsal($asal) {
      $this->asal = $asal;
   }

   public function setEmail($email) {
      $this->email = $email;
   }

   public function getAsal() {
      return $this->asal;
   }

   public function getEmail() {
      return $this->email;
   }

   //destruktor
   public function __destruct()
   {
      
   }
}

//deklarasi kelas mahasiswa turunan sivitas
class Mahasiswa extends Sivitasakademik
{
   //private atribut
   private $NIM;
   private $prodi;
   private $fakultas;

   //konstruktor
   public function __construct()
   {

   }

   //setter dan getter
   public function setNIM($NIM) {
      $this->NIM = $NIM;
   }

   public function setProdi($prodi) {
      $this->prodi = $prodi;
   }

   public function setFakultas($fakultas) {
      $this->fakultas = $fakultas;
   }

   public function getNIM() {
      return $this->NIM;
   }

   public function getProdi() {
      return $this->prodi;
   }

   public function getFakultas() {
      return $this->fakultas;
   }

   //destruktor
   public function __destruct()
   {
      
   }
}

class DaftarMahasiswa{
   private $mahasiswa = array();
   //fungsi tambah data mahasiswa
   public function tambahMahasiswa($NIK, $nama, $gender, $asal, $email, $NIM, $prodi, $fakultas) {
      $mahasiswa_baru = new Mahasiswa($NIK, $nama, $gender, $asal, $email, $NIM, $prodi, $fakultas);
      //mengset atribut
      $mahasiswa_baru->setNIK($NIK);
      $mahasiswa_baru->setNama($nama);
      $mahasiswa_baru->setGender($gender);
      $mahasiswa_baru->setAsal($asal);
      $mahasiswa_baru->setEmail($email);
      $mahasiswa_baru->setNIM($NIM);
      $mahasiswa_baru->setProdi($prodi);
      $mahasiswa_baru->setFakultas($fakultas);
      $this->mahasiswa[] = $mahasiswa_baru;
   }

   //fungsi menampilkan daftar mahasiswa
   public function tampilDaftarMahasiswa() {
      echo "Daftar Mahasiswa: " . "<br>";
      foreach ($this->mahasiswa as $mahasiswa) {
         echo "===========================================" . "<br>";
         echo "NIK: " . $mahasiswa->getNIK() . "<br>";
         echo "Nama: " . $mahasiswa->getNama() . "<br>";
         echo "Jenis Kelamin: " . $mahasiswa->getGender() . "<br>";
         echo "Asal Universitas: " . $mahasiswa->getAsal() . "<br>";
         echo "Email: " . $mahasiswa->getEmail() . "<br>";
         echo "NIM: " . $mahasiswa->getNIM() . "<br>";
         echo "Program Studi: " . $mahasiswa->getProdi() . "<br>";
         echo "Fakultas: " . $mahasiswa->getFakultas() . "<br>";
         echo "===========================================" . "<br>";
         echo "<br>";
         }
      }
}

?>