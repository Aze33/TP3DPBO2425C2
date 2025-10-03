import java.util.ArrayList;

public class Main {

    public static void displayTim(TimEsport tim) {
        System.out.println("================================");
        System.out.println("Nama Tim      : " + tim.getNamaTim());
        System.out.println("Divisi Game   : " + tim.getDivisiGame());
        System.out.println("--------------------------------");
        System.out.println("Daftar Anggota:");

        if (tim.getDaftarAnggota().isEmpty()) {
            System.out.println("- (Kosong)");
        } else {
            for (AnggotaTim anggota : tim.getDaftarAnggota()) {
                System.out.println("\n  -> NAMA: " + anggota.getNama() + " (" + anggota.getNickname() + ")");
                System.out.println("     ID Anggota: " + anggota.getIdAnggota());

                // Pengecekan tipe objek (Polimorfisme)
                if (anggota instanceof Pemain) {
                    Pemain p = (Pemain) anggota;
                    System.out.println("     Peran     : Pemain");
                    System.out.println("     Role      : " + p.getRole());
                    System.out.println("     Peringkat : " + p.getPeringkat());
                    System.out.println("     Jml Menang: " + p.getJumlahMenang());
                } else if (anggota instanceof Pelatih) {
                    Pelatih c = (Pelatih) anggota;
                    System.out.println("     Peran     : Pelatih");
                    System.out.println("     Spesialis : " + c.getSpesialis());
                    System.out.println("     Lisensi   : " + c.getLisensiPelatih());
                } else if (anggota instanceof Manajer) {
                    Manajer m = (Manajer) anggota;
                    System.out.println("     Peran     : Manajer");
                    System.out.println("     Divisi    : " + m.getDivisi());
                    System.out.println("     Level     : " + m.getLevelJabatan());
                    System.out.println("     Jml Menang: " + m.getJumlahMenang());
                }

                System.out.println("     Riwayat Turnamen:");
                if (anggota.getRiwayatTurnamen().isEmpty()) {
                    System.out.println("     - (Belum ada)");
                } else {
                    for (RiwayatTurnamen r : anggota.getRiwayatTurnamen()) {
                        System.out.println("       - " + r.getNamaTurnamen() + " (" + r.getTahun() + ") - Peringkat " + r.getPeringkatJuara());
                    }
                }
            }
        }
        System.out.println("================================");
    }

    public static void main(String[] args) {
        // --- JANJI ---
        // Saya, [Isi Nama Lengkap Anda] ...

        // --- DATA SEBELUM DITAMBAHKAN ---
        TimEsport timValorant = new TimEsport("RRQ Valorant", "Valorant");

        Pemain pemain1 = new Pemain("P01", "Budi", "Buid", "Duelist", "Radiant", 150);
        pemain1.addRiwayat(new RiwayatTurnamen("VCT Pacific", 2024, 1));
        
        Pelatih pelatih1 = new Pelatih("C01", "Anton", "Toni", "Strategic", "Level A");

        timValorant.addAnggota(pemain1);
        timValorant.addAnggota(pelatih1);

        System.out.println("--- DATA SEBELUM DITAMBAHKAN ---");
        displayTim(timValorant);
        
        // --- TAMBAH DATA BARU (STATIS) ---
        System.out.println("\n...Menambahkan data manajer baru...");
        Manajer manajer1 = new Manajer("M01", "Dina", "Dina", "Operasional", "Senior", 5);
        manajer1.addRiwayat(new RiwayatTurnamen("Internal Planning", 2023, 0));
        timValorant.addAnggota(manajer1);

        // --- DATA SESUDAH DITAMBAHKAN ---
        System.out.println("\n--- DATA SESUDAH DITAMBAHKAN ---");
        displayTim(timValorant);
    }
}