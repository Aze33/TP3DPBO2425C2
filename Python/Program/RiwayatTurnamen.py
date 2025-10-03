# File: RiwayatTurnamen.py
class RiwayatTurnamen:
    def __init__(self, nama_turnamen="", tahun=0, peringkat_juara=0):
        self._nama_turnamen = nama_turnamen
        self._tahun = tahun
        self._peringkat_juara = peringkat_juara
    
    def get_nama_turnamen(self): return self._nama_turnamen
    def get_tahun(self): return self._tahun
    def get_peringkat_juara(self): return self._peringkat_juara