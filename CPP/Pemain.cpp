
class Pemain : public AnggotaTim {
private:
    string _role, _peringkat;
    int _jumlahMenang;
public:
    Pemain(string id = "", string nama = "", string nickname = "", string role = "", string peringkat = "", int menang = 0)
        : AnggotaTim(id, nama, nickname) {
        this->_role = role; this->_peringkat = peringkat; this->_jumlahMenang = menang;
    }
    string getRole() const { return this->_role; }
    string getPeringkat() const { return this->_peringkat; }
    int getJumlahMenang() const { return this->_jumlahMenang; }
    ~Pemain() {}
};
