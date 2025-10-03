# File: main.py
# Impor semua class yang dibutuhkan
from TimEsport import TimEsport
from Pemain import Pemain
from Pelatih import Pelatih
from Manajer import Manajer
from RiwayatTurnamen import RiwayatTurnamen

# --- FUNGSI UNTUK MENAMPILKAN DATA ---
def display_tim(tim):
    print("================================")
    print(f"Nama Tim      : {tim.get_nama_tim()}")
    print(f"Divisi Game   : {tim.get_divisi_game()}")
    print("--------------------------------")
    print("Daftar Anggota:")
    if not tim.get_daftar_anggota():
        print("- (Kosong)")
    else:
        for anggota in tim.get_daftar_anggota():
            print(f"\n  -> NAMA: {anggota.get_nama()} ({anggota.get_nickname()})")
            print(f"     ID Anggota: {anggota.get_id_anggota()}")

            # Pengecekan tipe objek
            if isinstance(anggota, Pemain):
                print(f"     Peran     : Pemain")
                print(f"     Role      : {anggota.get_role()}")
                print(f"     Peringkat : {anggota.get_peringkat()}")
                print(f"     Jml Menang: {anggota.get_jumlah_menang()}")
            elif isinstance(anggota, Pelatih):
                print(f"     Peran     : Pelatih")
                print(f"     Spesialis : {anggota.get_spesialis()}")
                print(f"     Lisensi   : {anggota.get_lisensi_pelatih()}")
            elif isinstance(anggota, Manajer):
                print(f"     Peran     : Manajer")
                print(f"     Divisi    : {anggota.get_divisi()}")
                print(f"     Level     : {anggota.get_level_jabatan()}")
                print(f"     Jml Menang: {anggota.get_jumlah_menang()}")
            
            print("     Riwayat Turnamen:")
            if not anggota.get_riwayat_turnamen():
                print("     - (Belum ada)")
            else:
                for r in anggota.get_riwayat_turnamen():
                    print(f"       - {r.get_nama_turnamen()} ({r.get_tahun()}) - Peringkat {r.get_peringkat_juara()}")

    print("================================")


# --- PROGRAM UTAMA ---
if __name__ == "__main__":
    # --- DATA SEBELUM DITAMBAHKAN ---
    tim_valorant = TimEsport("RRQ Valorant", "Valorant")

    pemain1 = Pemain("P01", "Budi", "Buid", "Duelist", "Radiant", 150)
    pemain1.add_riwayat(RiwayatTurnamen("VCT Pacific", 2024, 1))
    
    pelatih1 = Pelatih("C01", "Anton", "Toni", "Strategic", "Level A")

    tim_valorant.add_anggota(pemain1)
    tim_valorant.add_anggota(pelatih1)

    print("--- DATA SEBELUM DITAMBAHKAN ---")
    display_tim(tim_valorant)
    
    # --- TAMBAH DATA BARU (STATIS) ---
    print("\n...Menambahkan data manajer baru...")
    manajer1 = Manajer("M01", "Dina", "Dina", "Operasional", "Senior", 5)
    manajer1.add_riwayat(RiwayatTurnamen("Internal Planning", 2023, 0))
    tim_valorant.add_anggota(manajer1)

    # --- DATA SESUDAH DITAMBAHKAN ---
    print("\n--- DATA SESUDAH DITAMBAHKAN ---")
    display_tim(tim_valorant)