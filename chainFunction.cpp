#include <iostream>
#include <string>
using namespace std;

class buku{
    string judul;
    public:
        buku setJudul(string judul){
            this->judul = judul;
            return *this;
        }
        string getJudul(){
            return this->judul;
        }
} bukunya;

int main(){
    cout << bukunya.setJudul("Pemrograman Berbasis Objek").getJudul();
    return 0;
}