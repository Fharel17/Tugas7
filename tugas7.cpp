#include <iostream>
using namespace std;

int main() {
    const int SIZE = 100; // Ukuran maksimal array
    int arr[SIZE];
    int n;

    // Input jumlah elemen
    cout << "Masukkan jumlah elemen (maksimal " << SIZE << "): ";
    cin >> n;

    // Validasi jumlah elemen
    if (n <= 0 || n > SIZE) {
        cout << "Jumlah elemen tidak valid!" << endl;
        return 1;
    }

    // Input nilai ke dalam array
    cout << "Masukkan " << n << " nilai integer:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Mencari nilai tertinggi
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "Nilai tertinggi adalah: " << maxVal << endl;

    // Mencari angka yang dimasukkan oleh user
    int numToFind;
    cout << "Masukkan angka yang ingin diperiksa: ";
    cin >> numToFind;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == numToFind) {
            cout << "Angka " << numToFind << " ditemukan di indeks: " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Angka " << numToFind << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
