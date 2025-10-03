public class Pelatih extends AnggotaTim {
    private String spesialis;
    private String lisensiPelatih;

    public Pelatih(String id, String nama, String nickname, String spesialis, String lisensi) {
        super(id, nama, nickname);
        this.spesialis = spesialis;
        this.lisensiPelatih = lisensi;
    }

    public String getSpesialis() { return this.spesialis; }
    public String getLisensiPelatih() { return this.lisensiPelatih; }
}