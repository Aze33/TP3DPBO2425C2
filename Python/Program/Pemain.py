# File: Pemain.py
from AnggotaTim import AnggotaTim

class Pemain(AnggotaTim):
    def __init__(self, id_anggota="", nama="", nickname="", role="", peringkat="", jumlah_menang=0):
        super().__init__(id_anggota, nama, nickname)
        self._role = role
        self._peringkat = peringkat
        self._jumlah_menang = jumlah_menang
            
    def get_role(self): return self._role
    def get_peringkat(self): return self._peringkat
    def get_jumlah_menang(self): return self._jumlah_menang