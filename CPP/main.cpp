#include <iostream>

// Include semua file class di sini dengan urutan yang benar
#include "RiwayatTurnamen.cpp"
#include "AnggotaTim.cpp"
#include "Pemain.cpp"
#include "Pelatih.cpp"
#include "Manajer.cpp"
#include "TimEsport.cpp"

using namespace std;

// --- FUNGSI UNTUK MENAMPILKAN DATA ---
void display_tim(const TimEsport& tim) {
    cout << "================================" << endl;
    cout << "Nama Tim      : " << tim.getNamaTim() << endl;
    cout << "Divisi Game   : " << tim.getDivisiGame() << endl;
    cout << "--------------------------------" << endl;
    cout << "Daftar Anggota:" << endl;
    if (tim.getDaftarAnggota().empty()) {
        cout << "- (Kosong)" << endl;
    } else {
        for (AnggotaTim* anggota : tim.getDaftarAnggota()) {
            cout << "\n  -> NAMA: " << anggota->getNama() << " (" << anggota->getNickname() << ")" << endl;
            cout << "     ID Anggota: " << anggota->getIdAnggota() << endl;
            
            // Cek tipe asli objek untuk menampilkan data spesifik
            Pemain* p = dynamic_cast<Pemain*>(anggota);
            if (p != nullptr) {
                cout << "     Peran     : Pemain" << endl;
                cout << "     Role      : " << p->getRole() << endl;
                cout << "     Peringkat : " << p->getPeringkat() << endl;
                cout << "     Jml Menang: " << p->getJumlahMenang() << endl;
            }
            Pelatih* c = dynamic_cast<Pelatih*>(anggota);
            if (c != nullptr) {
                cout << "     Peran     : Pelatih" << endl;
                cout << "     Spesialis : " << c->getSpesialis() << endl;
                cout << "     Lisensi   : " << c->getLisensiPelatih() << endl;
            }
            Manajer* m = dynamic_cast<Manajer*>(anggota);
            if (m != nullptr) {
                cout << "     Peran     : Manajer" << endl;
                cout << "     Divisi    : " << m->getDivisi() << endl;
                cout << "     Level     : " << m->getLevelJabatan() << endl;
                cout << "     Jml Menang: " << m->getJumlahMenang() << endl;
            }

            cout << "     Riwayat Turnamen:" << endl;
            if (anggota->getRiwayatTurnamen().empty()) {
                cout << "     - (Belum ada)" << endl;
            } else {
                for (RiwayatTurnamen r : anggota->getRiwayatTurnamen()) {
                    cout << "       - " << r.getNamaTurnamen() << " (" << r.getTahun() << ") - Peringkat " << r.getPeringkatJuara() << endl;
                }
            }
        }
    }
    cout << "================================" << endl;
}

// --- PROGRAM UTAMA ---
int main() {
    // --- DATA SEBELUM DITAMBAHKAN ---
    TimEsport tim_valorant("RRQ Valorant", "Valorant");

    Pemain* pemain1 = new Pemain("P01", "Budi", "Buid", "Duelist", "Radiant", 150);
    pemain1->addRiwayat(RiwayatTurnamen("VCT Pacific", 2024, 1));
    
    Pelatih* pelatih1 = new Pelatih("C01", "Anton", "Toni", "Strategic", "Level A");

    tim_valorant.addAnggota(pemain1);
    tim_valorant.addAnggota(pelatih1);

    cout << "--- DATA SEBELUM DITAMBAHKAN ---" << endl;
    display_tim(tim_valorant);
    
    // --- TAMBAH DATA BARU (STATIS) ---
    cout << "\n...Menambahkan data manajer baru..." << endl;
    Manajer* manajer1 = new Manajer("M01", "Dina", "Dina", "Operasional", "Senior", 5);
    manajer1->addRiwayat(RiwayatTurnamen("Internal Planning", 2023, 0));
    tim_valorant.addAnggota(manajer1);

    // --- DATA SESUDAH DITAMBAHKAN ---
    cout << "\n--- DATA SESUDAH DITAMBAHKAN ---" << endl;
    display_tim(tim_valorant);

    return 0;
}