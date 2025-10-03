# File: AnggotaTim.py
from RiwayatTurnamen import RiwayatTurnamen

class AnggotaTim:
    def __init__(self, id_anggota="", nama="", nickname=""):
        self._id_anggota = id_anggota
        self._nama = nama
        self._nickname = nickname
        self._riwayat_turnamen = []
    
    def add_riwayat(self, riwayat):
        self._riwayat_turnamen.append(riwayat)
        
    def get_id_anggota(self): return self._id_anggota
    def get_nama(self): return self._nama
    def get_nickname(self): return self._nickname
    def get_riwayat_turnamen(self): return self._riwayat_turnamen