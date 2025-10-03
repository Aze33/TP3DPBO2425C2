

#include <iostream>
#include <string>
using namespace std;

class RiwayatTurnamen {
private:
    string _namaTurnamen;
    int _tahun;
    int _peringkatJuara;
public:
    RiwayatTurnamen(string nama = "", int tahun = 0, int peringkat = 0) {
        this->_namaTurnamen = nama; this->_tahun = tahun; this->_peringkatJuara = peringkat;
    }
    string getNamaTurnamen() const { return this->_namaTurnamen; }
    int getTahun() const { return this->_tahun; }
    int getPeringkatJuara() const { return this->_peringkatJuara; }
    ~RiwayatTurnamen() {}
};