// Nama  : Tegar Subagdja
// NIM   : 15-2021-159
// Kelas : DD
// Mata Kuliah : Pemrograman Dasar

#include <iostream>

using namespace std;

void permenAnak () {
    system("cls");

    int permen[50];
    int temp;
    int highest = 0;
    int selisih;
    int k = 0;
    string nama[50];

    cout << "=============== INPUT ANAK ===============" << endl;
    for (int i = 1; i <= 3; i++) {
        cout << "Anak Ke-["<<i<<"]" << endl;
        cout << "Nama Anak     : ";
        getline(cin,nama[i]);
        cout << "Banyak Permen : ";
        cin >> permen[i];
        cin.ignore();
        cout << "-------------------------------------------" << endl;
    }

    for (int i = 1; i <= 2; i++) {
        for (int i = 1; i <= 2; i++) {
            if (permen[i] < permen[i+1]) {
                temp = permen[i];
                permen[i] = permen[i+1];
                permen[i+1] = temp;
            }
        }
    }

    highest = permen[1];
    cout << "============ PERMEN TERBANYAK ============" << endl;
    for (int i = 1; i <= 3; i++) {
        if (permen[i] == highest) {
            cout << "Nama Anak      : " << nama[i] << endl;
            cout << "Banyak Permen  : " << permen[i] << endl;
            k = k+1;
            cout << "-------------------------------------------" << endl;
        }
    }

    for (int i = k+1; i <= 3; i++) {
        selisih = highest - permen[i];
        cout << "Selisih dengan "<< nama[i] << " adalah : " << selisih << endl;
    }
    cout << "-------------------------------------------" << endl;

}

void block() {
    system("cls");
    cout << "PIN Anda telah di blokir!" << endl;
    cin;
}

void pinBank () {

    system("cls");

    int i = 1; 
    int pin;
    int pinset = 169;
    bool open;

    for (int i = 1; i <= 3; i++) {
        
    }

    do {
        cout << "Masukan PIN : ";
        cin >> pin;

        if (pin == pinset) {
            i = 3;
            open = true;
        } else {
            system("cls");
            cout << "PIN yang anda masukan salah "<<i<<"x" << endl;
            i = i + 1;
            open = false;
        }
    } while (i <= 3);

    do {
        if (open == true) {
            cout << "Login Berhasil..." << endl;
            i = 5;
        } else {
            system("cls");
            cout << "PIN Anda telah diblokir!" << endl;
            cout << "Masukan PIN : ";
            cin >> pin;
            i = i + 1;
        }
    } while(i <= 5);
}

void warung () {
    system("cls");

    int n;
    int jam;
    int jumlah[50];
    int harga[50];
    float total[50];
    float totalAll;
    string item[50];

    cout << "=====================================" << endl;
    cout << "Jumlah jenis belanjaan : ";
    cin >> n;
    cout << "Jam belanja : ";
    cin >> jam;
    cout << "=====================================" << endl;

    for (int i = 1; i <= n; i++) {
        cout << "Nama barang Ke-[" << i << "] : ";
        cin >> item[i];
        cout << "Harga       : ";
        cin >> harga[i];
        cout << "Jumlah      : ";
        cin >> jumlah[i];
        total[i] = jumlah[i] * harga[i];
        cout << "-------------------------------------" << endl;
    }
    cout << "=====================================" << endl;
    for (int i = 1; i <= n; i++) {
        totalAll = totalAll + total[i];
    }
    cout << "=====================================" << endl;

    

    for (int i = 1; i <= n; i++) {
        cout << "Nama barang Ke-[" << i << "] : " << item[i] << endl;
        cout << "Jumlah  : " << jumlah[i] << endl;
        cout << "Harga   : " << harga[i] << endl;
        cout << "Total   : " << total[i] << endl;
        cout << "-------------------------------------" << endl;
    }

    cout << "Total Harga : " << totalAll << endl;
    cout << "-------------------------------------" << endl;

    if ((jam >= 1300) && (jam <= 1400)) {
        cout << "Anda Mendapat diskon 20% yaitu Rp. " << (totalAll*0.2) << endl;
        totalAll = totalAll - (totalAll * 0.2);
        cout << "Total Harga menjadi : Rp. " << totalAll << endl;
    }
    cout << "-------------------------------------" << endl;
}

int main() {
    // pilih program yang di inginkan
    // [1] permenAnak();
    // [2] pinBank();
    // [3] warung();

    permenAnak();
    return 0;
}