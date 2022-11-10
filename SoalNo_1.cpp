#include <iostream>

using namespace std;

int main () {

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

    return 0;
}