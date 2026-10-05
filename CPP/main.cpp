#include <iostream>
#include "RumahSakit.cpp"

using namespace std;

int main() {
    RumahSakit rs("RS Harapan Sehat");

    cout << "\n>>> STATUS: DATA AWAL (KOSONG) <<<" << endl;
    rs.tampilkanSemuaStaf();

    rs.tambahDokter(Dokter("DOC01", "dr. Andi Setiawan", 15000000, "Spesialis Jantung"));
    rs.tambahPerawat(Perawat("NRS01", "Zahra Cahya", 6000000, "Pagi"));

    cout << ">>> STATUS: SETELAH PENAMBAHAN AWAL <<<" << endl;
    rs.tampilkanSemuaStaf();

    rs.tambahDokter(Dokter("DOC02", "dr. Wowo Dodo", 18000000, "Spesialis Anak"));
    rs.tambahPerawat(Perawat("NRS02", "Priyanka", 6500000, "Malam"));

    cout << ">>> STATUS: SETELAH PENAMBAHAN LANJUTAN <<<" << endl;
    rs.tampilkanSemuaStaf();

    return 0;
}