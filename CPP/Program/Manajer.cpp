

class Manajer : public AnggotaTim {
private:
    string _divisi, _levelJabatan;
    int _jumlahMenang;
public:
    Manajer(string id = "", string nama = "", string nickname = "", string divisi = "", string level = "", int menang = 0)
        : AnggotaTim(id, nama, nickname) {
        this->_divisi = divisi; this->_levelJabatan = level; this->_jumlahMenang = menang;
    }
    string getDivisi() const { return this->_divisi; }
    string getLevelJabatan() const { return this->_levelJabatan; }
    int getJumlahMenang() const { return this->_jumlahMenang; }
    ~Manajer() {}
};