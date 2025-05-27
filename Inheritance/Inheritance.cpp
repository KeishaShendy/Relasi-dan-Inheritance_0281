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
