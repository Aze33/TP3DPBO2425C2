public class RiwayatTurnamen {
    private String namaTurnamen;
    private int tahun;
    private int peringkatJuara;

    public RiwayatTurnamen(String nama, int tahun, int peringkat) {
        this.namaTurnamen = nama;
        this.tahun = tahun;
        this.peringkatJuara = peringkat;
    }

    public String getNamaTurnamen() { return this.namaTurnamen; }
    public int getTahun() { return this.tahun; }
    public int getPeringkatJuara() { return this.peringkatJuara; }
}