#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Dokter.cpp"
#include "Perawat.cpp"

using namespace std;

class RumahSakit {
private:
    string namaRumahSakit;
    vector<Dokter> daftarDokter;
    vector<Perawat> daftarPerawat;

public:
    RumahSakit(string namaRumahSakit) {
        this->namaRumahSakit = namaRumahSakit;
    }

    string getNamaRumahSakit() const { return namaRumahSakit; }
    void setNamaRumahSakit(string namaRumahSakit) { this->namaRumahSakit = namaRumahSakit; }

    void tambahDokter(const Dokter& d) {
        daftarDokter.push_back(d);
    }

    void tambahPerawat(const Perawat& p) {
        daftarPerawat.push_back(p);
    }

    void tampilkanSemuaStaf() const {
        cout << "==================================================================================" << endl;
        cout << "                       SISTEM MANAJEMEN: " << namaRumahSakit << endl;
        cout << "==================================================================================" << endl;
        
        cout << "\n[ DAFTAR DOKTER ]" << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        if (daftarDokter.empty()) {
            cout << "  (Belum ada data dokter)" << endl;
        } else {
            for (const auto& d : daftarDokter) {
                cout << "  ";
                d.tampilkanInfo();
            }
        }

        cout << "\n[ DAFTAR PERAWAT ]" << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        if (daftarPerawat.empty()) {
            cout << "  (Belum ada data perawat)" << endl;
        } else {
            for (const auto& p : daftarPerawat) {
                cout << "  ";
                p.tampilkanInfo();
            }
        }
        cout << "==================================================================================\n" << endl;
    }
};