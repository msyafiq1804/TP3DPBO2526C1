from rumah_sakit import RumahSakit
from dokter import Dokter
from perawat import Perawat

def main():
    rs = RumahSakit("RS Harapan Sehat")

    print("\n>>> STATUS: DATA AWAL (KOSONG) <<<")
    rs.tampilkan_semua_staf()

    rs.tambah_dokter(Dokter("DOC01", "dr. Andi Setiawan", 15000000, "Spesialis Jantung"))
    rs.tambah_perawat(Perawat("NRS01", "Zahra Cahya", 6000000, "Pagi"))

    print(">>> STATUS: SETELAH PENAMBAHAN AWAL <<<")
    rs.tampilkan_semua_staf()

    rs.tambah_dokter(Dokter("DOC02", "dr. Wowo Dodo", 18000000, "Spesialis Anak"))
    rs.tambah_perawat(Perawat("NRS02", "Priyanka", 6500000, "Malam"))

    print(">>> STATUS: SETELAH PENAMBAHAN LANJUTAN <<<")
    rs.tampilkan_semua_staf()

if __name__ == "__main__":
    main()