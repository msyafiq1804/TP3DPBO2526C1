#pragma once
#include <iostream>
#include <string>
#include "TenagaMedis.cpp"

using namespace std;

class Dokter : public TenagaMedis {
private:
    string spesialisasi;

public:
    Dokter(string id, string nama, double gajiPokok, string spesialisasi)
        : TenagaMedis(id, nama, gajiPokok) {
        this->spesialisasi = spesialisasi;
    }

    string getSpesialisasi() const { return spesialisasi; }
    void setSpesialisasi(string spesialisasi) { this->spesialisasi = spesialisasi; }

    void tampilkanInfo() const override {
        TenagaMedis::tampilkanInfo();
        cout << " | Spesialisasi: " << spesialisasi << " [Peran: Dokter]" << endl;
    }
};