#pragma once
#include <iostream>
#include <string>
#include "TenagaMedis.cpp"

using namespace std;

class Perawat : public TenagaMedis {
private:
    string shiftKerja;

public:
    Perawat(string id, string nama, double gajiPokok, string shiftKerja)
        : TenagaMedis(id, nama, gajiPokok) {
        this->shiftKerja = shiftKerja;
    }

    string getShiftKerja() const { return shiftKerja; }
    void setShiftKerja(string shiftKerja) { this->shiftKerja = shiftKerja; }

    void tampilkanInfo() const override {
        TenagaMedis::tampilkanInfo();
        cout << " | Shift Kerja: " << shiftKerja << " [Peran: Perawat]" << endl;
    }
};