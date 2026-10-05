from tenaga_medis import TenagaMedis

class Perawat(TenagaMedis):
    def __init__(self, id_staf: str, nama: str, gaji_pokok: float, shift_kerja: str):
        super().__init__(id_staf, nama, gaji_pokok)
        self._shift_kerja = shift_kerja

    @property
    def shift_kerja(self) -> str:
        return self._shift_kerja

    @shift_kerja.setter
    def shift_kerja(self, value: str):
        self._shift_kerja = value

    def tampilkan_info(self):
        super().tampilkan_info()
        print(f" | Shift Kerja: {self._shift_kerja} [Peran: Perawat]")