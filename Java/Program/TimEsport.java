import java.util.ArrayList;

public class TimEsport {
    private String namaTim;
    private String divisiGame;
    private ArrayList<AnggotaTim> daftarAnggota;

    public TimEsport(String nama, String divisi) {
        this.namaTim = nama;
        this.divisiGame = divisi;
        this.daftarAnggota = new ArrayList<>();
    }

    public void addAnggota(AnggotaTim anggota) {
        this.daftarAnggota.add(anggota);
    }

    public String getNamaTim() { return this.namaTim; }
    public String getDivisiGame() { return this.divisiGame; }
    public ArrayList<AnggotaTim> getDaftarAnggota() { return this.daftarAnggota; }
}