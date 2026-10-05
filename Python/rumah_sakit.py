from dokter import Dokter
from perawat import Perawat

class RumahSakit:
    def __init__(self, nama_rumah_sakit: str):
        self._nama_rumah_sakit = nama_rumah_sakit
        self._daftar_dokter = []
        self._daftar_perawat = []

    @property
    def nama_rumah_sakit(self) -> str:
        return self._nama_rumah_sakit

    @nama_rumah_sakit.setter
    def nama_rumah_sakit(self, value: str):
        self._nama_rumah_sakit = value

    def tambah_dokter(self, dokter: Dokter):
        self._daftar_dokter.append(dokter)

    def tambah_perawat(self, perawat: Perawat):
        self._daftar_perawat.append(perawat)

    def tampilkan_semua_staf(self):
        print("==================================================================================")
        print(f"                       SISTEM MANAJEMEN: {self._nama_rumah_sakit}")
        print("==================================================================================")
        
        print("\n[ DAFTAR DOKTER ]")
        print("----------------------------------------------------------------------------------")
        if not self._daftar_dokter:
            print("  (Belum ada data dokter)")
        else:
            for d in self._daftar_dokter:
                print("  ", end="")
                d.tampilkan_info()

        print("\n[ DAFTAR PERAWAT ]")
        print("----------------------------------------------------------------------------------")
        if not self._daftar_perawat:
            print("  (Belum ada data perawat)")
        else:
            for p in self._daftar_perawat:
                print("  ", end="")
                p.tampilkan_info()
        print("==================================================================================\n")