#include <iostream>

using namespace std;

int main () {

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
        return 0;

}