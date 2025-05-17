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
};

int main(){
    
}