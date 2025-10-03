public class Pemain extends AnggotaTim {
    private String role;
    private String peringkat;
    private int jumlahMenang;

    public Pemain(String id, String nama, String nickname, String role, String peringkat, int menang) {
        super(id, nama, nickname);
        this.role = role;
        this.peringkat = peringkat;
        this.jumlahMenang = menang;
    }

    public String getRole() { return this.role; }
    public String getPeringkat() { return this.peringkat; }
    public int getJumlahMenang() { return this.jumlahMenang; }
}