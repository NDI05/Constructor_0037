#include <iostream>
#include <string>
using namespace std;

class dosen;
class staff;
class univ;

class mahasiswa{
    public:
        string nama, nim;

    private:
        float nilai;

    friend class dosen;
};

class dosen{
    public:
        string nama, NDIN;
        void beriNilai(mahasiswa* m, float nilai){
            m->nilai = nilai;
        };

    private:
        string pangkat;
        float gaji = 10000;

    friend class staff;
    friend float lihatGajiDosen(dosen* d);

};

class staff{
    public:
        string nama;
        int idStaff;
        void ubahPangkat(dosen* d, string pangkatBaru) {
            d->pangkat = pangkatBaru;
        }
    private:
        float gaji = 5000;

    friend float lihatGajiStaff(staff* s);
};

class Universitas {
    public:
        float lihatGajiDosen(dosen* d);
};

float lihatGajiDosen(dosen* d) {
    return d->gaji;
}

float lihatGajiStaff(staff* s) {
    return s->gaji;
}

int main() {
    mahasiswa mhs;
    dosen dsn;
    staff stf;

    dsn.beriNilai(&mhs, 100);
    stf.ubahPangkat(&dsn, "Dekan");

    cout << "Gaji dosen : " << lihatGajiDosen(&dsn) << endl; 
    cout << "Gaji staff : " << lihatGajiStaff(&stf) << endl; 

    return 0;
}
