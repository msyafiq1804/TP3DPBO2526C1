# JANJI
Saya Muhammad Syafiq A dengan NIM 2500254 mengerjakan TP 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin


# DIAGRAM 
<img width="1214" height="1176" alt="tp3desain drawio" src="https://github.com/user-attachments/assets/ea38556e-95eb-4ab6-ab5b-64fda5af1074" />

## IMPLEMENTASI KONSEP
1. Inheritance & Hierarchical Inheritance: Kelas TenagaMedis bertindak sebagai kelas induk tunggal yang sifat dasarnya (seperti ID, Nama, Gaji) diwariskan secara     bersamaan kepada dua kelas anak, yaitu Dokter dan Perawat.
2. Composition: Kelas RumahSakit bertindak sebagai wadah atau pemilik utama yang secara langsung menyimpan dan mengelola komponen objek staf medis di dalam sistemnya.
3. Array of Object: Diimplementasikan pada kelas RumahSakit menggunakan struktur koleksi data (vector di C++, List di Java, dan list [] di Python) pada atribut daftarDokter dan daftarPerawat untuk menampung banyak objek staf sekaligus.
4. Polymorphism: Penerapan Method Overriding di mana kelas anak mengubah atau memperluas fungsi tampilkanInfo() milik kelas induk agar bisa mencetak data spesifik mereka sendiri (spesialisasi untuk dokter dan shift untuk perawat).

## PENJELASAN CLASS
1. Class TenagaMedis
Kelas TenagaMedis berperan sebagai kelas induk (parent class) yang menjadi fondasi dasar bagi entitas staf medis lainnya. Kelas ini menyimpan atribut yang bersifat umum bagi semua staf, yaitu id sebagai identitas unik, nama, dan gajiPokok. Agar data ini dapat diturunkan dan diakses langsung oleh kelas anak-anaknya, atribut tersebut diatur menggunakan hak akses protected. Selain itu, kelas ini juga menyediakan metode dasar berupa getter dan setter untuk kebutuhan manipulasi data, serta sebuah metode tampilkanInfo() untuk mencetak informasi identitas dasar staf tersebut ke layar.
2. Class Dokter
Kelas Dokter adalah kelas anak (child class) yang mewarisi secara langsung seluruh karakteristik dari kelas TenagaMedis. Melalui pewarisan ini, objek dokter secara otomatis memiliki atribut ID, nama, dan gaji pokok, namun dengan tambahan sebuah atribut private khusus yaitu spesialisasi untuk menyimpan bidang keahliannya (misalnya Spesialis Anak). Kelas ini juga menimpa (override) metode tampilkanInfo() dari kelas induknya agar bisa mencetak informasi detail spesialisasi tersebut secara bersamaan di akhir baris output.
3. Class Perawat
Sama halnya dengan kelas dokter, kelas Perawat juga bertindak sebagai kelas anak yang diturunkan dari kelas induk TenagaMedis. Kelas ini mewarisi atribut umum staf medis namun menambahkan satu atribut private eksklusif miliknya sendiri, yaitu shiftKerja, yang berfungsi untuk menyimpan jadwal kerja operasional harian perawat (misalnya shift pagi atau malam). Metode tampilkanInfo() pada kelas ini juga di-override sehingga saat dipanggil, program akan ikut menampilkan informasi jadwal shift kerja milik perawat tersebut secara lengkap.
4. Class RumahSakit
Kelas RumahSakit bertindak sebagai kelas wadah (composite class) yang mewakili sistem operasional manajemen utama dalam program. Selain menyimpan identitas berupa namaRumahSakit, kelas ini menerapkan konsep Array of Objects dengan memanfaatkan struktur data seperti list atau vector untuk menampung kumpulan objek Dokter dan kumpulan objek Perawat. Untuk mendukung pengelolaan data, kelas ini dilengkapi dengan metode tambahDokter() dan tambahPerawat() untuk memasukkan data staf baru ke dalam memori, serta metode tampilkanSemuaStaf() untuk me-looping dan mencetak seluruh data staf yang sudah terdaftar di rumah sakit tersebut.

## ALUR PROGRAM 
1. Inisialisasi Sistem: Program dimulai (pada fungsi main) dengan membuat satu objek dari kelas RumahSakit yang diberi nama "RS Harapan Sehat" sebagai wadah utama.
2. Pengecekan Status Awal: Program memanggil fungsi tampilkanSemuaStaf() untuk mencetak keadaan awal ke layar, membuktikan bahwa daftar dokter dan perawat di dalam sistem masih kosong.
3. Penambahan Data Pertama: Program membuat dan memasukkan satu objek Dokter (dr. Andi Setiawan) dan satu objek Perawat (Zahra Cahya) ke dalam array of objects milik rumah sakit menggunakan fungsi penambahan yang telah disediakan.
4. Cetak Status Sementara: Program kembali memanggil fungsi tampilkanSemuaStaf() untuk memperlihatkan bahwa kedua data staf yang baru saja dimasukkan sudah berhasil tersimpan di dalam sistem.
5.Penambahan Data Lanjutan: Program mensimulasikan penambahan data lebih lanjut dengan memasukkan lagi satu objek Dokter baru (dr. Wowo Dodo) dan satu objek Perawat baru (Priyanka) ke dalam sistem.
6.Cetak Status Akhir: Program memanggil fungsi tampilkanSemuaStaf() untuk yang terakhir kalinya guna mencetak keseluruhan daftar staf yang kini berisi dua dokter dan dua perawat secara berurutan dan rapi, setelah itu program selesai dieksekusi.
