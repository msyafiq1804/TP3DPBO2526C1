from tenaga_medis import TenagaMedis

class Dokter(TenagaMedis):
    def __init__(self, id_staf: str, nama: str, gaji_pokok: float, spesialisasi: str):
        super().__init__(id_staf, nama, gaji_pokok)
        self._spesialisasi = spesialisasi

    @property
    def spesialisasi(self) -> str:
        return self._spesialisasi

    @spesialisasi.setter
    def spesialisasi(self, value: str):
        self._spesialisasi = value

    def tampilkan_info(self):
        super().tampilkan_info()
        print(f" | Spesialisasi: {self._spesialisasi} [Peran: Dokter]")