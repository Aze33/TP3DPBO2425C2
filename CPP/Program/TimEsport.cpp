
#include <vector>

class TimEsport {
private:
    string _namaTim, _divisiGame;
    vector<AnggotaTim*> _daftarAnggota;
public:
    TimEsport(string nama = "", string divisi = "") {
        this->_namaTim = nama; this->_divisiGame = divisi;
    }
    void addAnggota(AnggotaTim* anggota) { this->_daftarAnggota.push_back(anggota); }
    string getNamaTim() const { return this->_namaTim; }
    string getDivisiGame() const { return this->_divisiGame; }
    vector<AnggotaTim*> getDaftarAnggota() const { return this->_daftarAnggota; }
    ~TimEsport() {
        for (AnggotaTim* anggota : this->_daftarAnggota) {
            delete anggota;
        }
    }
};