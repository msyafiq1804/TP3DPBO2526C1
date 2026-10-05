#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class TenagaMedis {
protected:
    string id;
    string nama;
    double gajiPokok;

public:
    TenagaMedis(string id, string nama, double gajiPokok) {
        this->id = id;
        this->nama = nama;
        this->gajiPokok = gajiPokok;
    }

    string getId() const { return id; }
    string getNama() const { return nama; }
    double getGajiPokok() const { return gajiPokok; }

    void setId(string id) { this->id = id; }
    void setNama(string nama) { this->nama = nama; }
    void setGajiPokok(double gajiPokok) { this->gajiPokok = gajiPokok; }

    virtual void tampilkanInfo() const {
        cout << fixed << setprecision(0);
        cout << "ID: " << id << " | Nama: " << nama << " | Gaji Pokok: Rp " << gajiPokok;
    }

    virtual ~TenagaMedis() {}
};