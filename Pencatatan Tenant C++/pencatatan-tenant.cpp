#include <iostream>
using namespace std;

int main() {
    const int MAX = 3; 
    string tenant[MAX];
    int jumlahTenant = 0;
    
    int pilihan;
    do {
        cout << "=== MENU BAZAR ===" << endl;
        cout << "1. Tambah Tenant" << endl;
        cout << "2. Lihat Tenant" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu [1-3]: ";
        cin >> pilihan;
        
        if (pilihan == 1) {
            if (jumlahTenant < MAX) {
                cout << "Masukkan nama tenant: ";
                cin.ignore();
                getline(cin, tenant[jumlahTenant]);
                jumlahTenant++;
                cout << "Tenant berhasil ditambahkan!" << endl;
            } else {
                cout << "Kapasitas penuh, tidak bisa menambah tenant baru." << endl;
            }
        } 
        else if (pilihan == 2) {
            cout << "\n=== Daftar Tenant ===" << endl;
            if (jumlahTenant == 0) {
                cout << "Belum ada tenant yang terdaftar." << endl;
            } else {
                for (int i = 0; i < jumlahTenant; i++) {
                    cout << i + 1 << ". " << tenant[i] << endl;
                }
            }
        }
        else if (pilihan == 3) {
            cout << "Program selesai. Terima kasih!" << endl;
        } 
        else {
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 3);
    
    return 0;
}
