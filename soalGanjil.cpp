#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public:
        string nama, nim;

    private:
        int nilai;

    friend class dosen;
};

class dosen{
    public:
        string nama, NDIN;

    private:
        string pangkat, gaji;

    friend class staff;
    friend void univ::gajiDosen(dosen &d);
};

class staff{
    public:
        string nama, idStaff;
    private:
        string gaji;
};

class univ{
    public:
        void gajiDosen(dosen &d);
};

int main(){;
}