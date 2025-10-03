# File: Pelatih.py
from AnggotaTim import AnggotaTim

class Pelatih(AnggotaTim):
    def __init__(self, id_anggota="", nama="", nickname="", spesialis="", lisensi_pelatih=""):
        super().__init__(id_anggota, nama, nickname)
        self._spesialis = spesialis
        self._lisensi_pelatih = lisensi_pelatih
        
    def get_spesialis(self): return self._spesialis
    def get_lisensi_pelatih(self): return self._lisensi_pelatih