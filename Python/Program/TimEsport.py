# File: TimEsport.py
from AnggotaTim import AnggotaTim

class TimEsport:
    def __init__(self, nama_tim="", divisi_game=""):
        self._nama_tim = nama_tim
        self._divisi_game = divisi_game
        self._daftar_anggota = []

    def add_anggota(self, anggota):
        self._daftar_anggota.append(anggota)
        
    def get_nama_tim(self): return self._nama_tim
    def get_divisi_game(self): return self._divisi_game
    def get_daftar_anggota(self): return self._daftar_anggota