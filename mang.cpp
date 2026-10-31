#include <iostream>

using namespace std;

int main() {
    int a[5] = {3, 7, 2, 9, 5};

    cout << "Mang ban dau: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Tinh tong cac phan tu trong mang
    int tong = 0;
    for (int i = 0; i < 5; i++) {
        tong += a[i];
    }
    cout << "Tong cac phan tu: " << tong << endl;

    return 0;
}
