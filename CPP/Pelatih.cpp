
class Pelatih : public AnggotaTim {
private:
    string _spesialis, _lisensiPelatih;
public:
    Pelatih(string id = "", string nama = "", string nickname = "", string spesialis = "", string lisensi = "")
        : AnggotaTim(id, nama, nickname) {
        this->_spesialis = spesialis; this->_lisensiPelatih = lisensi;
    }
    string getSpesialis() const { return this->_spesialis; }
    string getLisensiPelatih() const { return this->_lisensiPelatih; }
    ~Pelatih() {}
};