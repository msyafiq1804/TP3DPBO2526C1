class TenagaMedis:
    def __init__(self, id_staf: str, nama: str, gaji_pokok: float):
        self._id_staf = id_staf
        self._nama = nama
        self._gaji_pokok = gaji_pokok

    @property
    def id_staf(self) -> str:
        return self._id_staf

    @property
    def nama(self) -> str:
        return self._nama

    @property
    def gaji_pokok(self) -> float:
        return self._gaji_pokok

    @id_staf.setter
    def id_staf(self, value: str):
        self._id_staf = value

    @nama.setter
    def nama(self, value: str):
        self._nama = value

    @gaji_pokok.setter
    def gaji_pokok(self, value: float):
        self._gaji_pokok = value

    def tampilkan_info(self):
        print(f"ID: {self._id_staf} | Nama: {self._nama} | Gaji Pokok: Rp {self._gaji_pokok:.0f}", end="")