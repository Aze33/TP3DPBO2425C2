# File: Manajer.py
from AnggotaTim import AnggotaTim

class Manajer(AnggotaTim):
    def __init__(self, id_anggota="", nama="", nickname="", divisi="", level_jabatan="", jumlah_menang=0):
        super().__init__(id_anggota, nama, nickname)
        self._divisi = divisi
        self._level_jabatan = level_jabatan
        self._jumlah_menang = jumlah_menang

    def get_divisi(self): return self._divisi
    def get_level_jabatan(self): return self._level_jabatan
    def get_jumlah_menang(self): return self._jumlah_menang