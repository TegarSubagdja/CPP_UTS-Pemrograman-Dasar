#include <iostream>

using namespace std;

void block() {
    system("cls");
    cout << "PIN Anda telah di blokir!" << endl;
    cin;
}


int main() {
    system("cls");

    int kode;
    int kodeset = 151002;
    bool verif = true;

    cout << "========== VERIFIKASI ==========" << endl;    

    do{
        
        if (verif == true) {
            for ( int i = 1; i <= 2; i++) {
            cout << "Masukan PIN Anda : ";
            cin >> kode;
            if (kode == kodeset) { 
                cout << "Verifikasi Berhasil..." << endl;
                verif = true;
            } else {
                cout << "Verifikasi Gagal!" << endl;
                verif = false;
            }
            cout << "--------------------------------" << endl;
        }
        } else {
            block();
        }
        cout << "Masukan PIN : ";
        cin >> kode;
    }while (verif == false);
}