public class Manajer extends AnggotaTim {
    private String divisi;
    private String levelJabatan;
    private int jumlahMenang;

    public Manajer(String id, String nama, String nickname, String divisi, String level, int menang) {
        super(id, nama, nickname);
        this.divisi = divisi;
        this.levelJabatan = level;
        this.jumlahMenang = menang;
    }

    public String getDivisi() { return this.divisi; }
    public String getLevelJabatan() { return this.levelJabatan; }
    public int getJumlahMenang() { return this.jumlahMenang; }
}