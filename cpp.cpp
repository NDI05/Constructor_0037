#include <iostream>
using namespace std;

class mahasiswa{
    private:
        static int jumlahMhs;
    public:
        string nama;
        mahasiswa(string  pNama){
            nama = pNama;
            ++jumlahMhs;
            cout << "Mahasiswa di buat " << nama << endl;
        };
        ~mahasiswa(){
            --jumlahMhs;
            cout << "Nama Terhapus " << nama << endl;
        };

        static void setJumlah(int pJumlah){
            jumlahMhs = pJumlah;
        }
        static int getJumlahMahasiswa(){
            return jumlahMhs;
        }
    
};

int mahasiswa::jumlahMhs = 0;

int main(){
    cout << "Jumlah Mahasiswa : " << mahasiswa::getJumlahMahasiswa() << endl;
    mahasiswa mhs1("Andi");
    mahasiswa mhs2("Bila");
    mahasiswa::setJumlah(5);
    {
        mahasiswa mhs3("Dizza");
        cout << "Jumlah Mahasiswa : " << mahasiswa::getJumlahMahasiswa() << endl;
    }

    cout << "Jumlah Mahasiswa Adalah " << mahasiswa::getJumlahMahasiswa() << endl;
    return 0;
};