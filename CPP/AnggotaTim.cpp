
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class AnggotaTim {
protected:
    string _idAnggota, _nama, _nickname;
    vector<RiwayatTurnamen> _riwayatTurnamen;
public:
    AnggotaTim(string id = "", string nama = "", string nickname = "") {
        this->_idAnggota = id; this->_nama = nama; this->_nickname = nickname;
    }
    void addRiwayat(const RiwayatTurnamen& riwayat) { this->_riwayatTurnamen.push_back(riwayat); }
    string getIdAnggota() const { return this->_idAnggota; }
    string getNama() const { return this->_nama; }
    string getNickname() const { return this->_nickname; }
    vector<RiwayatTurnamen> getRiwayatTurnamen() const { return this->_riwayatTurnamen; }
    virtual ~AnggotaTim() {}
};