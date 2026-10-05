# JANJI
Saya Muhammad Syafiq A dengan NIM 2500254 mengerjakan TP 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin


# DIAGRAM 
<img width="1214" height="1176" alt="tp3desain drawio" src="https://github.com/user-attachments/assets/ea38556e-95eb-4ab6-ab5b-64fda5af1074" />

## IMPLEMENTASI KONSEP
1. Inheritance & Hierarchical Inheritance: Kelas TenagaMedis bertindak sebagai kelas induk tunggal yang sifat dasarnya (seperti ID, Nama, Gaji) diwariskan secara     bersamaan kepada dua kelas anak, yaitu Dokter dan Perawat.
2. Composition: Kelas RumahSakit bertindak sebagai wadah atau pemilik utama yang secara langsung menyimpan dan mengelola komponen objek staf medis di dalam sistemnya.
3. Array of Object: Diimplementasikan pada kelas RumahSakit menggunakan struktur koleksi data (vector di C++, List di Java, dan list [] di Python) pada atribut daftarDokter dan daftarPerawat untuk menampung banyak objek staf sekaligus.
4. Polymorphism: Penerapan Method Overriding di mana kelas anak mengubah atau memperluas fungsi tampilkanInfo() milik kelas induk agar bisa mencetak data spesifik mereka sendiri (spesialisasi untuk dokter dan shift untuk perawat).

## PENJELASAN ATRIBUT DAN METHOD SETIAP CLASS
1. Class TenagaMedis (Kelas Induk / Parent Class)
Kelas TenagaMedis berperan sebagai kelas induk yang menjadi fondasi dasar bagi entitas staf medis lainnya. Kelas ini menyimpan data umum yang pasti dimiliki oleh semua staf, sehingga data tersebut tidak perlu ditulis berulang kali pada kelas lain. Agar data ini dapat diturunkan dan diakses langsung oleh kelas anak-anaknya, atribut diatur menggunakan hak akses protected.
Atribut:
id (String): Menyimpan nomor identitas unik pegawai (protected).
nama (String): Menyimpan nama lengkap staf medis (protected).
gajiPokok (Double): Menyimpan besaran gaji dasar staf (protected).
Method:
Constructor: Digunakan untuk memberikan nilai awal pada id, nama, dan gajiPokok saat objek staf dibuat.
Getter & Setter: Rangkaian fungsi untuk membaca dan mengubah nilai atribut secara aman dari luar kelas.
tampilkanInfo(): Berfungsi mencetak teks berisi ID, Nama, dan Gaji Pokok ke layar.

2. Class Dokter (Kelas Anak / Child Class)
Kelas Dokter adalah kelas anak yang mewarisi secara langsung seluruh karakteristik dari TenagaMedis. Melalui pewarisan ini, objek dokter secara otomatis memiliki atribut ID, nama, dan gaji pokok, namun dengan tambahan atribut khusus untuk menyimpan bidang keahliannya. Kelas ini juga menimpa (override) metode bawaan induknya agar cetakan informasinya lebih spesifik.
Atribut:
spesialisasi (String): Menyimpan bidang keahlian spesifik dokter, seperti "Spesialis Anak" (private).
Method:
Constructor: Menerima data awal staf, meneruskan parameter dasar ke constructor TenagaMedis, lalu mengisi atribut spesialisasi.
Getter & Setter: Fungsi getSpesialisasi() dan setSpesialisasi() untuk mengambil atau memodifikasi data keahlian.
tampilkanInfo(): Melakukan override fungsi dari induknya agar fungsi ini ikut menambahkan cetakan informasi spesialisasi di akhir baris output.

