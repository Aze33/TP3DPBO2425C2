import java.util.ArrayList;

public class AnggotaTim {
    protected String idAnggota;
    protected String nama;
    protected String nickname;
    protected ArrayList<RiwayatTurnamen> riwayatTurnamen;

    public AnggotaTim(String id, String nama, String nickname) {
        this.idAnggota = id;
        this.nama = nama;
        this.nickname = nickname;
        this.riwayatTurnamen = new ArrayList<>();
    }

    public void addRiwayat(RiwayatTurnamen riwayat) {
        this.riwayatTurnamen.add(riwayat);
    }

    public String getIdAnggota() { return this.idAnggota; }
    public String getNama() { return this.nama; }
    public String getNickname() { return this.nickname; }
    public ArrayList<RiwayatTurnamen> getRiwayatTurnamen() { return this.riwayatTurnamen; }
}