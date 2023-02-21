<?php
include "kelas.php";

//membuat variabel untuk data mahasiswa
$daftar_mahasiswa = new DaftarMahasiswa();

//melakukan tambah data
$daftar_mahasiswa->tambahMahasiswa("171879545", "Rasyid Andriansyah",  "Laki-laki", "UPI", "rasyid@upi.edu", "2101963", "Ilmu Komputer", "FPMIPA");
$daftar_mahasiswa->tambahMahasiswa("171884546", "Maikel Alexander", "Laki-laki", "UPI", "maikel@ui.edu", "2107895", "Sistem Informasi", "FPMIPA");

//menampilkan data 
$daftar_mahasiswa->tampilDaftarMahasiswa();
echo "<br>";

?>