3. Class Perawat (Kelas Anak / Child Class)
Sama halnya dengan kelas dokter, kelas Perawat bertindak sebagai kelas anak yang diturunkan dari TenagaMedis. Kelas ini mewarisi atribut umum staf medis namun menambahkan atribut eksklusif miliknya sendiri yang berkaitan dengan jadwal operasional. Metode tampilannya juga disesuaikan untuk memunculkan informasi spesifik tersebut.
Atribut:
shiftKerja (String): Menyimpan jadwal operasional perawat, seperti "Pagi" atau "Malam" (private).
Method:
Constructor: Menerima data awal, meneruskan parameter dasar ke constructor TenagaMedis, lalu mengisi nilai shiftKerja.
Getter & Setter: Fungsi getShiftKerja() dan setShiftKerja() untuk memanipulasi data jadwal shift.
tampilkanInfo(): Melakukan override fungsi dari induknya agar ikut mencetak informasi shift kerja perawat di akhir baris output.

4. Class RumahSakit (Kelas Wadah / Composite Class)
Kelas RumahSakit bertindak sebagai kelas wadah (composite) yang mewakili sistem operasional manajemen utama dalam program. Kelas ini menerapkan konsep Array of Objects dengan memanfaatkan struktur data (seperti list atau vector) untuk menampung, mengelola, dan menampilkan seluruh kumpulan objek Dokter dan Perawat yang bekerja di rumah sakit tersebut.
Atribut:
namaRumahSakit (String): Menyimpan nama institusi rumah sakit (private).
daftarDokter (Array/Vector/List of Dokter): Struktur data koleksi yang bertugas menampung banyak objek dokter sekaligus di dalam memori (private).
daftarPerawat (Array/Vector/List of Perawat): Struktur data koleksi yang bertugas menampung banyak objek perawat sekaligus di dalam memori (private).
Method:
Constructor & Getter/Setter: Untuk inisialisasi dan modifikasi nama rumah sakit.
tambahDokter(): Menerima objek dokter baru dan memasukkannya ke dalam atribut koleksi daftarDokter.
tambahPerawat(): Menerima objek perawat baru dan memasukkannya ke dalam atribut koleksi daftarPerawat.
tampilkanSemuaStaf(): Melakukan perulangan (looping) pada seluruh isi daftarDokter dan daftarPerawat, lalu memanggil secara otomatis method tampilkanInfo() milik setiap objek di dalamnya.

## ALUR PROGRAM 
1. Inisialisasi Sistem: Program dimulai (pada fungsi main) dengan membuat satu objek dari kelas RumahSakit yang diberi nama "RS Harapan Sehat" sebagai wadah utama.
2. Pengecekan Status Awal: Program memanggil fungsi tampilkanSemuaStaf() untuk mencetak keadaan awal ke layar, membuktikan bahwa daftar dokter dan perawat di dalam sistem masih kosong.
3. Penambahan Data Pertama: Program membuat dan memasukkan satu objek Dokter (dr. Andi Setiawan) dan satu objek Perawat (Zahra Cahya) ke dalam array of objects milik rumah sakit menggunakan fungsi penambahan yang telah disediakan.
4. Cetak Status Sementara: Program kembali memanggil fungsi tampilkanSemuaStaf() untuk memperlihatkan bahwa kedua data staf yang baru saja dimasukkan sudah berhasil tersimpan di dalam sistem.
5.Penambahan Data Lanjutan: Program mensimulasikan penambahan data lebih lanjut dengan memasukkan lagi satu objek Dokter baru (dr. Wowo Dodo) dan satu objek Perawat baru (Priyanka) ke dalam sistem.
6.Cetak Status Akhir: Program memanggil fungsi tampilkanSemuaStaf() untuk yang terakhir kalinya guna mencetak keseluruhan daftar staf yang kini berisi dua dokter dan dua perawat secara berurutan dan rapi, setelah itu program selesai dieksekusi.

## DOKUMENTASI 

<img width="1258" height="837" alt="cpp" src="https://github.com/user-attachments/assets/f72892d2-37e4-4513-9f0a-82650f756b88" />
<img width="1208" height="882" alt="hasil run python" src="https://github.com/user-attachments/assets/a711fc0f-d866-470f-8149-2a23535568aa" />
<img width="1202" height="876" alt="java" src="https://github.com/user-attachments/assets/d6773cd9-d7e5-49dc-bf2e-23bc137dd67c" />



