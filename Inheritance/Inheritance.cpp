#include <iostream>
#include <string>
using namespace std;

class orang {
    public:
        string nama;

        orang(string pNama) {
            nama = pNama;
            cout << "Orang dibuat" << endl;
        }

        ~orang() {
            cout << "Orang dihpuskan" << endl;
        }

        int jumlah(int a, int b) {
            return a + b;
        }
};

class pelajar : public orang {
    public:
        string sekolah;

        pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
            cout << "Pelajar dibuat" << endl;
        }

        ~pelajar() {
            cout << "Pelajar dihpuskan" << endl;
        }

        string perkenalan() {
            return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n";
        }
};

int main() {
    pelajar siswa("Aniki Iksano", "SMA 1 Bantul");
    cout << siswa.perkenalan();
    cout << "Jumlah = " << siswa.jumlah(10, 20) << endl;

    return 0;
}