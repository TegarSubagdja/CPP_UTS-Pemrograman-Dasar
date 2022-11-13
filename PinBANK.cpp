#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until7
using namespace std::chrono; // nanoseconds, system_clock, seconds

void hasil (bool benar) {
    system("cls");
        if (benar == true) {
            cout << "-------------------------------" << endl;
            cout << "| Selamat anda berhasil masuk |" << endl;
            cout << "-------------------------------" << endl;
        } else {
            cout << "-------------------------------------------------" << endl;
            cout << "| Kesalahan mencapai 3x | Anda telah di BLOCK! |" << endl;
            cout << "-------------------------------------------------" << endl;
            sleep_for(seconds(1));
        }
}

void block() {
    system("cls");
    cout << "------------------------- " << endl;
    cout << "| Anda telah di Blokir! | " << endl;
    cout << "------------------------- " << endl;
    sleep_for(seconds(1));
    system("cls");
}
    
int main() {

    system("cls");

    int i, kode;
    int kodeset = 15;
    bool benar = false;
    
    do {
        cout << "Masukan Kode : ";
        cin >> kode;

        if (kode == kodeset) {
            benar = true;
            i = 3;
        } else {
            system("cls");
            cout << "---------------------------------" << endl;
            cout << "| Kode yang anda masukan salah! |" << endl;
            cout << "---------------------------------" << endl;
            sleep_for(seconds(1));
            system("cls");
            i += 1;
            benar = false;
        }
    } while (i < 3);

    hasil(benar);

    sleep_for(seconds(3));
    system("cls");

    cout << "Masukan Kode : ";
    cin >> kode;
    block();


    return 0;
}